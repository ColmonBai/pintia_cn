#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(){
	char str [105];
    // 注意此处有 零
    vector<string> dict = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	int sum = 0;

	cin>>str;
	for(int i=0; i<strlen(str); i++){
        sum +=str[i] - '0';
	}
    //整数最多999位 所以只需处理三位 注意空格
	if(sum>=100)
        cout<<dict[(sum/100%10)]<<' ';
    if(sum>=10)
        cout<<dict[(sum/10%10)]<<' ';
    cout<<dict[(sum%10)];
}
