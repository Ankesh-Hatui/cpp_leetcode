// Rearrange Array elements by sign
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        /*

        // Brute
        int n=nums.size();
        vector<int>positive;
        vector<int>negetive;

        vector<int>num;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                positive.push_back(nums[i]);
            }
            else{
                negetive.push_back(nums[i]);
            }
        }
        // for(int i=0;i<n/2;i++){
        //     cout<<positive[i];
        //     cout<<negetive[i];
        // }
        int j=0;
        for(int i=0;i<n/2;i++){

            num.push_back(positive[j]);
            num.push_back(negetive[j]);
            j++;
        }

        return num;

        */

        // Best or optimal

        ios_base :: sync_with_stdio(0),cin.tie(0),cout.tie(0);

        int posIndex=0;
        int negIndex=1;
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
            else {
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
        }

        return ans;
    }
};
