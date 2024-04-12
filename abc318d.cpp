#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long;

int num_on(int bit){
    int sm=0;
    for(int i=0; i<20; i++){sm+=(bit>>i)&1;}
    return sm;
}

int main(){
    int n;
    cin >> n;
    vector<vector<ll>> dvec(n,vector<ll>(n));
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            cin >> dvec[i][j];
            dvec[j][i] = dvec[i][j];
        }
    }
    vector<ll>dp(1<<n, 0);
    ll ans = 0;
    for(int bit=0; bit<(1<<n); bit++){
        if(num_on(bit)%2==1){continue;}
        for(int i=0; i<=n-2; i++){
            if((bit>>i)&1){continue;}
            for(int j=i+1; j<=n-1; j++){
                if((bit>>j)&1){continue;}
                int nbit = bit|(1<<i)|(1<<j);
                dp[nbit] = max(dp[nbit], dp[bit] + dvec[i][j]);
                ans = max(ans, dp[nbit]);
            }
        }
    }
    cout << ans << endl;
}