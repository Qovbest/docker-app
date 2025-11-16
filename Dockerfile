# 使用官方的 GCC 镜像作为基础镜像
FROM gcc:latest

# 设置工作目录
WORKDIR /app

# 将源代码复制到容器中
COPY main.cpp .

# 编译 C++ 程序
RUN g++ -o myapp main.cpp

# 设置容器启动时运行的命令
CMD ["./myapp"]
