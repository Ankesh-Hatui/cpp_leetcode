//Two sum:
#include<unordered_map>
string read(int n, vector<int> a, int k)
{
    // Write your code here.
    /*
    for(int i=0;i<n;i++){
        int sum=a[i];

        for(int j=i;j<n;j++){
            if(sum+a[j]==k){
                return "YES";
            }
        }
    }
    return "NO";
    */

    // Better

    /*
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int rem=k-a[i];
        if(mp.find(rem)!=mp.end()){
            return "YES";
        }
        else{
            mp.insert({a[i],i});
        }
    }
    return "NO";
    */

    // Optimal

    sort(a.begin(),a.end());

    int left=0;
    int right=n-1;
    while(left<=right){
        int sum=a[left]+a[right];
        if(sum==k){
            return "YES";
        }
        else if(sum>k){
            right--;
        }
        else{
            left++;
        }
    }
    return "NO";

}
