#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h> 
using namespace std; 

void printVector(vector<float> vec) 
{ 
    cout << "Vector: "; 
    for (int x : vec) { 
        cout << x << " "; 
    } 
    cout << endl; 
}

int main() 
{  int j, i;
   float spikes=1;
   int cond=1;
   vector<float> front;
   vector<float> rear;
   cin>>i;
   while(spikes!=0)
   { cin>>j;
    for (int ii=0;ii<j;ii++)
    {   
        if(ii<i){
            cin>>spikes;
            front.push_back(spikes);
        }
        cin>>spikes;
        rear.push_back(spikes);
    }
    cin>>spikes;
    i=spikes;
   }
   cout <<"The front " ;
   printVector(front);
   cout <<"The rear " ;
   printVector(rear);
} 