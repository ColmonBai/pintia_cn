#include <iostream>
using namespace std;
int main()
{
    int N;
    int t;
    bool dict[10000] = {0};

    cin>>N;
    while(N--)
    {
        cin>>t;
        dict [t] = true;
    }
	//从最小的数开始验证猜想 途径的数直接屏蔽掉
    for(int i=1; i<=100; i++)
    {
        if(dict[i])
        {
            t = i;
            while (t!=1)
            {
                if (t%2)
                {
                    int cover =((t*3+1)/2);
                    dict [cover] = false;
                    t = cover;
                }
                else
                {
                    int cover = t/2;
                    dict [cover] = false;
                    t = cover;
                }
            }
        }
    }
	// 这里有坑 注意输出顺序 从大到小
    int flag = 0;
    for(int i=100; i>0; i--)
    {
        if(dict[i])
        {
            if(flag)
                cout<<' ';
            flag ++;
            cout<<i;
        }
    }
}
