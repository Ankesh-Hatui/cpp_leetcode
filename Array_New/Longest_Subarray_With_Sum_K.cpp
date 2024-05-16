//Longest subarray sum with both +ve and -ve
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here

// Better (no optimal further can be done

    unordered_map<int,int>mp;

    int maxi=0;
    int sum=0;

    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            maxi=max(maxi,i+1);
        }
        int remainder=sum-k;

        if(mp.find(remainder)!=mp.end()){
            maxi=max(maxi,i-mp[remainder]);
        }
        if(mp.find(remainder)==mp.end()){
            mp.insert({sum,i});
        }
    }

    return maxi;
}
