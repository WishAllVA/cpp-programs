class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>>s1;
        for(int i=0;i<n-2;i++) {
            int low = i+1;
            int high = n-1;
            int target = -1 * nums[i];
            while(low<high) {
                if(nums[low] + nums[high] == target) {
                    vector<int>z{nums[low], -1*target, nums[high]};
                    sort(z.begin(),z.end());
                    s1.insert(z);
                    low++;
                    high--;
                } else if(nums[low] + nums[high] > target) {
                    high--;
                } else {
                    low++;
                }
            }
        }
        for(auto itr = s1.begin();itr!=s1.end();itr++) {
            v.push_back(*itr);
        }
        return v;
    }
};