//Majority Element: > n/2 times
#include<unordered_map>
int majorityElement(vector<int> nums) {
	// Write your code here
        /*
    // Brute
    int n=nums.size();
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if(nums[j]==nums[i]){
                cnt++;
            }
        }
        if(cnt>n/2){
            return nums[i];
            // break;
        }
    }
    return -1;
    */
    /*
    // better
    int n=nums.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(auto& i:mp){
        if(i.second>n/2){
            return i.first;
        }
    }
    return -1;
    */

    // Most optimal:

    int el;
    int n=nums.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=nums[i];
            cnt++;
        }
        else if(nums[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    // Checking if it's realy appearing more than n/2 times
    cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el){
            cnt++;
        }
    }

    return cnt>n/2?el:-1;

}
