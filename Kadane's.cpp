#include <bits/stdc++.h>
using namespace std;
// next permutation
 int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
              sum+=nums[i];
            if(sum<0){ 
                sum=0; 
            }
           if(maxi<sum){
               maxi=sum;
           }
          
            }
            
        
        return maxi;
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

int ans=maxSubArray(v);
cout<<ans<<endl;
	return 0;
}
