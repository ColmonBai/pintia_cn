#include <iostream>
using namespace std;
int main()
{
    string name, id, maxStr, minStr;
    int score;
    int maxScore=-1;
    int minScore= 101;
    int N;

    cin>>N;
    while(N--)
    {
        cin>>name>>id>>score;
        //只需保存最大最小值
        if(score>maxScore){
            maxScore = score;
            maxStr=name+' '+id;
        }
        if(score<minScore){
            minScore = score;
            minStr = name+' '+id;
        }
    }
    cout<<maxStr<<endl<<minStr<<endl;
}

