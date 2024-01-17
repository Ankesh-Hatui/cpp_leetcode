class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        unordered_set<char>u;
        int st=0;
        int end=0;
        while(end<s.length()){
            if(u.count(s[end])==0){
                u.insert(s[end]);
                count=max(count,end-st+1);
                end++;
            }
            else{
                u.erase(s[st]);
                st++;
            }
        }
        return count;
    }
};
