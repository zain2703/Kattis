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

bool filter(string word, string word1) {
    bool Digit0 = false;
    bool Digit1 = false;
    for (int i = 0; i < word.size(); i++) {
        if (isdigit(word.at(i))) { Digit0 = true; }
    }
    for (int i = 0; i < word1.size(); i++) {
        if (isdigit(word1.at(i))) { Digit1 = true; }
    }
    return ( Digit0 && Digit1);
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
    string ch;
    vector<string> input;
    vector<string> operands;
    vector<string> operators;
/*     string operands;
    string operators; */
    string pr="0"; 
    string sub;
    bool flag=false;
    int j,k,e;
    j=k=0;
    getline(cin,ch);
    istringstream iss(ch);
    iss >> sub;
    while(iss)
    {
      input.push_back(sub);
      iss >> sub;
    }
    cout<<"Input ";
    printVector(input);
    for (auto ir=input.rbegin(); ir !=input.rend(); ir++)
    {  
      if((*ir)=="+" || (*ir)=="-" || (*ir)=="*")
       {
         operators.push_back(*ir);
       }
       else
       { 
         operands.push_back(*ir);
         flag=filter(*ir,pr);
         cout<<"the flag"<<flag<<endl;
       }
       pr=operands.back();
       cout<<"value of operands";
        printVector(operands);
        cout<<"value of operators";
        printVector(operators);
       if(operators.size()>0 && operands.size()>1)
       {
           e=evaluate(operators,operands); 
           operands.push_back(operators.front());
           operators.pop_back();
       }
    } 
}    