#include <iostream>
using namespace std;
#define MAX 5
struct stack
{
   int stk[MAX];
int top; };
struct stack s;
void push ()
{
   int num;
   if (s.top==MAX-1)
   {
       cout<<"Stack is Full\n";
return; }
else {
       cout<<"Enter the element to be pushed\n";
       cin>>num;
       s.top = s.top + 1;
       s.stk[s.top] = num;
} return;
}
