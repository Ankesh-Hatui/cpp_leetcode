int totalFruits(int N, vector<int> &fruits) {
        /*
        int maxi=0;
        for(int i=0;i<N;i++){
            set<int>s;
            for(int j=i;j<N;j++){
                s.insert(fruits[j]);
                if(s.size()>2){
                    break;
                }
                else if(s.size()<=2){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
        
        return maxi;
        
        // T.C:O(N^2)
        // S.C:O(1)
        */
 // Better
unordered_map<int,int>mp;
        int maxi=0;
        
        int l=0,r=0;
        while(r<N && l<=r){
            mp[fruits[r]]++;
            if(mp.size()>2){
                while(mp.size()>2){
                    mp[fruits[l]]--;
                    if(mp[fruits[l]]==0){
                        mp.erase(fruits[l]);
                    }
                    l++;
                }
            }
            
            else if(mp.size()<=2){
                maxi=max(r-l+1,maxi);
            }
            
            r++;
        }
        
        return maxi;
        
        // T.C:O(NlogN)
        // S.C:O(1)
        
        */
        
        // Optimal
        unordered_map<int,int>mp;
        int maxi=0;
        
        int l=0,r=0;
        while(r<N && l<=r){
            mp[fruits[r]]++;
            if(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;
                
            }
            
            else if(mp.size()<=2){
                maxi=max(r-l+1,maxi);
            }
            
            r++;
        }
        
        return maxi;
        
        // T.C: O(N)
        // S.C:O(1)
    }
