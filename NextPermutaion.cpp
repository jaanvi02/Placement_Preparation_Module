#include <bits/stdc++.h>
using namespace std;
// next permutation
    
    
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
   int a;
   cin>>a;
   v[i]=a;
}

int i;
for( i=n-2;i>=0 ;i--){
    if(v[i]<v[i+1]){
        break;
    }
}
if(i<0){
    reverse(v.begin(),v.end());
}
else{
    int l;
    for( l=n-1;l>i;l--){
        if(v[l]>v[i]){
            break;
        }
    }
    swap(v[i],v[l]);
    reverse(v.begin()+i+1,v.end());
}
for(auto it:v){
    cout<<it<<" ";
}
	return 0;
}
