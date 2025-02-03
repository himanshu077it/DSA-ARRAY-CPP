#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
       int nonZeroIndex = 0; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZeroIndex++] = nums[i];
            }
        }

        for (int i = nonZeroIndex; i < nums.size(); i++) {
            nums[i] = 0;
        }
}
    
int main(){
    vector <int> arr = {0,1,2,3,0,4,0,5};
    moveZeroes(arr);
    cout << "printing array \n";
    for(int i:arr){
        cout << i;
    }
}