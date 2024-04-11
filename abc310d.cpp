#include<iostream>
#include<vector>
using namespace std;

int n, t, m;
vector<int> vab, vteam;

int dfs(int player){
    if(player==n){
        return vteam.size()==(unsigned)t;
    }
    int ans=0;
    for(int &team: vteam){
        if(!(team & vab[player])){
            team ^= (1<<player);
            ans += dfs(player+1);
            team ^= (1<<player);
        }
    }
    if(vteam.size()<(unsigned)t){
        vteam.push_back(1<<player);
        ans += dfs(player+1);
        vteam.pop_back();
    }
    return ans;
}

int main(){
    cin >> n >> t >> m;
    vab = vector<int>(n,0);
    vteam = vector<int>(0);
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        a--; b--;
        vab[a] |= 1<< b;
        vab[b] |= 1<< a;
    }
    vteam.reserve(t);
    cout << dfs(0) << endl;
}