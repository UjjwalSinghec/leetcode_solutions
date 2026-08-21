class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rotatepart(0,n-k-1,nums);
        rotatepart(n-k,n-1,nums);
        rotatepart(0,n-1,nums);
        return;
        
    }
    void rotatepart(int i,int j,vector<int>& vec){
        while(i<=j){
            int temp=vec[i];
            vec[i]=vec[j];
            vec[j]=temp;
            i++;
            j--;
        }
        return;
    }
};