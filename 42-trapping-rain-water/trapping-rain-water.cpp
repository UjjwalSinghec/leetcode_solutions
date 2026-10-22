class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        //here pge represents previous greatest element and nge represent next greatest elements array
        int pge[n],nge[n];
        pge[0]=-1;
        int max=height[0];
        for(int i=1;i<n;i++){
            pge[i]=max;
            if(max<height[i]){
                max=height[i];
            }
        }
        nge[n-1]=-1;
        max=height[n-1];
        for(int i=n-2;i>=0;i--){
            nge[i]=max;
            if(max<height[i]){
                max=height[i];
            }
        }
        int mini[n];
        for(int i=0;i<n;i++){
            mini[i]=min(pge[i],nge[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(mini[i]-height[i]>0){
                sum=sum+(mini[i]-height[i]);
            }
        }
        return sum;

    }
};