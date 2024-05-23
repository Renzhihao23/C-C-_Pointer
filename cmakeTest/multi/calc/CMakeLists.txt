cmake_minimum_required(VERSION 3.16)
project(calc)

# 搜索源文件
aux_source_directory(./ SRC)
include_directories(${HEAD_PATH})

# 指定静态库生成目录
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

add_library(${CALC_LIB} STATIC ${SRC})

