#include <bits/stdc++.h>
using namespace std;
// merge intervals
    

int main() {
vector<vector<int>>arr;
arr.push_back({1,3});
arr.push_back({2,6});
arr.push_back({8,10});
arr.push_back({15,18});
 vector<int>curr=arr[0];
 vector<vector<int>>v;
   sort(arr.begin(),arr.end());
 for(auto it: arr){
     if(it[0]<=curr[1]){
         curr[1]=max(it[1],curr[1]);
     }
     else{
         v.push_back(curr);
         curr=it;
     }
 }
 v.push_back(curr);
for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}

	return 0;
}
