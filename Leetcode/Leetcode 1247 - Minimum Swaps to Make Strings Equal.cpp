class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int m=0,p=0;
        int l = s1.length();
        for(int i=0;i<l;i++) {
            if(s1[i]==s2[i]) continue;
            else if(s1[i]=='x' && s2[i]=='y') m++;
            else p++;
        }
        int total =0;
        if((m%2==1 && p%2==0) || (p%2==1 && m%2==0)) {
            return -1;
        }
        total += m/2;        
        total += p/2;
        if(m%2==0 && p%2==0) {
            return total;
        }
        
        
        return total + 2;
    }
};