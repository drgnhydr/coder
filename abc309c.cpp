#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int>> vec(n,vector<int>(2));
    for(int i=0; i<n; i++){cin >> vec[i][0]; cin >> vec[i][1];}
    sort(vec.begin(),vec.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] > beta[0];});
    int tot=0;
    //for(int i=0; i<n; i++){tot+=vec[i][1];}
    for(int i=0; i<n; i++){
        tot+=vec[i][1];
        if(tot>k){cout << vec[i][0]+1 << endl; return 0;}
    }
    cout << 1 << endl;
}