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

// Returns an array with the indexes of the LIS
/* template <class T>
vector<int> LIS(vector<T>& v) {
    vector<int> p(v.size(), -1);
    vector<int> t(v.size(), 0);
    cout<<"P ";printVector(p);
    cout<<"t ";printVector(t);
    cout<<"v ";printVector(v);
    cout << " p Size : " << p.size() <<endl;
    cout << " t Size : " << t.size() <<endl; 
    int lis = 1;
    for(int i = 1; i < v.size(); i++) {        
        cout<<"the vaule of I="<<i<<" Lis="<<lis<<endl;
        if(v[i] <= v[t[0]]) {
            cout<<"If condition"<<v[i]<<"<="<<v[t[0]]<<endl;
            t[0] = i;
            cout<<"The vlaue in first if t[0]= "<<t[0]<<"value in i ="<<i<<endl;
        }
        else if(v[i] > v[t[lis - 1]]) {
            cout<<"Else if condition"<<v[i]<<">"<<v[t[lis - 1]]<<endl;
            p[i] = t[lis - 1];
            t[lis++] = i;
            cout<<"The vlaue in second liss= "<<lis<<" value of t[lis]= "<<t[lis]<<" p[i]= "<<p[i]<<endl;
        }
        else {
            int l = -1;
            int r = lis - 1;
            while(r - l > 1) {
                int m = l + (r - l) / 2;
                cout<<"Value of m="<<m<<endl;
                if(v[t[m]] >= v[i]) 
                 r = m;
                else 
                 l = m;
            }
            p[i] = t[r - 1];
            t[r] = i;
            cout<<"The vlaue in third i="<<i<< " r="<<r<<" value of t[r]="<<t[lis]<< " p[i]="<<p[i]<<" lis"<<lis<<endl;
        }
        cout<<"P ";printVector(p);
        cout<<"t ";printVector(t);
        cout<<"v ";printVector(v);
    }
    cout<<"The value of lis in before ans="<<lis<<endl;
    vector<int> ans;
    for(int i = t[lis - 1]; i >= 0; i = p[i]) {
        cout<<"The value of t[lis-1]="<<t[lis-1]<<endl;
        cout<<"The value of p[i]="<<p[i]<<endl;
        cout<<"Vlaue of i="<<i<<endl;
        ans.push_back(i);
    }
    reverse(ans.begin(), ans.end());
    cout<<"Before return"<<endl;
    cout<<"P ";printVector(p);
    cout<<"t ";printVector(t);
    cout<<"v ";printVector(v);
    cout<<"ans ";printVector(ans);
    return ans;
} */

int _lis( int arr[], int n, int *max_ref) 
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
int lis(int arr[], int n) 
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
        //cout <<"The value of adj= "<< adj[n2][n1] << " The value of N2="<<n2<<" N1="<<n1<<endl; 
     //   cout <<"adj["<<n2<<"]["<<n1<<"]="<< adj[n2][n1] << endl;
        deg[n1]++;  //a[i]++ increments the element at index i
     //   cout <<"deg["<<n1<<"]="<< deg[n1]<< endl;
    }
 /*    cout<<"The size of rows adj.size()="<<adj.size()<<endl;
     cout<<"The adjecent vector\n";
     for (int i = 0; i < adj.size(); i++) { 
        for (int j = 0; j < adj[i].size(); j++) 
        {
            cout <<"adj["<<i<<"]["<<j<<"]"<< adj[i][j] << endl; 
//            cout<<"The size of adj[i].size()="<<adj[i].size()<<endl;
        }
    }  
    cout<<"The adjecent vector\n";
    printVector(adj);  
    cout<<" The deg vector\n"; */
    //printVector(deg);
    set<int> zeroin;
    for(int i = 0; i < n; i++) {
        if(deg[i] == 0) {
            zeroin.insert(i);
        }
    } 
//    printSet(zeroin);

// Use toposort to build the permutation graph
    vector<int> permutation;
    while(!zeroin.empty()) {
        //gving the first value of zeroin into curr
        int curr = *zeroin.begin();
//        cout<<"The curr="<<curr;
        zeroin.erase(zeroin.begin());
/*         cout<<" After erase";
        printSet(zeroin); */
        permutation.push_back(curr);
/*         cout<<"After permutation push back";
        printVector(permutation); */
        for(auto next : adj[curr]) {
          //  cout <<"Adj["<<curr<<"]="<< adj[curr] << endl;
//            cout <<"Before deg["<<next<<"]="<< deg[next] << endl;
            deg[next]--;
//            cout <<"After deg decrement["<<next<<"]="<< deg[next] << endl;
            if(deg[next] == 0) {                
                zeroin.insert(next);
            }
        }
    }
    
 /*    cout<<"The permutation Before";
    printVector(permutation); */
    for(auto &i : permutation) {
        i = i*(-1);   //price *= units + 1;	price = price * (units+1);
    }
/*     cout<<"The permutation After";
    printVector(permutation); */
    int arr[(permutation).size()];
    for (int i=0;i<(permutation).size();i++)
    {
        arr[i]=permutation[i];
    //    cout<<arr[i];
    }
    cout<<lis( arr, n ); 
 //   cout << LIS(permutation).size() << endl;
}