#include<iostream>
using namespace std;
void SumOFdigit(int num)
{
    int digitSum=0;
    while(num>0)
    {
        int lastDigit=num%10;
        num=num/10;
        digitSum += lastDigit;
    }
    cout<<digitSum<<endl;
}
int main()
{
    SumOFdigit(226);
}