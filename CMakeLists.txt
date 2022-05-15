cmake_minimum_required(VERSION 3.21)
project(graph_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(graph_3 main.cpp list/list.cpp list/list.h list/node.cpp list/node.h readGraph/readGraph.cpp readGraph/readGraph.h stack/stack.cpp stack/stack.h dfs/dfs.cpp dfs/dfs.h)
