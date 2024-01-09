class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int>ans2;
        getleaf(ans1,root1);
        getleaf(ans2,root2);
        return check(ans1,ans2);
    }
    void getleaf(vector<int>&v,TreeNode*root1){
        if(root1==nullptr)return;
        if(root1->left==nullptr && root1->right==nullptr){
            v.push_back(root1->val);
        }
        getleaf(v,root1->left);
        getleaf(v,root1->right);
    }
    bool check(vector<int>a1,vector<int>a2){
        if(a1.size()!=a2.size()){
            return false;
        }
        int n=a1.size();
        for(int i=0;i<n;i++){
            if(a1[i]!=a2[i]){
                return false;
            }
        }
        return true;
    }
};