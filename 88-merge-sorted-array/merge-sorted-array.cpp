class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>nums3(m+n);
    int k=0;
    int i=0;
    int j=0;
    while(i<=m-1 && j<=n-1){
        if(nums1[i]<nums2[j]){
            nums3[k++]=nums1[i++];
        }
        else if(nums1[i]>nums2[j]){
            nums3[k++]=nums2[j++];
            
        }
        else if(nums1[i]==nums2[j]){
            nums3[k++]=nums1[i];
            nums3[k++]=nums2[j];
            i++;
            j++;
            
        }
        
    }
    if(i==m){
        while(j<=n-1){
            nums3[k]=nums2[j];
            j++;
            k++;
        }
    }
    else if(j==n){
        while(i<=m-1){
            nums3[k]=nums1[i];
            i++;
            k++;
        }
    }
    for(int p=0; p<m+n; p++){
    nums1[p] = nums3[p];
    }
    return;
    }  

};