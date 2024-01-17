class Solution {
public:
int k=1000;
    bool uniqueOccurrences(vector<int>& arr) {
        /*
        //using hashmap and hashset:

        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        unordered_set<int>freq;
        for(auto [key,value]:mp){
            freq.insert(value);
        }
        return mp.size()==freq.size();
        */
        //using Array:

        
        vector<int>freq(2*k+1);
        for(int i=0;i<arr.size();i++){
            freq[arr[i]+k]++;
        }
        sort(freq.begin(),freq.end());
        for(int i=0;i<2*k;i++){
            if(freq[i]!=0 && freq[i]==freq[i+1]){
                return false;
            }
        }
        return true;
    }
};
