class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        set<vector<int>>s1;
        unordered_map<int,int>p;
        for(int i=0;i<n;i++) {
            if(p.find(nums[i]) == p.end()) {
                p[nums[i]] = 1;
            } else {
                p[nums[i]]++;
            }
        }
        for (int i=0;i<n-1;i++) {
            p[nums[i]]--;
            for (int j=i+1;j<n-1;j++) {
                p[nums[j]]--;
                int value = nums[i]+nums[j];
                value = -1 * value;
                if(p.find(value) != p.end()){
                    if(p[value]>0) {
                        vector<int>z {nums[i], nums[j], value};
                        sort(z.begin(),z.end());
                        s1.insert(z);
                    }
                }
                p[nums[j]]++;
            }
            p[nums[i]]++;
        }
        for(auto it=s1.begin(); it!=s1.end();++it) ans.push_back(*it);
        return ans;
    }
};