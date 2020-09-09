#include <bits/stdc++.h>

using namespace std;
int lis(vector<int> arr, int n) 
{ 
    int *lis, i, j, max = 0; 
    lis = (int*)malloc(sizeof(int) * n); 
  
    /* Initialize LIS values for all indexes */
    for (i = 0; i < n; i++) 
        lis[i] = 1; 
  
    /* Compute optimized LIS values in bottom up manner */
    for (i = 1; i < n; i++) 
        for (j = 0; j < i; j++) 
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) 
                lis[i] = lis[j] + 1; 
  
    /* Pick maximum of all LIS values */
    for (i = 0; i < n; i++) 
        if (max < lis[i]) 
            max = lis[i]; 
  
    /* Free memory to avoid memory leak */
    free(lis); 
  
    return max; 
} 

int main() {
    int n, m;
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