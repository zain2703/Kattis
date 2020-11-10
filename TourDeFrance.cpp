#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h> 
using namespace std; 

void printVector(vector<float> vec) 
{ 
    cout << "Vector: "; 
    for (float x : vec) { 
        cout << x << " "; 
    } 
    cout << endl; 
}

float compute(vector<float> front,vector<float> rear)
{  
    vector<float> dl; float dll=1;
     //dl.push_back(dll);
      int i =0;
    for (auto& m : front) {
        for (auto& n : rear)
        { 
           dll=n/m;
 //          cout<<m<<" "<<n<<" "<<n/m<<endl;
           cout<<dll<<endl;
           dl.push_back(dll);   
 //        printVector(dl);
        }
    }
        printVector(dl);
        sort(dl.begin(), dl.end());
        printVector(dl);
          
}

int main() 
{  int j, i;
   int spikes=1;
   int cond=1;
   vector<float> front;
   vector<float> rear;
   cin>>i;
   while(spikes!=0)
   { cin>>j;
     for (int ii=0;ii<i;ii++)
    {   
        cin>>spikes;
        front.push_back(spikes);
    }
    for (int ii=0;ii<j;ii++)
    {   
        cin>>spikes;
        rear.push_back(spikes);
    }    
    cout <<"The front " ;
   printVector(front);
   cout <<"The rear " ;
   printVector(rear);
    compute(front,rear);
    cin>>spikes;
    i=spikes;
   }
   cout <<"The front " ;
   printVector(front);
   cout <<"The rear " ;
   printVector(rear);
} 