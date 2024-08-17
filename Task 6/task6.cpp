#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    string temp;
    bool set = true;
    int n = str.length();
    for(int i=0; i<n/2; i++)
    {
        if(str[i] != str[n-i-1])
        {
            set = false;
            break;
        }
    }
    if(set == true)
    {
        cout<<"It is a Palindrome.";
    }
    else
    {
        cout<<"Not a Palindrome.";
    }
}