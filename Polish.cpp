#include <bits/stdc++.h>
#include<sstream>
#include<string>
#include<ctype.h>
#include<iostream>

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

void ReverseVector(vector<string> vec) 
{  
    for (auto ir=vec.rbegin(); ir !=vec.rend(); ++ir)
     {   cout << *ir << " "; 
    } 
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

string evaluate(string operators, string operand1, string operand2)
{   
    int result; int a,b;
    a=stoi(operand1);
    b=stoi(operand2);
   /*  cout<<endl;
    cout<<"the value in switch="<<operators.back()<<endl;
    cout<<"the value of operand1="<<operand1[0]<<endl;
    cout<<"the value of operand2="<<operand2[0]<<endl; */
    switch(operators.back())
    {
    case '+':
      result= a+b;
/*       cout<<"the result in + ="<< result<<endl; */
      break;
    case '-':
      result=a-b;
/*       cout<<"the result in - ="<< result<<endl; */
      break;
    case '*':
      result=a*b;
/*       cout<<"the result in * ="<< result<<endl; */
      break;
    }
    return to_string(result);
}

int main() { 
    string ch,pr,sub,sum; bool loop=true;
    vector<string> input;
    vector<string> operands;
    vector<string> operators; 
    int iterator=0;
    while(loop)
    { iterator++;
      getline(cin,ch);
      istringstream iss(ch);
      iss >> sub;
      while(iss)
      {
        input.push_back(sub);
        iss >> sub;
      }
      sub=" ";
//      cout<<sub;
/*       cout<<"Input ";
      printVector(input); */
      for (auto ir=input.rbegin(); ir !=input.rend(); ++ir)
      {  
        if((*ir)=="+" || (*ir)=="-" || (*ir)=="*")
        {
          operators.push_back(*ir);
        }
        else
        { 
          operands.push_back(*ir);
              //flag=filter(*ir,pr);
              //cout<<"the flag"<<flag<<endl;
        }
/*           cout<<"value of operands";
          printVector(operands);
          cout<<"value of operators";
          printVector(operators);
         cout<<"size of operators"<<operators.size()<<endl; */
        if(operators.size()>0 && operands.size()>1)
        {   
            //pr=operands.at(operands.size()-2);
            pr=operands.at(operands.size()-2);
         //   cout<<"The operand 1="<<operands.back()<<"The operand 2="<<pr<<endl;
            
            if(filter(operands.back(),pr))
            {
                  sum=evaluate(operators.back(),operands.back(),pr);
                  operands.pop_back();
                  operands.pop_back();
                  operands.push_back(sum);
                  operators.pop_back();
            }
            else
            { string tmp = operators.back(); operators.pop_back();
                 tmp= to_string(operators.pop_back()) +" "+ tmp ; 
            //  cout<<ch;
              operands.push_back(operators.front());
              operators.pop_back(); 
            }           
        }
      } //* - 6 + x -6 - 3 * 0 c
     cout<<"case "<<iterator<<": ";ReverseVector(operands); cout<<endl;
     operands.clear();operators.clear();input.clear();
    }  
}