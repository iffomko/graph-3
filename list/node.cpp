//
// Created by Iluha on 10.05.2022.
//

#include "node.h"

node::node() {
    this->next = nullptr;
    this->data = 0;
}

node::node(int data) {
    this->next = nullptr;
    this->data = data;
}

node::node(int data, node *next) {
    this->next = next;
    this->data = data;
}

node* node::getNext() {
    return this->next;
}

int node::getData() const {
    return this->data;
}

void node::setNext(node *next) {
    this->next = next;
}

void node::setData(int data) {
    this->data = data;
}