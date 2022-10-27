cmake_minimum_required(VERSION 3.23)
project(Imageflip C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Imageflip
        imagehelper.c
        imagehelper.h
        main.c)
