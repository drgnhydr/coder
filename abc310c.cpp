#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> st, st_rv;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        string t=s;
        reverse(t.begin(),t.end());
        st.insert(t);
        st.insert(s);
        if(t==s){st_rv.insert(s);}
    }
    int ans = (st.size() + st_rv.size()) / 2;
    cout << ans << endl;
    //for(string e:st){cout << e << endl;}
}