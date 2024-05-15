int missingNumber(vector<int>&a, int N) {
// Brute Force

    // for(int i=1;i<=N;i++){
    //     bool isPresent=false;
    //     for(int j=0;j<a.size();j++){
    //         if(a[j]==i){
    //             isPresent=true;
    //         }
    //     }
    //     if(isPresent==false){
    //         return i;
    //     }
    // }
    // return N;
// Better: // Better is hashing:

  // optimal
/*
    int xor1=0;
    for(int i=1;i<=N;i++){
        xor1=xor1^i;
    }
    int xor2=0;
    for(int i=0;i<a.size();i++){
        xor2=xor2^a[i];
    }
    return (xor1^xor2);
    */
  
  

   // Too Optimal

    int xor1=0;
    int xor2=0;
    for(int i=0;i<a.size();i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;

    return (xor1^xor2);
}
