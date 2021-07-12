// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

class Solution {
public:
    
    string compare(string str1, string str2) {
        int i=0;
        string ans;
        while(i<str1.length() && i < str2.length()) {
            if(str1[i]!=str2[i]) {
                return ans;
            }
            ans+=str1[i++];
        }
        return ans;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        string ans;
        ans = compare(strs[0],strs[1]);
        for(int i=1;i<n;i++) {
            ans = compare(ans, strs[i]);
        }
        return ans;
    }
};