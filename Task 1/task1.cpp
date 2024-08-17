#include<iostream>
using namespace std;

void revString(string str)
{
    string str2 = str;

    for(int i=str.length(); i>=0; i--)
    {
        str2[i] = str[str.length()-1-i];
    }
    cout<<str2;
}
int main()
{
    string str;
    
    cout<<"Enter the string: ";
    cin>>str;

    revString(str);
}