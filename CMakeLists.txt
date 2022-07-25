cmake_minimum_required(VERSION 3.22)
project(BST_Lab)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(BST_Lab
        BST.cpp
        BST.h
        BSTInterface.h
        main.cpp
        NodeInterface.h
        Node.h
        Node.cpp)
