#!/bin/bash
# 你可以使用 grep 和 awk 命令从 /proc/cpuinfo 文件中提取 CPU 的型号名称，并根据不同的型号名称设置不同的编译选项。以下是一个示例脚本：
# 虽然硬件同属于一个厂家，但是不同的cpu有这个不同的加速计算特性，需要根据cpu名称指定 用脚本让它在编译时自动选择

#获取 CPU 型号名称
cpu_model=$(grep -m 1 'model name' /proc/cpuinfo | awk -F: '{print $2}' | xargs)

# 编译器使用g++
compiler=g++

#根据 CPU 型号名称设置编译选项
if [[ "$cpu_model" == "Intel" ]]; then
    echo "Detected Intel CPU"
    compile_options="-march=native -O2"
elif [[ "$cpu_model" == "AMD" ]]; then
    echo "Detected AMD CPU"
    compile_options="-march=znver1 -O2"
else
    echo "Unknown CPU model"
    compile_options="-O2"
fi

#输出编译选项
echo "Compile options: $compile_options"

#使用编译选项进行编译
#gcc $compile_options -o my_program my_program.c
$compiler $compile_options -o my_program my_program.c
