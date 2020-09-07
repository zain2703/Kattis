#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#define MAX_LIMIT 500 

void alphabets(int position, int length, char sub[])
{  int c=0;
//   printf("%d,%d\n",position,length); //Saving everyhting in a string
   char alpha[]="@8(|)3#6[-]|_||<1[]\\/[][]\\[]0|D(,)|Z$']['|_|\\/\\/\\/}{`/2";
 //  printf("%s \n",alpha);
   while (c < length) {    //Using position and length to find the substrng
      sub[c] = alpha[position+c]; 
    //  printf("The substring=%c and the value of C=%d\n",sub[c],c);
      c++;
   }
    //printf("The substring=%s",sub);
}

void Comparison(char str)
{
  int length, position, j =0;
  char sub[10]="";
       // printf("The value of j=%d\n", j);
        if('a'== str || 'A' == str)
        { 
            position=0,length=1;
            alphabets(position,length,sub);
//            strcat(&ans[j],sub);
            /* printf("\n Inside a %c \n",str[i]);*/
            printf("%s",sub); 
//            j=j+length;
        //    printf("\nThe value of ja=%d\n", j);             
        }
        else if('b'== str || 'B' == str)
        {
            position=1,length=1;
            alphabets(position,length,sub);
         //   strcat(&ans[j],sub);
/*          printf("\n Inside b %c \n",str[i]);  
            printf("%s",ans); */
            printf("%s",sub);
//            j=j+length;
  //          printf("\nThe value of jb=%d\n", j);             
        }
        else if('c'== str || 'C' == str)
        {
            position=2,length=1;
            alphabets(position,length,sub);
            ///strcat(&ans[j],sub);
            printf("%s",sub);
/*             printf("\n Inside c %c \n",str[i]);        
            printf("%s",ans); */
//            j=j+length;
//            printf("\nThe value of jc=%d\n", j);             
        }
        else if('d'== str || 'D' == str)
        {
            position=3,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
        //    strcat(&ans[j],sub);
/*             printf("\n Inside d %c \n",str[i]);
            printf("%s",ans); */
//            j=j+length;
//            printf("\nThe value of jd=%d\n", j);             
        }
        else if('e'== str || 'E' == str)
        {
            position=5,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
//            strcat(&ans[j],sub);
            /* printf("\n Inside e %c \n",str[i]);
            printf("%s",ans); */
  //          j=j+length;
//            printf("\nThe value of je=%d\n", j);             
        }
        else if('f'== str || 'F' == str)
        {
            position=6,length=1;
            alphabets(position,length,sub);
//            strcat(&ans[j],sub);
            printf("%s",sub);
/*             printf("\n Inside f %c \n",str[i]);
            printf("%s",ans); */
//            j=j+length;
//            printf("\nThe value of jf=%d\n", j);             
        }
        else if('g'== str || 'G' == str)
        {
            position=7,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
//            strcat(&ans[j],sub);
/*             printf("\n Inside g %c \n",str[i]);
            printf("%s",ans); 
            printf("\nThe value of jg=%d\n", j);
*/
//            j=j+length;                         
        }
        else if('H'== str || 'h' == str)
        {
            position=8,length=3;
            alphabets(position,length,sub);
            printf("%s",sub);
//            strcat(&ans[j],sub);
/*          printf("\n Inside h %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of js=%d\n", j);
 */ //            j=j+length;
                         
        }
        else if('i'== str || 'I' == str)
        {
            position=11,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
             printf("\n Inside i %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of ji=%d\n", j); 
            j=j+length;
 */                         
        }
        else if('j'== str || 'J' == str)
        {
            position=12,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*             printf("\n Inside j %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jj=%d\n", j); 
            j=j+length; */                         
        }
        else if('k'== str || 'K' == str)
        {
            position=14,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*             printf("\n Inside k %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jk=%d\n", j); 
            j=j+length; */
        }
        else if('l'== str || 'L' == str)
        {
            position=16,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
/*            strcat(&ans[j],sub);
 /*             printf("\n Inside L %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jl=%d\n", j);
            j=j+length; */
                         
        }
        else if('m'== str || 'M' == str)
        {
            position=17,length=6;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*          printf("\n Inside M %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jm=%d\n", j); 
            j=j+length; */                         
        }
        else if('n'== str || 'N' == str)
        {
            position=23,length=5;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*             printf("\n Inside n %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jn=%d\n", j); 
            j=j+length; */
                         
        }
        else if('o'== str || 'O' == str)
        {
            position=28,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*          printf("\n Inside o %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jo=%d\n", j); 
            j=j+length;   */           
        }
        else if('p'== str || 'P' == str)
        {
            position=29,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*          printf("\n Inside p %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jp=%d\n", j); 
            j=j+length; */
                         
        }
        else if('Q'== str || 'q' == str)
        {
            position=31,length=3;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*          printf("\n Inside q %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jq=%d\n", j); 
            j=j+length;  */            
        }
        else if('r'== str || 'R' == str)
        {
            position=34,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*          printf("\n Inside R %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jr=%d\n", j); 
            j=j+length; */
                         
        }
        else if('s'== str || 'S' == str)
        {
            position=36,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
/*            strcat(&ans[j],sub);
             printf("\n Inside S %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of js=%d\n", j); 
            j=j+length; */
                         
        }
        else if('t'== str || 'T' == str)
        {
            position=37,length=4;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*             printf("\n Inside T %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jt=%d\n", j); 
            j=j+length; */
         }
        else if('u'== str || 'U' == str)
        {
            position=41,length=3;
            alphabets(position,length,sub);
            printf("%s",sub);
/*            strcat(&ans[j],sub);
/*          printf("\n Inside u %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of ju=%d\n", j); 
            j=j+length;             */
        }
        else if('v'== str || 'V' == str)
        {
            position=44,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
/*            strcat(&ans[j],sub);
/*             printf("\n Inside v %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jv=%d\n", j); 
            j=j+length; */
        }
        else if('w'== str || 'W' == str)
        {
            position=46,length=4;
            alphabets(position,length,sub);
            printf("%s",sub);   
/*            strcat(&ans[j],sub);
             printf("\n Inside w %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jw=%d\n", j); 
            j=j+length; */             
        }
        else if('x'== str || 'X' == str)
        {
            position=50,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
/*             strcat(&ans[j],sub);
/*             printf("\n Inside x %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jx=%d\n", j); 
            j=j+length;  */            
        }
        else if('y'== str || 'Y' == str)
        {
            position=52,length=2;
            alphabets(position,length,sub);
            printf("%s",sub);
/*            strcat(&ans[j],sub);
/*             printf("\n Inside y %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jy=%d\n", j); 
            j=j+length;  */           
        }
        else if('z'== str || 'Z' == str)
        {
            position=54,length=1;
            alphabets(position,length,sub);
            printf("%s",sub);
/*            strcat(&ans[j],sub);
/*             printf("\n Inside z %c \n",str[i]);
            printf("%s",ans);
            printf("\nThe value of jz=%d\n", j); 
            j=j+length;   */          
        }
        else if(' '== str)
        {
/*             printf("\n Inside empty %c \n",str[i]);
            printf("The value of jEmpty=%d\n", j); */  
    /*           ans[j]=' ';
              j++;      */
              printf("%c",str);
        }
        else
        {
        /*     printf("The value of jDefault=%d\n", j);
            printf("Inside the default %c \n",str[i]); */
            printf("%c",str);
 /*            ans[j]=str[i];
            j++; */
        }        
         //   printf("%c \n",str[i]);
     //    free(sub);
}

int main() 
{   
    char c;
    while (scanf("%c", &c)>0)
    { Comparison(c);}
   // printf("The memoy of string =%ld \n", strlen(str));
    //scanf("%[^\n]%*c", str);
    //while(fgets(str, MAX_LIMIT, stdin)==2);
    //char* ans =(char*)calloc((strL*6), sizeof(char));
    
    /* printf("%s\n", str); 
    printf("%ld\n", (strlen(str)-1));
     for(int i=0; i<strl; i++)
    { 
        printf("index=%d Alphabet=%c \n",i,ans[i]);
    } */  
  //  printf("%s",ans);
   // free(str);
   // free(ans);
    return 0; 
} 