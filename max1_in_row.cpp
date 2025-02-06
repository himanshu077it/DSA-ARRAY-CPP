class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int rows = mat.size();
        int cols = mat[0].size();
        int max = INT_MIN;
        int count;
        int index;
        for(int i = 0;i < rows;i++){
            count = 0;
            for(int j = 0;j < cols;j++){
                if(mat[i][j] == 1){
                    count ++;
                }
            }
            if(max < count){
                max = count;
                index = i;
            }
        }
        ans.push_back(index);
        ans.push_back(max);
        return ans;
    }
};