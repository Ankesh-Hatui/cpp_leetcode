class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0;
        int count2=0;
        int st=0;
        int end=s.length()-1;
        while(st<end){
            if(isvalid(s[st])){
                count1++;
            }
            if(isvalid(s[end])){
                count2++;
            }
            st++;
            end--;
        }
        if(count1==count2){
            return true;
        }
        return false;
    }
    bool isvalid(char c){
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
            return true;
        }
        return false;
    }
};
