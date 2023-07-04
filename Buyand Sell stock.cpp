#include <bits/stdc++.h>
using namespace std;
// sort array of 0 1 and 2
 int solve(vector<int>& nums) {
     int mini=INT_MAX;
     int ans=INT_MIN;
   for(int i=0;i<nums.size();i++){
        mini= min(nums[i],mini);
        ans=max(ans,nums[i]-mini);
   }
   return ans;
      
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

int ans=solve(v);

    cout<<ans<<" ";

	return 0;
}
