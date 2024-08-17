#include<iostream>
using namespace std;

void fib(int n)
{
    int t1=0, t2=1;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout<<t1<<", ";
            continue;
        }
        if(i==2)
        {
            cout<<t2<<", ";
            continue;
        }
        int nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
        cout<<nextTerm<<", ";
    }
}

int main()
{
    cout<<"Enter number of terms: ";
    int n;
    cin>>n;    
    fib(n);
    return 0;
}