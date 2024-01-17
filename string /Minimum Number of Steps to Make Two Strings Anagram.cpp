class Solution {
public:
    int minSteps(string s, string t) {
        int hashS[26]={0};
        int hashT[26]={0};
        for(int i=0;i<s.length();i++){
            hashS[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            hashT[t[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(hashS[i]>hashT[i]){
                count+=hashS[i]-hashT[i];
            }
        }
        return count;
    }
};
