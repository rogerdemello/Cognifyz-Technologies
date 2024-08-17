#include<iostream>
using namespace std;
void GradingSys()
{
    cout<<"Grading System: "<<endl;
    cout<<"A = 10"<<endl;
    cout<<"B = 8"<<endl;
    cout<<"C = 6"<<endl;
    cout<<"D = 4"<<endl;
    cout<<"Otherwise 0"<<endl;
}

int main()
{
    GradingSys();
    int subCount;
    cout<<"Enter number of subjects: ";
    cin>>subCount;
    char sub[subCount];
    float total = 0;
    
    for(int i=0; i<subCount; i++)
    {
        cout<<"Enter Grade of subject "<<i+1<<": ";
        cin>>sub[i];
        if(sub[i] == 'A') total += 10;
        else if(sub[i] == 'B') total += 8;
        else if(sub[i] == 'C') total += 6;
        else if(sub[i] == 'D') total += 4;
        else total += 0;
    }
    float AvgGrade = total/subCount;

    cout<<"Average grade: ";
    if(AvgGrade>8 && AvgGrade<=10) cout<<"A";
    else if(AvgGrade>6 && AvgGrade<=8) cout<<"B";
    else if(AvgGrade>4 && AvgGrade<=6) cout<<"C";
    else if(AvgGrade>2 && AvgGrade<=4) cout<<"D";
    else cout<<"Fail";
}