class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
            int i=0;
            while(i<=nums.size()-1){
                if(nums.size()==0){
                    return 0;
                }
                if(nums[i]==val){
                    nums.erase(nums.begin()+i);
                }
                else{
                    i++;
                }
            }
        return nums.size();
    }
};