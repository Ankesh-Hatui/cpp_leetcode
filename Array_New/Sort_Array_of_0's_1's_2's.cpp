#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{

    //Brute force will be any sorting algo


    // Better 
    /*
    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i=0;i<n;i++){
        while(count0--){
            arr[i]=0;
            i++;
        }
        while(count1--){
            arr[i]=1;
            i++;
        }
        while(count2--){
            arr[i]=2;
            i++;
        }
    }
    */

    // Most Optiaml(Detch National flag Algo)

    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){

        if(arr[mid]==0){
            std::swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            std::swap(arr[mid],arr[high]);
            high--;
        }

    }


}
