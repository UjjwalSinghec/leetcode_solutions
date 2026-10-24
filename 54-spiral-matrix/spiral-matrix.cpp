class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()){
            return {};
        }
       int minr=0,minc=0;
       int maxr=matrix.size()-1;
       int maxc=matrix[0].size()-1;
       int count=0;
       vector<int> vec;
       while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc;j<=maxc;j++){
            vec.push_back(matrix[minr][j]);
           count++;
        }
        minr++;
        if(count==matrix.size()*matrix[0].size()){
            break;
        }
        // down
        for(int i=minr;i<=maxr;i++){
            vec.push_back(matrix[i][maxc]);
            count++;
        }
        maxc--;
        if(count==matrix.size()*matrix[0].size()){
            break;
        }
        // left
        for(int j=maxc;j>=minc;j--){
            vec.push_back(matrix[maxr][j]);
            count++;
        }
        maxr--;
        if(count==matrix.size()*matrix[0].size()){
            break;
        }
        // up
        for(int i=maxr;i>=minr;i--){
            vec.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
        if(count==matrix.size()*matrix[0].size()){
            break;
        }
        } 
        return vec;
        
    }
};