#include <bits/stdc++.h>

// For debuging
using namespace std;
void printSet(set<int> s) 
{ 
    cout << "Set: "; 
    for (int x : s) { 
        cout << x << " "; 
    } 
    cout << endl; 
}
//for debugging
void printVector(vector<int> vec) 
{ 
  
    cout << "Vector: "; 
    for (int x : vec) { 
        cout << x << " "; 
    } 
    cout << endl; 
}
//for debugging
void printVector(vector<vector<int>> vec) 
{ 
    cout << "2D Vector: "; 
    for (int i = 0; i < vec.size(); i++) { // printing the 2D vector.
      for (int j = 0; j < vec[i].size(); j++)
       { cout << vec[i][j] << " ";}
       cout<<endl;
    }    
}

using namespace std;

// Using Longest increasing sequence algorithm to find the largest group
int lis(vector<int> arr, int n) 
{ 
    int i, j, max = 0; 
    vector<int>lis(n); 
  
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

    return max; 
} 

void ToplogoicalSort(vector<vector<int>> matrix, vector<int> &arr, vector<int> &degree)
{
    //Checking empty places
set<int> zeroin;
    for(int i = 0; i < (matrix).size(); i++) {
        if(degree[i] == 0) {
            zeroin.insert(i);
        }
    }
    //Implementing topolgical sort starting from thoe having zero connections
while(!zeroin.empty()) {
        int curr = *zeroin.begin();
        zeroin.erase(zeroin.begin());
        arr.push_back(curr);
        for(auto next : matrix[curr]) {
            degree[next]--;
            if(degree[next] == 0) {                
                zeroin.insert(next);
            }
        }
    }

}

int main() {
    
    int n, m,n1, n2;;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n);
    vector<int> degree(n,0);
    vector<int> arr;

    //Taking Inputs in reverse order get directed graph
    for(int i = 0; i < m; i++) {
        cin >> n1 >> n2;
        n1--; n2--;
        matrix[n2].push_back(n1);
        degree[n1]++;  
    } 
    ToplogoicalSort(matrix,arr,degree); 
    //Lowest number having more connection using inverse to increase the prirty of LIS
    for(auto &i : arr) {
        i = i*(-1);  
    }
    cout<<lis(arr,(arr).size()); 
}