#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void alphabets(int position, int length, char sub[])
{  int c=0;
   char alpha[]="@8(|)3#6[-]|_||<1[]\\/[][]\\[]0|D(,)|Z$']['|_|\\/\\/\\/}{`/2";
   while (c < length) {    //Using position and length to find the substrng
      sub[c] = alpha[position+c]; 
      c++;
   }
}

void Comparison(char str)
{
  int length, position, j =0;
  char sub[10]="";
       // For comaprison 
        if('a'== str || 'A' == str)
        { 
            position=0,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);              
        }
        else if('b'== str || 'B' == str)
        {
            position=1,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);             
        }
        else if('c'== str || 'C' == str)
        {
            position=2,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);            
        }
        else if('d'== str || 'D' == str)
        {
            position=3,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);             
        }
        else if('e'== str || 'E' == str)
        {
            position=5,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);             
        }
        else if('f'== str || 'F' == str)
        {
            position=6,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);             
        }
        else if('g'== str || 'G' == str)
        {
            position=7,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);                     
        }
        else if('H'== str || 'h' == str)
        {
            position=8,length=3;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('i'== str || 'I' == str)
        {
            position=11,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('j'== str || 'J' == str)
        {
            position=12,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);                      
        }
        else if('k'== str || 'K' == str)
        {
            position=14,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('l'== str || 'L' == str)
        {
            position=16,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('m'== str || 'M' == str)
        {
            position=17,length=6;
            alphabets(position,length,sub);
            printf("%s",sub);                      
        }
        else if('n'== str || 'N' == str)
        {
            position=23,length=5;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('o'== str || 'O' == str)
        {
            position=28,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);          
        }
        else if('p'== str || 'P' == str)
        {
            position=29,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('Q'== str || 'q' == str)
        {
            position=31,length=3;
            alphabets(position,length,sub);
            printf("%s",sub);          
        }
        else if('r'== str || 'R' == str)
        {
            position=34,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
                         
        }
        else if('s'== str || 'S' == str)
        {
            position=36,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('t'== str || 'T' == str)
        {
            position=37,length=4;
            alphabets(position,length,sub);
            printf("%s",sub);
         }
        else if('u'== str || 'U' == str)
        {
            position=41,length=3;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('v'== str || 'V' == str)
        {
            position=44,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if('w'== str || 'W' == str)
        {
            position=46,length=4;
            alphabets(position,length,sub);
            printf("%s",sub);             
        }
        else if('x'== str || 'X' == str)
        {
            position=50,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);          
        }
        else if('y'== str || 'Y' == str)
        {
            position=52,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);         
        }
        else if('z'== str || 'Z' == str)
        {
            position=54,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
        }
        else if(' '== str)
        {

              printf("%c",str);
        }
        else
        {

            printf("%c",str);
 
        }        

}

int main() 
{   
    char c;
    while (scanf("%c", &c)>0)
    { Comparison(c);}
    return 0; 
} 