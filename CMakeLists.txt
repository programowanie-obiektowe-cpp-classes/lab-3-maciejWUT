cmake_minimum_required(VERSION 3.8)

project(lab3_zal)

add_executable(zal test.cpp "transportujFlota.hpp")
#add_executable(zal "main.cpp" "figura.cpp" "figura.h" "kolo.cpp" "kolo.h" "kwadrat.cpp" "kwadrat.h")
target_include_directories(zal PUBLIC include)
set_target_properties(zal PROPERTIES
    CXX_STANDARD 17
)
