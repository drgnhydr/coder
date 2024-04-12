#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(101, vector<int>(101,0));
    for(int i=0; i<n; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for(int x=a; x<b;x++){
            for(int y=c; y<d; y++){
                vec[x][y]=1;
            }
        }
    }
    int cnt=0;
    for(int x=0;x<101;x++){
        for(int y=0; y<101; y++){
            cnt += vec[x][y];
        }
    }
    cout << cnt;
}