 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int gap = ceil((float)(n + m) / 2);
       while(gap>0){
           int i=0,j=gap;
           while(j<(n+m)){
               if(j<n && nums1[i]<nums2[j]){
                   swap(nums1[i],nums2[j]);
               }
               if(j>=n && i<n && nums1[i]<nums2[j-n]){
                   swap(nums1[i],nums2[j-n]);
               }
               if(i>=n && j>=n && nums1[i-n]<nums2[j-n]){
                   swap(nums1[i-n],nums2[j-n]);
               }
               i++;j++;
           }
    if (gap == 1) {
      gap = 0;
    } else {
      gap = ceil((float) gap / 2);
    }
       }

    }
