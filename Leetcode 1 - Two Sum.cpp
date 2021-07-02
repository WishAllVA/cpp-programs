class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums_new(nums.size());
        for(int i=0;i<nums.size();i++) {
            nums_new[i] = nums[i];
        }
        sort(nums.begin(), nums.end());
        int i=0;
        int j=nums.size()-1;
        vector<int>sum(2);
        while(1) {
            if(nums[i]+nums[j] == target) {
                sum[0]=i;
                sum[1]=j;
                break;
            } else if(nums[i]+nums[j] > target) {
                j--;
            } else {
                i++;
            }
            
        }
        int y=-1,z=-1;
        for(int i=0;i<nums_new.size();i++) {
            if(nums_new[i] == nums[sum[0]] && z!=i && y==-1 ) y=i;
            else if(nums_new[i] == nums[sum[1]] && y!=i && z==-1 ) z=i;
        }
        sum[0]=y;
        sum[1]=z;
        return sum;
    }
};