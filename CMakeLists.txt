cmake_minimum_required(VERSION 3.10)
project(AllTasks)

set(CMAKE_CXX_STANDARD 17)

add_executable(all_tasks
    main.cpp
    func.cpp
    Class.cpp
    TASK3_Triangle.cpp
    TASK3_Right_triangle.cpp
    TASK3_Isosceles_triangle.cpp
    TASK3_Equilateral_triangle.cpp
    TASK3_Quadrangle.cpp
    TASK3_Rectangle.cpp
    TASK3_Square.cpp
    TASK3_Parallelogram.cpp
    TASK3_Rhombus.cpp
)