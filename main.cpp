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
    cout << "Start LinkedList test." << endl;

    LinkedList list;
    list.append(rand());
    list.append(rand());

    cout << "First element: " << list.get(0) << endl;
    cout << "Second element: " <<  list.get(1) << endl;
    cout << "Count: " <<  list.size() << endl;

    list.insert(1, rand());

    cout << "First element: " << list.get(0) << endl;
    cout << "Second element: " <<  list.get(1) << endl;
    cout << "Count: " <<  list.size() << endl;

    list.insert(0, rand());

    cout << "First element: " << list.get(0) << endl;
    cout << "Second element: " <<  list.get(1) << endl;
    cout << "Count: " <<  list.size() << endl;

    list.insert(10, rand());

    cout << "First element: " << list.get(0) << endl;
    cout << "Second element: " <<  list.get(1) << endl;
    cout << "Count: " <<  list.size() << endl;

    list.remove(1);

    cout << "First element: " << list.get(0) << endl;
    cout << "Second element: " <<  list.get(1) << endl;
    cout << "Count: " <<  list.size() << endl;

    list.remove(0);

    cout << "First element: " << list.get(0) << endl;
    cout << "Second element: " <<  list.get(1) << endl;
    cout << "Count: " <<  list.size() << endl;

    cout << "End LinkedList test." << endl;
}
