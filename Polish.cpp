#include <bits/stdc++.h>
#include<sstream>
#include<string>
#include<ctype.h>

// For debuging
using namespace std;

const int cinTerminator = '\n';


void printVector(vector<string> vec) 
{ 
  
    cout << "Vector: "; 
    for (auto x : vec) { 
        cout << x << " "; 
    } 
    cout << endl; 
}
//evluate

int evaluate(vector<string> &operators, vector<string> &operands)
{   char result=0;
  
  //if(isdigit(operands.at((operands.size()-1))) && isdigit(operands.at((operands.size()-2))))
  /* if(isdigit(operands(0)))
  {
    cout<<" ihfifhfhf hfofh";
  } */
//    int *pos= operands.back();
/*   if(isdigit(operands) && isdigit(operands))
  {
    cout<<"value of number 1="<<operands[(operands.length()-2)]<<endl;
    cout<<"value of number 2="<<operands[(operands.length()-4)]<<endl;
    switch(operators[0])
    {
      case '*':
          result=operands[(operands.length()-2)] + operands[(operands.length()-4)];
          break;
    }
    //operators.erase('*');
    cout<<"print the operands after erase="<<operators;
  }
  operands=operands + operators;
  cout<<"value of results="<<result<<endl; */

return(0);
}

int main() { 
    string input;
    vector<string> operands;
    vector<string> operators;
/*     string operands;
    string operators; */
    string sub;
    int j, k,e;
    j=k=0;
    // cin>>name;
    getline(cin,input);
    cout<<input<<endl;
    reverse(input.begin(), input.end());
    cout<<input<<endl;
    istringstream iss(input);
    iss >> sub;
    while(iss)
    {  
        cout<<sub<<endl;
      if((sub)=="+" || (sub)=="-" || (sub)=="*")
       {
         operators.push_back(sub);
       }
       else
       {
        operands.push_back(sub);
       }
       cout<<"value of operands";
        printVector(operands);
        cout<<"value of operators";
        printVector(operators);
       if(operators.size()>0 && operands.size()>1)
       {
           e=evaluate(operators,operands); 
       }
       iss >> sub;
    }
}    