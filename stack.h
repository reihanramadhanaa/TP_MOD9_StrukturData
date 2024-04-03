#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


#define info(s) s.info
#define Top(s) s.Top

using namespace std;

typedef string infotype ;

struct stack{
 infotype info[15];
 int Top ;

};

void createStack_1302220048(stack &s);
bool isEmpty_1302220048(stack s);
bool isFull_1302220048(stack s);
void push_1302220048(stack &s, infotype x);
infotype pop_1302220048(stack &s);
void printInfo_1302220048(stack s);


#endif // STACK_H_INCLUDED






