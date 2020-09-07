#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h> 
using namespace std; 


const int MAX=5;
int *arr[MAX],*d[MAX],store[MAX]; 
bool is_clique(int b) 
{ 
	// Run a loop for all set of edges 
	for (int i = 1; i < b; i++) { 
		for (int j = i + 1; j < b; j++) 
			// If any edge is missing 
			if (arr[store[i]][store[j]] == 0) 
				return false; 
	} 
	return true; 
} 

// Function to find all the sizes 
// of maximal cliques 
int maxCliques(int i, int l, int n) 
{ 
//    cout<<"In max clique"<<endl;
//    cout<<"The values are i="<<i<<" vlaue of l="<<l<<endl;
	// Maximal clique size 
	int max_ = 0; 

	// Check if any vertices from i+1 
	// can be inserted 
	for (int j = i + 1; j <= n; j++) { 

		// Add the vertex to store 
		store[l] = j; 
        
		// If the graph is not a clique of size k then 
		// it cannot be a clique by adding another edge 
		if (is_clique(l + 1)) { 

			// Update max 
			max_ = max(max_, l); 

			// Check if another edge can be added 
			max_ = max(max_, maxCliques(j, l + 1,n)); 
		} 
	} 
	return max_; 
} 

int main() 
{   
    int n,m,k,l,temp,count;
    n=m=k=l=temp=count=0; 
    //while(scanf("%d %d",&n, &m)=='\n');
    cin>>n>>m;
    if(n>=1 && n<=800 && m>=0 && m<=10000)
    {
     //   printf("%d %d \n",n,m);
    
        for (int i=0; i<n; i++) 
         arr[i] = (int *)calloc(n, sizeof(int));  
            for (int i = 0; i <  m; i++) 
            {  
                cin>>k>>l;
                    if(k>l)
                    {
                //      printf("Exit1");
                    return 0;
                    }
            //       printf("index %d %d \n",k-1,l-1);
                    arr[k-1][l-1] = 1;
                    arr[l-1][k-1] =1;
                    d[arr[k-1][l-1]]++;
                    d[arr[l-1][k-1]]++; 
            //     printf("%d %d \n",k,l);    
            } 
       count=maxCliques(0, 1,n);
  //     printf("Outside input\n");
/*     for (int i = 0; i <  n; i++) 
     { for (int j = 0; j < n; j++) 
       {   
    //       printf("%d ", arr[i][j]);
           if(arr[i][j]==1)
            {temp++;}
       }
       if(temp>count)
       {
           count=temp;
       }
       temp=0;   
  //     printf("\n");
     /* }
 */
     if(count==1)
        count++;
     cout<<count;
   }
   return 0; 
} 