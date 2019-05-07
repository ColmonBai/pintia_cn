#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;
//将一行文字转化为字符串流 输入到栈中 再输出
int main()
{
    stack<string> stk;
    string line,t;
    getline(cin, line);
    stringstream  ss(line);
    while(ss>>t)
    {
        stk.push(t);
    }
    cout<<stk.top();
    stk.pop();
    while(!stk.empty()){
        cout<<' ';
        cout<<stk.top();
        stk.pop();
    }
}
