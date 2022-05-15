//
// Created by Iluha on 10.05.2022.
//

#include <iostream>
#include "list.h"

void list::push(int data) {
    node* item = new node(data);

    if (this->head == nullptr) {
        this->head = item;
        this->tail = item;
    } else {
        this->tail->setNext(item);
        this->tail = item;
    }

    this->tail->setNext(nullptr);
}

node* list::operator[](int index) {
    node* current = this->head;
    int curIndex = 0;

    while (current != nullptr) {
        if (curIndex == index)
            return current;

        current = current->getNext();
        curIndex++;
    }

    return nullptr;
}

void list::print() {
    node* current = this->head;

    while (current != nullptr) {
        std::cout << current->getData() << " ";
        current = current->getNext();
    }
}

int list::length() {
    node* current = this->head;
    int length = 0;

    while (current != nullptr) {
        length++;
        current = current->getNext();
    }

    return length;
}

list::~list() {
    node* current = this->head;

    while (current != nullptr) {
        node* next = current->getNext();
        delete current;
        current = next;
    }
}