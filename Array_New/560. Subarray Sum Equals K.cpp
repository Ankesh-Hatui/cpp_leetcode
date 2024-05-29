// brute may not working in some cases
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        // brute or better
        // int cnt=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     int sum=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt+1;
        
        // optimal

        unordered_map<int,int>mp;
        int sum=0;
        int cnt=0;
        mp.insert({0,1});
        
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(mp.find(sum-k)!=mp.end()){
        //         cnt+=mp[sum-k];
        //     }
        //     mp[sum]++;
        // }
        

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            cnt+=mp[sum-k];
            mp[sum]++;
        }
        return cnt;
        
    }
};
