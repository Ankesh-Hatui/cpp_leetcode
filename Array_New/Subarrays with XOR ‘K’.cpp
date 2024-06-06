#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here

    /*
    // Brute or better

    int n=a.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        int xr=0;

        for(int j=i;j<n;j++){
            xr^=a[j];

            if(xr==b){
                cnt++;
            }
        }
    }

    return cnt;
    */

   // /*
  // most optimal
  // tc=O(n) or O(nlogn)
  // sc=O(n)
    unordered_map<int,int>mp;
    int cnt=0;
    int xr=0;
    mp[xr]++;
    for(int i=0;i<a.size();i++){
        xr=xr^a[i];
        int x=xr^b;
        cnt+=mp[x];
        mp[xr]++;
    }

    return cnt;
    //*/
}
