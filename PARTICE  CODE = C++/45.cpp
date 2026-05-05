// wap to programming  to queue using array 
#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val)
{
    if(rear == MAX-1)
        cout << "Queue Overflow\n";
    else
    {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
        cout << "Queue Underflow\n";
    else
    {
        cout << "Deleted element: " << queue[front] << endl;
        front++;
    }
}

void display()
{
    if(front == -1)
        cout << "Queue is empty\n";
    else
    {
        cout << "Queue elements: ";
        for(int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    
    display();
    
    dequeue();
    
    display();

    return 0;
}