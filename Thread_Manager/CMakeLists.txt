cmake_minimum_required(VERSION 3.30)
project(Thread_Manager C)

set(CMAKE_C_STANDARD 11)

add_executable(Thread_Manager hw_thread.c
        main.c)
