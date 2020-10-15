#include <bits/stdc++.h>

// For debuging
using namespace std;
void printVector(vector<string> vec) 
{ 
  
    cout << "Vector: "; 
    for (auto x : vec) { 
        cout << x << " "; 
    } 
    cout << endl; 
}
int main() { 
    string name;
    // cin>>name;
    getline(cin,name);
    cout<<name;
    vector<string> input;
    vector<string> operand;
    vector<string> operators;
    input.push_back(name);
    /* for (int i = 0; i < 10; i++) 
    {  input.push_back("i");
       input.push_back("+");
       input.push_back("-");
    } 
       */
    for (auto i = input.rbegin(); i != input.rend(); i++)
    { 
           if((*i)=="+" || (*i)=="-" || (*i)=="*")
           {
              operators.push_back(*i);
           }      
           operand.push_back(*i);
    }
     cout<<"Print the input= "; 
     printVector(input);
     cout<<"Print the operand= "; 
     printVector(operand);
     cout<<"Print the operators= "; 
     printVector(operators);
}    