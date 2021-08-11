class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsetLength = 1 << n;
        cout<<subsetLength;
        vector<vector<int>> ans;
        for(int i=0;i<subsetLength;i++) {
            vector<int> subset;
            for(int j=0;j<n;j++) {
                if ((i & (1<<j)) != 0) {
                   subset.push_back(nums[j]); 
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};