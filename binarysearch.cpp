/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int b_search(string a[],int n,string key)
{
    int low=0;
    int high=n;
    int mid=(low+high)/2;

    
    while(low<high)
    {
        if(key<a[mid])
        {
            low=0;
            high=mid-1;
            mid=(low+high)/2;
        }
        
        else if(key>a[mid])
        {
            low=mid+1;
            high=n;
            mid=(low+high)/2;
        }
        
        else if (key==a[mid])
        {
            return 1;
        }
    }
    if(low>=high)
    {
        return 0;
    }
}
int main()
{
    string a[100],key ;
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter chars"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cout<<"Enter Key"<<endl;
    cin>>key;
    
    int flag=b_search(a,n,key);
    if(flag==1)
    {
        cout<<"found"<<endl;
        
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    return 0;
}
