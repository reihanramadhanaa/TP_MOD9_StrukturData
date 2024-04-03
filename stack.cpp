#include <iostream>
#include "stack.h"
using namespace std;

void createStack_1302220048(stack &s) {
    s.Top = 0;
}

bool isEmpty_1302220048(stack s) {
    return s.Top == 0;
}

bool isFull_1302220048(stack s) {
    return s.Top == 15;
}

void push_1302220048(stack &s, infotype x) {
    if (!isFull_1302220048(s)) {
        s.Top = s.Top + 1;
        s.info[s.Top] = x;
    } else {
        cout << "Stack full" << endl;
    }
}

 infotype pop_1302220048(stack &s) {
    infotype x;

    if (isEmpty_1302220048(s)) {
        cout << "Stack Kosong" << endl;
    } else {
        x = s.info[s.Top];
        s.Top = s.Top - 1;

    }
       return x;
}

void printInfo_1302220048(stack s) {
    int i;

    for (i = s.Top; i > -1; i--) {
        cout << s.info[i] << " ";
    }
    cout << endl;
}
