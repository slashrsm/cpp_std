/*
 * main.cpp
 *
 *  Created on: 27. okt. 2012
 *      Author: slashrsm
 */

#include <iostream>
#include <cstdlib>
#include "sorts.h"
#include "standard.h"
#include "linked_list.h"
using namespace std;

void test_ll();

int main() {
    test_ll();

    return 1;
}

void test_ll() {
    LinkedList list;
    list.append(rand());
    list.append(rand());

    cout << list.get(0) << endl;
    cout << list.get(1) << endl;

    list.remove(1);

    cout << list.get(0) << endl;
    cout << list.get(1) << endl;
}
