class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow = nums[0];
        int fast = nums[nums[0]];

         while(slow != fast){

            slow = nums[slow];
            fast= nums[nums[fast]];
            if(slow == fast)
                break;
        }
        slow = 0;
while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
    if(slow == fast)
                return slow;
}

    }
};
