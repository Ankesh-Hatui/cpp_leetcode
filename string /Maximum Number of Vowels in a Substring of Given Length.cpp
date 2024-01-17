class Solution {
public:
     bool vowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int maxi=0;
        int count=0;
        for(int i=0;i<k;i++){
            if(vowel(s[i])){
                count++;
            }
        }
        maxi=count;
        for(int i=k;i<s.length();i++){
            if(vowel(s[i-k])){
                count--;
            }
            if(vowel(s[i])){
                count++;
            }
            maxi=max(count,maxi);
        }
        return maxi;
    }
};
