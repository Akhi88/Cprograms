#include <iostream>
#define Max 101

using namespace std;
class Stack
{
    private:
    
        int A[Max];
        int top=-1;
        
public:
    void push(int p)
    {
        if(top==Max-1)
        {
            cout<<"Stack Full";
            return ;
        }
        A[++top]=p;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Empty";
            return;
        }
        top=top-1;
    }
    int print()
    {
        if(top==-1)
        {
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        for(int i=0;i<=top;i++)
        {
            cout<<A[i]<<endl;
        }
        return A[top];
        
    }
    
    
};


int main()
{
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    s.pop();
    s.push(5);
    s.print();
    return 0;
}
