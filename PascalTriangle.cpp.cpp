#include <bits/stdc++.h>
using namespace std;
// pascal's triangle
     vector<vector<int>> generate(int n) {
        vector<vector<int>>r(n);
        for(int i=0;i<n;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
        
    }
    
int main() {
int n;
cin>>n;
vector<vector<int>>ans= generate(n);
for(auto it: ans){
    for(auto e: it){
        cout<<e;
    }
    cout<<endl;
}
	return 0;
}
