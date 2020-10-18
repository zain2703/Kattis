#include <bits/stdc++.h>
#include<vector>
// For debuging
using namespace std;

void printVector(vector<string> vec) 
{ 
  
//    cout << "Vector: "; 
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

string ch,sub,pr,pr2,sum; bool loop=true;
  vector<string> input;
  //vector<int>::iterator op1,op2;
  char *test;
  int op1,op2; 
  int iterator=0;
//  int check=0;
//  char cc[4];
//   cin>>ch;
//  while((ch.size()+1)>check){
//      input.push_back(ch);
//      cin>>ch;
//      printVector(input);
//      cout<<"the check="<<check<<" size of check= "<<ch.size()<<endl;
//      check++;
//   }  
//   printVector(input);
   while(loop)
    { 
      iterator++;
      getline(cin,ch);
      istringstream iss(ch);
       while(iss >> sub)
      {
        input.push_back(sub);
       // break;
      }  
//      cout<<"Input ";
//      printVector(input);  
      int i=0;int oper_index=input.size()-1;
     // cout<<" The input for size is ="<<input.size()<<endl;
      for (auto ir=input.rbegin(); ir !=input.rend(); ++ir)
      {  
       // cout<<endl<<endl<<"the vlaue of element ="<<*ir<<endl;
        if((*ir)=="+" || (*ir)=="-" || (*ir)=="*")
        {
          op1=oper_index+1;
          pr=input.at(op1);
         // cout<<"the vlaue of i="<<oper_index<<" operand index="<<op1<<" The vlaue of previous op1="<<pr<<endl;
          op2=oper_index+2;
          pr2=input.at(op2);
        //  cout<<"the vlaue of i="<<oper_index<<" operand index="<<op2<<" The vlaue of previous op2="<<pr2<<endl;
          if(filter(pr,pr2))
          {
         //   cout<<"sucessful in print operand 1= "<<pr<<" operand 2= "<<pr2<<endl; 
            sum=evaluate(*ir,pr,pr2);
            input[oper_index]=sum;
            input.erase(input.begin()+op1);
            input.erase(input.begin()+op1);
            //input.erase();
            oper_index=oper_index--;
//            i=i-2;
//            cout<<"erase index of first element ="<<input.begin()+op1<<endl;
//            cout<<"erase index of second element ="<<input.begin()+op1<<endl;
          //  printVector(input);
          }
 //* - 6 + x -6 - - 9 6 * 0 c         
        }
//        printVector(input);
        oper_index--;
      } 
//      cout<<"Outside for loop \n"; //* - 6 + x -6 - 3 * 0 c
     cout<<"case "<<iterator<<": ";printVector(input);cout<<endl;
     input.clear();
  }    
} 