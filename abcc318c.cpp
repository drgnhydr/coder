#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;
int main(){
    ll n, d, p;
    cin >> n >> d >> p;
    vector<ll>f(n);
    for(int i=0; i<n; i++){cin >> f[i];}
    sort(f.begin(),f.end());
    reverse(f.begin(),f.end());
    vector<ll>g(n+1,0);
    for(int i=n-1; i>=0; i--){
        g[i] = g[i+1] + f[i];
    }
    //return 0;
    ll ans = p * (n / d + 1);
    for(int m=0; m * d <=n; m++){//m: セット数
        ll sm = m * p;
        //for(int i=m*d; i<n; i++){sm+=f[i];}
        sm += g[m*d];
        if(ans>sm){ans=sm;}
    }
    cout << ans << endl;
}