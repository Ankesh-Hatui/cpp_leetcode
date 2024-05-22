
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        /*
        // Brute
        vector<int>ans;
        for(int i=0;i<n;i++){
            int leader=a[i];
            for(int j=i+1;j<n;j++){
                if(a[j]>leader){
                    leader=-1;
                    break;
                }
            }
            if(leader!=-1){
                ans.push_back(leader);
            }
            
        }
        
        return ans;
        */

        // Better
        vector<int>ans;
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=maxi){
                maxi=a[i];
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
