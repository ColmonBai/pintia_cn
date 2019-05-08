#include <iostream>

using namespace std;

int main()
{
    //系数 指数
    int x, y;
    int counter = 0;
    while(cin>>x>>y)
    {
        if(y)
        {
            if(!counter)
                cout<<x*y;
            else
                cout<<' '<<x*y;
            cout<<' '<<y-1;
            counter++;
        }
    }
    if(!counter)
        cout<<"0 0";
}
