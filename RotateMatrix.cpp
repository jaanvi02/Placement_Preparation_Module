#include <bits/stdc++.h>
using namespace std;
// rotate matrix by 90 degree
    

int main() {
vector<vector<int>>arr;
arr.push_back({1,2,3});
arr.push_back({4,5,6});
arr.push_back({7,8,9});

int n=3,m=3;
for(int i=0;i<n;i++){
    for(int j=i+1;j<m;j++){
        swap(arr[i][j],arr[j][i]);
    }
    reverse(arr[i].begin(),arr[i].end());
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
}
cout<<endl;
}

	return 0;
}
