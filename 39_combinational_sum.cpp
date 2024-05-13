// Recursion Combinational sum
//question no 39
class Solution {
    void solution(vector<int>candidates,vector<vector<int>>&ans,vector<int>current,int index,int target){
        if(target<0 || index==candidates.size()){
            return;
        }
        if(target==0){
            ans.push_back(current);
            return;
        }

        current.push_back(candidates[index]);
        solution(candidates,ans,current,index,target-candidates[index]);

        current.pop_back();
        solution(candidates,ans,current,index+1,target);
        return;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>current;
        solution(candidates,ans,current,0,target);
        return ans;
    }
};
