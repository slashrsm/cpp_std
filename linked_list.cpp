/*
 * linked_list.cpp
 *
 *  Created on: 28. okt. 2012
 *      Author: slashrsm
 */

#include "linked_list.h"

LLNode::LLNode() {
    this->data = 0;
    this->next = 0;
}

LLNode::~LLNode() {
    delete this->next;
}

LinkedList::LinkedList() {
    this->first = 0;
}

LinkedList::~LinkedList() {
    delete this->first;
}

/**
 * Finds last element in linked list.
 */
LLNode* LinkedList::getLastElem() {
    // Return null if we have 0 elements in LL.
    if (this->first == 0) {
        return 0;
    }

    // Find last element.
    LLNode* ret = this->first;
    while (ret->next != 0) {
        ret = ret->next;
    }

    return ret;
}

/**
 * Finds last element in linked list.
 */
LLNode* LinkedList::getElem(int pos) {
    LLNode* elem = this->first;
    if (elem == 0) {
        return 0;
    }

    for (int i=0; i < pos; i++) {
        elem = elem->next;

        if (elem == 0) {
            return 0;
        }
    }

    return elem;
}

/**
 * Appends an element to a linked list.
 */
void LinkedList::append(int data) {
    LLNode* last = this->getLastElem();
    if (last != 0) {
        last->next = new LLNode();
        last->next->data = data;
    }
    else {
        this->first = new LLNode();
        this->first->data = data;
    }
}


/**
 * Returns element on position pos.
 */
int LinkedList::get(int pos) {
    LLNode* elem = this->first;
    if (elem == 0) {
        return 0;
    }

    for (int i=0; i < pos; i++) {
        elem = elem->next;

        if (elem == 0) {
            return 0;
        }
    }

    return this->getElem(pos)->data;
}

void LinkedList::remove(int pos) {
    LLNode* successor = this->getElem(pos-1);
    if (successor != 0 && successor->next != 0) {
        LLNode* new_successor = successor->next->next;
        delete successor->next;
        successor->next = new_successor;
    }
}
