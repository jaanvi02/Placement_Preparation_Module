#include <bits/stdc++.h>
using namespace std;
// sort array of 0 1 and 2
 void solve(vector<int>& nums) {
      int mid=0,high=nums.size()-1,low=0;
      while(mid<=high){
          switch(nums[mid]){
              case 0:{
                  swap(nums[low],nums[mid]);
                  low++;mid++;
                  break;
              }
              case 1:{
                  mid++;
                  break;
              }
              case 2:{
                  swap(nums[mid],nums[high]);
                  high--;
                  break;
              }
          }
      }
      
    }
    
    
int main() {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
   int a;
   cin>>a;
   v[i]=a;
}

solve(v);
for(auto it: v){
    cout<<it<<" ";
}
	return 0;
}
