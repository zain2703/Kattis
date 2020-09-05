#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 1000 
char sub[20];

void alphabets(int position, int length)
{  int c=0;
   printf("%d,%d\n",position,length);
   char alpha[MAX_LIMIT]="@8(|)3#6[-]|_||<1[]\/[][]\[]0|D(,)|Z$']['|_|\/\/\/}{'/2";
   printf("%s \n",alpha);
   while (c < length) {
      sub[c] = alpha[position+c-1];
      printf("inside the Alpha=%c and the value of c=%d\n",sub[c],c);
      c++;
   }
   //printf("%s \n",sub);
}
void concatenate(char p[], char q[]) {
   printf("Inside concatenate\n");
   int c, d;
   c = 0;
   while (p[c] != '\0') {
      c++; 
      printf("Values of p in first loop %c\n",p[c]);     
   }
   d = 0;
   while (sub[d] != '\0') {
      p[c] = sub[d];
      printf("Values in P %c\n",p[c]);
      printf("Values in q %c\n",sub[d]);
      d++;
      c++;    
   }
   p[c] = '\0';
   for(int i=0; i<10; i++)
    { 
        printf("Inside cancat %c\n",sub[i]);
    }
}
int main() 
{ 
    char temp[10]="",temp1[20]="@@";
    char str[MAX_LIMIT]="";
    //char temp[10]; 
    scanf("%[^\n]%*c", str); 
    //fgets(str, MAX_LIMIT, stdin); 
    printf("%s", str); 
    printf("%ld", (strlen(str)-1));
    char ans[(strlen(str))];
    for(int i=0; i<(strlen(str)-1); i++)
    { 
        if('a'== str[i] || 'A' == str[i])
        {
            printf("Inside for loop\n");
            temp[10]='@';
              
            //temp[1]=' ';
            //temp[2]='@';
            //temp[10]="@";
        }
            printf("%c \n",str[i]);
    }
    alphabets(0,10);
    //temp[10]="@";
    //char str1[MAX_LIMIT];
    //fgets(str1, MAX_LIMIT, stdin);
    //temp1[10]="";
    //strcat(temp,temp1);
    for(int i=0; i<10; i++)
    { 
        printf("Inside main1 %c \n",sub[i]);
    } 
    concatenate(temp1,sub);
    // puts(str);
    for(int i=0; i<10; i++)
    { 
        printf("Temp %c\n",temp1[i]);
    }   
    printf(temp1);
    return 0; 
} 

/* #include<stdio.h>
int main() 
{ 
    char dest[50] = "This is an"; 
    char src[50] = " example"; 
  
    strcat(dest, src); 
    printf(dest) ; 
    return 0; 
}  */