#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int c, temp;
    cout<<"Enter choice: "<<endl;
    cout<<"1. Ascending"<<endl;
    cout<<"2. Descending"<<endl;
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
            sort(arr, arr+n);            
            break;
        case 2:
            sort(arr, arr+n, greater<int>());
            break;
        
        default:
            cout<<"Wrong input.\nTerminating..."<<endl;
    }

    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
} 