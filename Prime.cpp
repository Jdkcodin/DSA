#include <iostream>
using namespace std;
int main()
{
    int i, n;
    bool isPrime = true;
    cout << "enter the Number N:";
    cin >> n;
    for (i = 2; i*i <= n - 1; i++)
    {
        if (n % i == 0)
            isPrime = false;
            break;
    }
    
    if(isPrime==true)
        cout<<"Prime number\n"<<endl;
    else
        cout<<"non Prime\n"<<endl;
}
//not the best approach because we can use the logic i*i in place of (i<=n-1)