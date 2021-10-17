cmake_minimum_required(VERSION 3.20)
project(Tasks)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp
        task_1 Task_1/task_1.cpp
        task_2 Task_2/task_2.cpp
        task_3 Task_3/task_3.cpp
        task_4 Task_4/task_4.cpp
        task_5 Task_5/task_5.cpp
        task_6 Task_6/task_6.cpp
        task_7 Task_7/task_7.cpp
        task_8 Task_8/task_8.cpp
        task_9 Task_9/task_9.cpp
        Tasks.h
        functions.cpp
        functions.h)