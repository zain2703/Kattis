#include <bits/stdc++.h> 
using namespace std; 

//for debuging
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
      int i =0;
    //Computing angular velocity by the number of teeths in rear n and front m  
    for (auto& m : front) {
        for (auto& n : rear)
        { 
           dl.push_back(n/m);   
        }
    }
    //sorting them
    sort(dl.begin(), dl.end());
    //finding the spread between two different ratio d1<d2
    for (int i=0; i < dl.size()-1; i++)
        dll.push_back(dl[i+1]/dl[i]);
    //finding the maximum form them.
    max=*max_element(dll.begin(), dll.end());
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
     // Storing values of front and rear spokes
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
    compute(front,rear);
    cin>>spikes;
    i=spikes;
    front.clear();rear.clear();
   }
return 0;
} 