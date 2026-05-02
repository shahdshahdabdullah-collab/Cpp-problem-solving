#include <iostream>

using namespace std;
int main()
{
    int input1,input2;
    cout<<"And Gate Simulator: "<<endl;
    cout<<"Enter First input(0 or 1) :"<<endl;
    cin>>input1;
    cout<<"Enter Second input (0 or 1 :"<<endl;
    cin>>input2;
//And_Gate_Logic
    if(input1==1&&input2==1)
    {

        cout<<"Output=1"<<endl;
    }
    else
    {

        cout<<"Output=0"<<endl;
    }
}
