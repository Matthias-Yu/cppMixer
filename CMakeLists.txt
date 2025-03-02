# 最低CMake版本要求（推荐3.0+）
cmake_minimum_required(VERSION 3.10)

# 项目名称和语言设置
project(cppMixer LANGUAGES CXX)

# 设置C++标准（C++11为例）
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置源文件（推荐显式列出）

# 设置头文件目录
# include_directories(
#     ${PROJECT_SOURCE_DIR}/include
# )

# 生成可执行文件
add_executable(cppMixer main.cpp)
