/*
 * linked_list.h
 *
 *  Created on: 28. okt. 2012
 *      Author: slashrsm
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

class LLNode {
    public:
        int data;
        LLNode* next;
    public:
        LLNode();
        ~LLNode();
};

class LinkedList {
        LLNode* first;
        LLNode* getLastElem();
        LLNode* getElem(int);
    public:
        LinkedList();
        ~LinkedList();
        int get(int);
        void append(int);
        void prepend(int);
        void insert(int, int);
        void remove(int);
        void removeFirst();
        void removeLast();
        int size();
};

#endif /* LINKED_LIST_H_ */
