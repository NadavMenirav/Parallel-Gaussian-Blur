cmake_minimum_required(VERSION 3.31)
project(assignment_3 C)

set(CMAKE_C_STANDARD 99)

add_executable(assignment_3 main.c
        guassonFilter.c
        guassonFilter.h
        stb_image.h
        stb_image_write.h)
