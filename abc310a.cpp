#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, p, q;
    cin >> n >> p >> q;
    vector<int>vec(n);
    for(int i=0; i<n; i++){cin >> vec[i];}
    sort(vec.begin(),vec.end());
    cout << min({p, q+vec[0]});
}