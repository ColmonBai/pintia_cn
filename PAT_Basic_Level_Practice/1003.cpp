/*
重点理解条件2和3 条件3由条件2递推而来
在满足条件2 xPATx 的基础上 PT之间每增加一个A T后面就增加a个A
假设xPyTz形式 可以用 z=x*y判断
*/
#include<iostream>
#include <regex>
using namespace std;
bool findPAT (string str)
{
    int counter = 'P' + 'T' -'A' -'A', dict[150];
    for(int i=0; i<str.size(); i++){
        counter -= abs(str.at(i)-'A');
        dict[str.at(i)] = i + 1;
    }
    //条件1 仅有PAT三个字母组成 且P和T分别只有一个 A至少一个
    if((!counter)
       &&(dict['T']-dict['P']!=1)
       //条件2 3
       &&(((dict['P']-1)*(dict['T']-dict['P']-1))
          ==(str.size()-dict['T']))
       )
        return true;
    else
        return false;
}
int main()
{
    string str;
    int N;
    cin>>N;
    while(N--)
    {
        cin>>str;
        if(findPAT(str))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
