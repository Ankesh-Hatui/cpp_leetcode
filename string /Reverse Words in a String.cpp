// Google interview question
class Solution {
    std::string trim(const std::string& str) {
    auto start = str.begin();
    while (start != str.end() && std::isspace(*start)) {
        start++;
    }

    auto end = str.end();
    do {
        end--;
    } while (std::distance(start, end) > 0 && std::isspace(*end));

    return std::string(start, end + 1);
}
public:
    string reverseWords(string s) {
        string ans="";
        //s=trim(s);
        int ind=0;
        while(ind<s.length() && s[ind]==' '){
            ind++;
        }

        while(ind<s.length()){
            string temp="";
            while(s[ind]!=' ' && ind<s.length()){
                temp+=s[ind];
                ind++;
            }
            while(s[ind]==' '){
                ind++;
            }
            ans=temp+" "+ans;
            //ind++;
        }

        return trim(ans);
    }
};
