#include<bits/stdc++.h>

using namespace std;
bool checkInput(int uNum)
{
    if(uNum > 3 || uNum < 1)
    {
        cout<<"Invalid output."<<endl;
        return false;
    }
    return true;
}

int Guess()
{
    cout<<"Enter your coice: "<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissor"<<endl;
    int i;
    cin>>i;
    return i;
}

int main()
{
    srand(static_cast<unsigned int>(std::time(nullptr)));
    int again = 1;
    
    while(again == 1)
    {
        int uNum = Guess();
        int cNum = rand() % 3 + 1;
        
        again = 0;
        bool status = checkInput(uNum);
        if(status == false)
        {
            cout<<"Exiting";
        }
        else
        {
            if(uNum == cNum)
            {
                cout<<"It's a tie"<<endl;
            }
            else if((uNum==1 && cNum==3) || (uNum==2 && cNum==1) || (uNum==3 && cNum==2))
            {
                cout<<"You Win!!"<<endl;
            }
            else
            {
                cout<<"You lose"<<endl;
            }
            cout<<"Computer Output:";
            switch(cNum)
            {
                case 1:
                    cout<<" Rock"<<endl;
                    break;
                case 2:
                    cout<<" Paper"<<endl;
                    break;
                case 3:
                    cout<<" Scissor"<<endl;
                    break;
            }
            
            cout<<endl;

            cout<<"Do you wish to play again?"<<endl;
            cout<<"1. Yes\n2. No"<<endl;
            cin>>again;
        }

    }
    return 0;   
}