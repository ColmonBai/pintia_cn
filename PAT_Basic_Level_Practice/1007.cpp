#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int N;
    int pre=-1;
    int counter = 0;

    cin>>N;
    for(int i=2; i<=N; i++)
    {
        if(isPrime(i))
        {
            if((i-pre)==2)
            {
                counter++;
            }
            //保存状态
            pre = i;
        }
    }
    cout<<counter;
    return 0;
}
