//
// Created by Iluha on 15.05.2022.
//

#pragma once
#ifndef GRAPH_3_STACK_H
#define GRAPH_3_STACK_H

#include <iostream>

class stack {
    int* data = nullptr;
    int size;
    int count;
public:
    stack();
    stack(int size);
    ~stack();

    bool push(int item);
    int pop();

    void print();
};


#endif //GRAPH_3_STACK_H
