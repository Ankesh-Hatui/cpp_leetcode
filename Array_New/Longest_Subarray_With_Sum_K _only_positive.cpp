// Longest Subarray With Sum K. (only +ve)
// Better (Brute force on notes)
#include<unordered_map>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    /*
    unordered_map<long long ,int>mp;

    int n=a.size();

    int maxi=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            maxi=max(maxi,i+1);
            //mp.insert({sum,i});
        }
        long long r=sum-k;
        if(mp.find(r)!=mp.end()){
            maxi=max(maxi,i-mp[r]);
        }
        if(mp.find(r)==mp.end()){
            mp.insert({sum,i});
        }
    }

    return maxi;
    */

// most optimal


    int l=0;
    int r=0;
    long long maxi=0;
    long long sum=a[0];
    while(r<a.size()){
        while(left<=right && sum>k){
            sum-=a[l];
            l++;
        }
        if(sum==k){
            long long idx=r-l+1;
            maxi=max(maxi,idx);
        }
        r++;
        if(r<a.size()){
            sum+=a[r];
        }
    }
    return maxi;
}



