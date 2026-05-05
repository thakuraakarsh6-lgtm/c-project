// wap to programming stack using array 
#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push(int val)
{
    if(top == MAX-1)
        cout << "Stack Overflow\n";
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if(top == -1)
        cout << "Stack Underflow\n";
    else
    {
        cout << "Deleted element: " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if(top == -1)
        cout << "Stack is empty\n";
    else
    {
        cout << "Stack elements: ";
        for(int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}