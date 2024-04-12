#include<iostream>
using namespace std;

int main(){
    int n, m, p;
    cin >> n>> m >> p;
    if(n<m){cout << 0 << endl; return 0;}
    int cnt=0;
    for(int i=0; m+i*p<=n; i++){
        cnt++;
    }
    cout << cnt << endl;
}