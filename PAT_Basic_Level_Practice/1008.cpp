#include <iostream>
#include <cmath>
using namespace std;
//连续地址的逆序
void reverse(int *b, int *e)
{
    while(b<e)
    {
        int t = *b;
        *b = *e;
        *e = t;
        b++;
        e--;
    }
}
void printArray(int *b, int *e)
{
    while(b<=e)
    {
        cout<<*b;
        b++;
        if(b!=(e+1))
            cout<<' ';
    }
}
int main()
{
    int a[200];
    int n,m;
    cin>>n>>m;
    //这里有坑 避免m比n大
    m = m%n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    //三段逆序 模拟位移
    reverse(a,a+n-m-1);
    reverse(a+n-m,a+n-1);
    reverse(a,a+n-1);
    printArray(a,a+n-1);
}
