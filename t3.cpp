#include <bits/stdc++.h>

using namespace std;

void printSet(set<int> s) 
{ 
  
    cout << "Set: "; 
    for (int x : s) { 
        cout << x << " "; 
    } 
    cout << endl; 
}

void printVector(vector<int> vec) 
{ 
  
    cout << "Vector: "; 
    for (int x : vec) { 
        cout << x << " "; 
    } 
    cout << endl; 
}

int _lis( vector<int>arr, int n, int *max_ref) 
{ 
	/* Base case */
	if (n == 1) 
		return 1; 

	// 'max_ending_here' is length of LIS 
	// ending with arr[n-1] 
	int res, max_ending_here = 1; 

	/* Recursively get all LIS ending with arr[0], 
	arr[1] ... arr[n-2]. If arr[i-1] is smaller 
	than arr[n-1], and max ending with arr[n-1] 
	needs to be updated, then update it */
	for (int i = 1; i < n; i++) 
	{ 
		res = _lis(arr, i, max_ref); 
		if (arr[i-1] < arr[n-1] && res + 1 > max_ending_here) 
			max_ending_here = res + 1; 
	} 

	// Compare max_ending_here with the overall 
	// max. And update the overall max if needed 
	if (*max_ref < max_ending_here) 
	*max_ref = max_ending_here; 

	// Return length of LIS ending with arr[n-1] 
	return max_ending_here; 
} 

// The wrapper function for _lis() 
int lis(vector<int> arr, int n) 
{ 
	// The max variable holds the result 
	int max = 1; 

	// The function _lis() stores its result in max 
	_lis( arr, n, &max ); 

	// returns max 
	return max; 
} 

int main() {
    int n, m,s;
    cin >> n >> m;
     
    //generating two vector arrays
    vector<vector<int>> adj(n);
    vector<int> deg(n,0);

    for(int i = 0; i < m; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        n1--; n2--;
        adj[n2].push_back(n1);
        deg[n1]++;  
    }

    set<int> zeroin;
    for(int i = 0; i < n; i++) {
        if(deg[i] == 0) {
            zeroin.insert(i);
        }
    } 
    vector<int> arr;
    while(!zeroin.empty()) {
        int curr = *zeroin.begin();
        zeroin.erase(zeroin.begin());
        arr.push_back(curr);
        for(auto next : adj[curr]) {
            deg[next]--;
            if(deg[next] == 0) {                
                zeroin.insert(next);
            }
        }
    }
    for(auto &i : arr) {
        i = i*(-1);   //price *= units + 1;	price = price * (units+1);
    }
    /* int arr[(permutation).size()];
    for (int i=0;i<(permutation).size();i++)
    {
        arr[i]=permutation[i];
    } */
    cout<<lis(arr,(arr).size()); 
}