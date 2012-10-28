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
    this->first = new LLNode();
}

LinkedList::~LinkedList() {
    delete this->first;
}

/**
 * Finds last element in linked list.
 */
LLNode* LinkedList::getLastElem() {
    // Find last element.
    LLNode* ret = this->first;
    while (ret->next != 0) {
        ret = ret->next;
    }

    return ret;
}

/**
 * Finds an element in linked list.
 */
LLNode* LinkedList::getElem(int pos) {
    if (pos == -1) {
        return this->first;
    }

    LLNode* elem = this->first;
    for (int i=0; i <= pos; i++) {
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
    last->next = new LLNode();
    last->next->data = data;
}

/**
 * Prepend an element to a linked list.
 */
void LinkedList::prepend(int data) {
    LLNode* first = this->first;
    LLNode* old_next = first->next;
    first->next = new LLNode();
    first->next->data = data;
    first->next->next = old_next;
}

void LinkedList::insert(int pos, int data) {
    if (pos >= this->size()) {
        this->append(data);
        return;
    }

    LLNode* elem = this->getElem(pos-1);
    LLNode* old_next = elem->next;
    elem->next = new LLNode();
    elem->next->data = data;
    elem->next->next = old_next;
}

/**
 * Returns element on position pos.
 */
int LinkedList::get(int pos) {
    LLNode* elem = this->first;

    for (int i=0; i <= pos; i++) {
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

void LinkedList::removeFirst() {
    this->remove(0);
}

void LinkedList::removeLast() {
    this->remove(this->size()-1);
}

int LinkedList::size() {
    int count = 0;
    LLNode* elem = this->first;

    while (elem->next != 0) {
        count++;
        elem = elem->next;
    }

    return count;
}
