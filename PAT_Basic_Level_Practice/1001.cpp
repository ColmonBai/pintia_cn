#include <iostream>
using namespace std;
int main(){
  int n;
  int cnt = 0;
  cin>>n;
  while (n!=1){
    //对2取模判断奇偶
    if (n%2)
      n =((n*3+1)/2);
    else
      n /= 2;
  cnt++;
  }
  cout<<cnt;
}
