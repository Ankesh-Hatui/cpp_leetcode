#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	/*
	// Brute force
	int n=arr.size();

	sort(arr.begin(),arr.end());

	vector<vector<int>>ans;

	for(int i=0;i<n;i++){
		int start=arr[i][0];
		int end=arr[i][1];

		if(!ans.empty() && ans.back()[1]>=end){
			continue;
		}

		for(int j=i+1;j<n;j++){
			if(arr[j][0]<=end){
				end=max(arr[j][1],end);
			}
			else{
				break;
			}
		}

		ans.push_back({start,end});

	}
	return ans;
	*/

	// optimal

	int n=arr.size();

	sort(arr.begin(),arr.end());

	vector<vector<int>>ans;


	ans.push_back(arr[0]);

	for(int i=1;i<n;i++){
		if(arr[i][1]<=ans.back()[1]){
			continue;
		}
		else if(arr[i][0]<=ans.back()[1]){
			ans.back()[1]=max(arr[i][1],ans.back()[1]);
		}


		else {
			ans.push_back({arr[i]});
		}
	}

	return ans;


}
