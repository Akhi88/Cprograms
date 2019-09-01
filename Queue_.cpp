/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define Max 10

using namespace std;
class Queue
{
    private:
    
        int A[Max];
        int front=-1;
        int rear=-1 ;
        
public:
    void enqueue(int p)
    {
        if(rear==Max-1)
        {
            cout<<"Queue Full";
            return ;
        }
        A[++rear]=p;
        if(front==-1)
        {
            front=0;
        }
    }
    void dequeue()
    {
        if(front==-1)
        {
            cout<<"Queue Empty";
            return;
        }
        front=front+1;
    }
    int print()
    {
        if(rear==-1)
        {
            cout<<"Queue Empty"<<endl;
            return 0;
        }
        for(int i=front;i<=rear;i++)
        {
            cout<<A[i]<<endl;
        }
        return A[rear];
        // return A[front];
    }
    
    
};


int main()
{
    Queue q;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.print();
    cout<<"************"<<endl;
    q.dequeue();
    q.print();
    cout<<"*******"<<endl;
    q.enqueue(5);
    q.print();
    return 0;
}
