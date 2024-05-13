// LeetCode - 118 
// Pascal's Triangle
class Solution {
    void solution(vector<vector<int>>&ans,vector<int>current,int numRows){
        if(numRows==1){
            return;
        }
        vector<int>temp;
        temp.push_back(1);
        for(int i=1;i<current.size();i++){
            temp.push_back(current[i-1]+current[i]);
        }
        temp.push_back(1);
        ans.push_back(temp);
        current=temp;
        solution(ans,current,numRows-1);
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>current;
        current.push_back(1);
        ans.push_back(current);
        solution(ans,current,numRows);
        return ans;
    }
};
