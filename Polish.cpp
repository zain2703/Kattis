#include <bits/stdc++.h>
#include<sstream>
#include<string>

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
    string input;
    string operands;
    string operators;
    string sub;
    int j, k;
    j=k=0;
    // cin>>name;
    getline(cin,input);
    cout<<input<<endl;
    reverse(input.begin(), input.end());
    cout<<input<<endl;
    istringstream iss(input);
    do
    {  iss >> sub;
      if((sub)=="+" || (sub)=="-" || (sub)=="*")
       {
         operators= operators + sub;
         cout<<"value of operators"<<" "<<operators<<endl;
         j++;
       }
       else
       {
        operands=operands +sub;
        cout<<"value of operands"<<" "<<operands<<endl;
       }
    }while(iss);
/*     vector<string> input;
    vector<string> operand;
    vector<string> operators;
    for(int i=0;i=name.size();i++)
    {
      input.push_back(name[i]);
    }
    /* for (int i = 0; i < 10; i++) 
    {  input.push_back("i");
       input.push_back("+");
       input.push_back("-");
    } 
       */
/*     for (auto i = input.rbegin(); i != input.rend(); i++)
    {      cout<<*i<<endl;
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
     printVector(operators);  */
}    