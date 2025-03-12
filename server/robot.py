import os
import time
from openai import OpenAI

# 设置 API 客户端
client = OpenAI(api_key="sk-81ea9e23997546008d8ab5331de31843", base_url="https://api.deepseek.com")

# 存储对话消息
messages = []

# 定义文件路径
input_file_path = "robot.txt"
output_file_path = "robotanswer.txt"

while True:
    # 每4秒检查一次文件
    time.sleep(4)

    # 检查文件是否存在且有内容
    if os.path.exists(input_file_path) and os.path.getsize(input_file_path) > 0:
        # 打开文件读取内容
        with open(input_file_path, "r", encoding="utf-8") as file:
            user_input = file.read().strip()

        if user_input:  # 如果读取到的内容不是空的
            print(f"读取到内容：{user_input}")

            # 处理内容，向 AI 发送请求
            messages.append({"role": "user", "content": user_input})

            response = client.chat.completions.create(
                model="deepseek-chat",
                messages=messages
            )

            # 获取 AI 回复
            reply = response.choices[0].message
            print(f"{reply.content}")  # 输出 AI 的回复

            # 记录 AI 回复到消息历史
            messages.append({"role": reply.role, "content": reply.content})

            # 覆盖写入 AI 的回答到 robotanswer.txt 文件
            with open(output_file_path, "w", encoding="utf-8") as output_file:
                output_file.write(f"{reply.content}")

            print(f"AI 的回复已保存到 '{output_file_path}' 文件。")

            # 清空输入文件内容
            with open(input_file_path, "w", encoding="utf-8") as file:
                file.truncate(0)
            print("输入文件内容已清空。")

    else:
        print(f"等待文件 '{input_file_path}' 中的新内容...")
