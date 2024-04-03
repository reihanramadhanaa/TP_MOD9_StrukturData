#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    stack S;
    createStack_1302220048(S);

    push_1302220048(S, "A");
    push_1302220048(S, "Y");
    push_1302220048(S, "A");
    push_1302220048(S, "J");
    push_1302220048(S, "B");
    push_1302220048(S, "A");
    push_1302220048(S, "L");
    push_1302220048(S, "F");
    push_1302220048(S, "I");
    printInfo_1302220048(S);

    pop_1302220048(S);
    pop_1302220048(S);
    pop_1302220048(S);
    pop_1302220048(S);
    pop_1302220048(S);
    printInfo_1302220048(S);
    return 0;

}
