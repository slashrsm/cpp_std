/*
 * linked_list.h
 *
 *  Created on: 28. okt. 2012
 *      Author: slashrsm
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

template <typename T>
class LLNode {
    public:
        T data;
        LLNode<T>* next;
    public:
        LLNode();
        ~LLNode();
};

template <typename T>
class LinkedList {
        LLNode<T>* first;
        LLNode<T>* getLastElem();
        LLNode<T>* getElem(int);
    public:
        LinkedList();
        ~LinkedList();
        int get(int);
        void append(T);
        void prepend(T);
        void insert(int, T);
        void remove(int);
        void removeFirst();
        void removeLast();
        int size();
};

#include "linked_list.hpp"

#endif /* LINKED_LIST_H_ */
