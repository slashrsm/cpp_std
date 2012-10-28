/*
 * main.cpp
 *
 *  Created on: 27. okt. 2012
 *      Author: slashrsm
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "sorts.h"
#include "standard.h"
#include "linked_list.h"
#include "hash_table.h"
using namespace std;

void test_ll();
void test_ht();

int main() {
    //test_ll();
    test_ht();

    return 0;
}

void test_ll() {
    cout << "Start LinkedList test." << endl;

    LinkedList <int> list;
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

void test_ht() {
    cout << "Start HashTable test." << endl;

    HashTable list;
    list.insert(string("fancykey"), rand());
    list.insert(string("evenfancierkey"), rand());

    int test = list.get("fancykey");
    int test1 = list.get("evenfancierkey");

    cout << "First element: " << list.get("fancykey") << endl;
    cout << "Second element: " <<  list.get("evenfancierkey") << endl;
    cout << "Nonexistent element: " <<  list.get("nogoelement") << endl;

    cout << "End HashTable test." << endl;
}
