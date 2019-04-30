#include <iostream>
using namespace std;
bool mod2(int n){
	if (n%2)
		return true;
	else
		return false;
}
int main(){
	int n = 3;
	int cnt = 0;
	while (n!=1){
		if (mod2(n))
			n/=2;
		else
			n =((n*3+1)/=2);
	cnt++;
	}
	cout<<cnt;
}
