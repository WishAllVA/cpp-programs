class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> umap;
        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            umap[temp].push_back(strs[i]);
        }
        unordered_map<string, vector<string>>::iterator itr;
        vector<vector<string>> s;
        for (itr = umap.begin(); itr != umap.end(); itr++)
        {
            s.push_back(itr->second);
        }
        return s;
    }
};