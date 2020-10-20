#include <bits/stdc++.h>
#include<sstream>
#include<string>
//#include<ctype.h>
//#include<iostream>

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

string polish(string exp, int index)
{ 
  if(exp[index]!='+' || exp[index] !='-' || exp[index] !='*')
       cout<<" "<<exp[index]<< " " << index+1;
//        polish(exp[index],index++);

}

int main() { 
    string ch,pr,sub,sum; bool loop=true;
    vector<string> input;
    vector<string> operands;
    vector<string> operators; 
    int index,iterator=0;
    while(loop)
    {   
      getline(cin,ch);
      istringstream iss(ch);
      iss >> sub;
      while(iss)
      {
        input.push_back(sub);
        iss >> sub;
      }
        ch=polish(ch,index);
    }
}