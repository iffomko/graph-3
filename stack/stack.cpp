//
// Created by Iluha on 15.05.2022.
//

#include "stack.h"

stack::stack() {
    this->size = 10;
    this->data = new int[this->size];
    this->count = 0;
}

stack::stack(int size) {
    this->size = size;
    this->data = new int[this->size];
    this->count = 0;
}

stack::~stack() {
    delete[] this->data;
}

bool stack::push(int item) {
    if (this->count < this->size)
        this->data[this->count++] = item;
    else
        return false;

    return true;
}

int stack::pop() {
    if (this->count > 0 && this->data != nullptr)
        return this->data[--this->count];
    else
        return -1;
}

void stack::print() {
    if (this->data != nullptr) {
        for (int i = 0; i < this->count; i++)
            std::cout << this->data[i] << " ";

        std::cout << std::endl;
    } else {
        std::cout << "Stack is empty..." << std::endl;
    }
}