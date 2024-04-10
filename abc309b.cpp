#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<char>> vec(n,vector<char>(n)), nvec(n,vector<char>(n));
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<n; j++){
            vec[i][j] = s[j];
            nvec[i][j] = vec[i][j];
        }
    }
    for(int i=0; i<n-1; i++){
        nvec[0][i+1]=vec[0][i];
        nvec[i+1][n-1]=vec[i][n-1];
        nvec[n-1][i]=vec[n-1][i+1];
        nvec[i][0]=vec[i+1][0];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << nvec[i][j];
        }
        cout << endl;
    }
}