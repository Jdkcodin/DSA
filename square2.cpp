#include<iostream>
using namespace std;
int main(){
    int N,i,j;
    int num=1;
    cout<<"enter the value of N:\n";
    cin>>N;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}