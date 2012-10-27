/*
 * sorts.cpp
 *
 *  Created on: 27. okt. 2012
 *      Author: slashrsm
 */

void bubble_sort(int data[], int len) {
    bool changes = false;
    int temp = 0;
    do {
        changes = false;
        for (int i=0; i < len-1; i++) {
            if (data[i] > data[i+1]) {
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
                changes = true;
            }
        }
    } while(changes);
}



