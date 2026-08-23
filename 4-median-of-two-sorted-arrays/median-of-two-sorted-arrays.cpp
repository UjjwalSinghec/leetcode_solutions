class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for(int i=0;i<nums1.size();i++){
            nums3.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            nums3.push_back(nums2[i]);
        }
        
        sort(nums3.begin(), nums3.end());

        int aa = nums3.size();

        if(aa% 2 == 0){
            return (nums3[aa/2] + nums3[aa/2 - 1]) / 2.0;
        }
        else{
        return nums3[aa/2];
        }
    }

    
};