#include <iostream>
using namespace std;
int i, j;
int num = 1;
char ch = 'A';
void RevTRI()
{
    int N;
    cout << "enter the value of N:";
    cin >> N;
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void Floyd()
{
    int M;
    cout << "enter the value of M:";
    cin >> M;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void Inverted()
{
    int P, k;
    cout << "enter the value of P:";
    cin >> P;
    for (i = 0; i < P; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < P - i; j++)
        { // for character printing    'cout<<ch;'
            cout << i + 1 << " ";
        }
        cout << endl; // after the 2nd loop 'ch++;'
    }
}
void Pyramid()
{
    int Q = 4;
    for (i = 0; i < Q; i++)
    {
        for (j = 0; j < Q - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void Diamond()
{
    int n=6;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0)
        {
            for(j=0;j<2*i-1;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2)
        {
            for(j=0;j<2*(n-i)-5;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<< endl;
    }
}
void Butterfly()
{
    int n=4;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
     for (int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
     }
    
}

int main()
{

    Butterfly();
}