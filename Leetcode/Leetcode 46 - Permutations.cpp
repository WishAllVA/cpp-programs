class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()==1) return { nums };
        vector<vector<int>> finalAns;
        for(int i=0;i<nums.size();i++) {
            vector<int> curr(nums);
            int k = curr[i];
            curr.erase(curr.begin() + i);
            vector<vector<int>>ans = permute(curr);
            for(int j=0;j<ans.size();j++) {
                ans[j].push_back(k);
            }
            for(int j=0;j<ans.size();j++) {
                finalAns.push_back(ans[j]);
            }
        }
        return finalAns;
    }
};