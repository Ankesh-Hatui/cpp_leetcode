// only Optimal solution:
int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int maxi=INT_MIN;
    int count=0;
    for(int i=0;i<arr.size();i++){
        
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else{
           
            count=0;
        }
        
    }
    return maxi==INT_MIN?0:maxi;
}
