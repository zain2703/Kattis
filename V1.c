#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 1000 

void alphabets(int position, int length, char sub[])
{  int c=0;
  // printf("%d,%d\n",position,length);
   char alpha[MAX_LIMIT]="@8(|)3#6[-]|_||<1[]\/[][]\[]0|D(,)|Z$']['|_|\/\/\/}{'/2";
 //  printf("%s \n",alpha);
   while (c < length) {
      sub[c] = alpha[position+c];
      printf("Inside the Alpha=%c and the value of C=%d\n",sub[c],c);
      c++;
   }
}

int main() 
{   char sub[10]=""; 
    char temp[10]="",temp1[20]="@@";
    char str[MAX_LIMIT]=""; 
    scanf("%[^\n]%*c", str);
    int length, position; 
    //fgets(str, MAX_LIMIT, stdin); 
    printf("%s\n", str); 
    printf("%ld\n", (strlen(str)-1));
    int strl=strlen(str), j =0;
    char ans[10]="";
    //printf("The answer%s\n", ans);
    for(int i=0; i<strl; i++)
    {  
        // printf("The value of j1=%d\n", j);
        if('a'== str[i] || 'A' == str[i])
        { 
            position=0,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('b'== str[i] || 'B' == str[i])
        {
            position=1,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('c'== str[i] || 'C' == str[i])
        {
            position=2,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('d'== str[i] || 'D' == str[i])
        {
            position=3,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('e'== str[i] || 'E' == str[i])
        {
            position=5,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('f'== str[i] || 'F' == str[i])
        {
            position=6,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('g'== str[i] || 'G' == str[i])
        {
            position=7,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('H'== str[i] || 'h' == str[i])
        {
            position=8,length=3;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('i'== str[i] || 'I' == str[i])
        {
            position=11,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('j'== str[i] || 'J' == str[i])
        {
            position=12,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('k'== str[i] || 'K' == str[i])
        {
            position=14,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('l'== str[i] || 'L' == str[i])
        {
            position=15,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('m'== str[i] || 'M' == str[i])
        {
            position=16,length=6;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('n'== str[i] || 'N' == str[i])
        {
            position=22,length=5;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('o'== str[i] || 'O' == str[i])
        {
            position=27,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('p'== str[i] || 'P' == str[i])
        {
            position=28,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('Q'== str[i] || 'q' == str[i])
        {
            position=30,length=3;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            printf("INside the Q\n");
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('r'== str[i] || 'R' == str[i])
        {
            position=33,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('s'== str[i] || 'S' == str[i])
        {
            position=35,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('t'== str[i] || 'T' == str[i])
        {
            position=36,length=4;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('u'== str[i] || 'U' == str[i])
        {
            position=40,length=3;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('v'== str[i] || 'V' == str[i])
        {
            position=43,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('w'== str[i] || 'W' == str[i])
        {
            position=45,length=4;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('x'== str[i] || 'X' == str[i])
        {
            position=49,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('y'== str[i] || 'Y' == str[i])
        {
            position=51,length=2;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if('z'== str[i] || 'Z' == str[i])
        {
            position=53,length=1;
            alphabets(position,length,sub);
            strcat(&ans[j],sub);
            
        //    printf("%s",ans);
            j=j+length;
        //    printf("\nThe value of j2=%d\n", j);             
        }
        else if(' '== str[i])
        {
        //    printf("\n Inside empty\n");
              ans[j]=' ';
              j++;
        //      printf("The value of j3=%d\n", j);
        }
        else
        {
            ans[j]=str[i];
            j++;
         printf("INside the default\n");
        }
         //   printf("%c \n",str[i]);
    }

    /* alphabets(0,10,sub);
    strcat(str,sub); */
    for(int i=0; i<strl; i++)
    { 
        printf("Temp =%d =%c\n",i,ans[i]);
    }   
 //   printf("%s",ans);
    return 0; 
} 