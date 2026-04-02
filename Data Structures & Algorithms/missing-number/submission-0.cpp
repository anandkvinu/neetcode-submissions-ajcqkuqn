class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = nums.size();
        int temp = num;

        for (int i=0; i<num;i++){
           temp ^=i ^ nums[i];
        }
        return temp;
        
    }
};
