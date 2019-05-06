#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int b = n/100;
    int s = n/10%10;
    int g = n%10;
    while(b--) cout <<'B';
    while(s--) cout <<'S';
    for(int i=1; i<=g; i++){
        cout<<i;
    }
}
