//
// Created by Iluha on 10.05.2022.
//

#pragma once

#ifndef GRAPH_3_LIST_H
#define GRAPH_3_LIST_H

#include "node.h"

class list {
    node* head = nullptr;
    node* tail = nullptr;
public:
    list() {};
    void push(int index);
    node* operator[](int index);
    void print();
    int length();
    ~list();
};


#endif //GRAPH_3_LIST_H
