cmake_minimum_required(VERSION 3.20)
project(Genius-Tests-C C)

set(CMAKE_C_STANDARD 99)

add_executable(test00 test/test00.c src/ex00/ft_putstr.c)
add_executable(test01 test/test01.c src/ex01/ft_putnbr.c)
add_executable(test02 test/test02.c src/ex02/ft_strcpy.c)