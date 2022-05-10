//
// Created by Iluha on 10.05.2022.
//

#pragma once
#ifndef GRAPH_3_NODE_H
#define GRAPH_3_NODE_H


class node {
    node* next;
    int data;
public:
    node();
    explicit node(int index);
    node(int index, node* next);

    node* getNext();
    int getData() const;

    void setNext(node* next);
    void setData(int data);
};


#endif //GRAPH_3_NODE_H
