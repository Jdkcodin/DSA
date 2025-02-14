#include<iostream>
using namespace std;
int main()
{
    int i,j,N;
    int num=1;
    cout<<"enter the value of N:";
    cin>>N;
    for(i=0;i<N;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            cout<<"*";
                                          //for numbers just enter i+1 or num based on required pattern
        }
        cout<<endl;
    }
}