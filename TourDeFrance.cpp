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

void compute(vector<float> front,vector<float> rear)
{  
    vector<float> dl;
    vector<float> dll; float max; 
     //dl.push_back(dll);
      int i =0;
    for (auto& m : front) {
        for (auto& n : rear)
        { 
 //          cout<<m<<" "<<n<<" "<<n/m<<endl;
           dl.push_back(n/m);   
 //        printVector(dl);
        }
    }
//    printVector(dl);
    sort(dl.begin(), dl.end());
//    printVector(dl);
    for (int i=0; i < dl.size()-1; i++)
        dll.push_back(dl[i+1]/dl[i]);
//    printVector(dll);
    max=*max_element(dll.begin(), dll.end());
    //cout<<max;
    printf("%.2f\n", max);
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
//    cout <<"The front " ;
//   printVector(front);
//   cout <<"The rear " ;
//   printVector(rear);
    compute(front,rear);
    cin>>spikes;
    i=spikes;
    front.clear();rear.clear();
   }
return 0;
} 