cmake_minimum_required(VERSION 3.14)
project(Getline)

add_compile_options(
	-Wall
	-Wextra
	-Werror
)

add_library(getline
	getline.c
)

target_include_directories(getline
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
