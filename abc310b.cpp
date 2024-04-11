#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int>pvec(n), cvec(n);
    vector<vector<bool>>fvec(n,vector<bool>(m,false));
    for(int i=0; i<n; i++){
        cin >> pvec[i];
        int c;
        cin >> c;
        cvec[i]=c;
        for(int j=0; j<c; j++){
            int f;
            cin >> f;
            f--;
            fvec[i][f]=true;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            bool flag =true;
            for(int f=0; f<m; f++){
                if(fvec[j][f] && (!fvec[i][f])){flag=false; break; }
            }
            if(!flag){continue;}
            if(pvec[i]>pvec[j]){continue;}
            if(cvec[i]>cvec[j] || pvec[i]<pvec[j]){
                cout << "Yes" << endl;
                //cout << i << j << endl;
                //for(int e:fvec[0]){cout << e;}
                //cout << endl;
                //for(int e:fvec[3]){cout << e;}
                return 0;
            }
        }
    }
    cout << "No" << endl;
}