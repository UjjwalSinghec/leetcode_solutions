class Solution {
public:
    void sortColors(vector<int>& nums) {
    int i=0;
    int j=0;
    int k=0;
    for(int m=0;m<nums.size();m++){
    if(nums[m]==0) i++;
    else if(nums[m]==1) j++;
    else if(nums[m]==2) k++;
    }
    for(int m=0;m<nums.size();m++){
    if(m<i){
        nums[m]=0;
    }
    else if(m<i+j){
        nums[m]=1;
    }
    else if(m<nums.size()){
        nums[m]=2;
    }
    }
    return ;
    }
};