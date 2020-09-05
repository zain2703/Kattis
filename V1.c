#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 1000 


void alphabets()
{
   char alpha[MAX_LIMIT]="@8(|)3#6[-]|_||"


}

int main() 
{ 
    char temp[10]="",temp1[10]="";
    char str[MAX_LIMIT]="";
    //char temp[10]; 
    scanf("%[^\n]%*c", str); 
    //fgets(str, MAX_LIMIT, stdin); 
    printf("%s", str); 
    printf("%ld", (strlen(str)-1));
    char ans[(strlen(str))];
    for(int i=0; i<(strlen(str)-1); i++)
    {  j=0;
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
    //temp[10]="@";
    //char str1[MAX_LIMIT];
    //fgets(str1, MAX_LIMIT, stdin);
    //temp1[10]="";
    //strcat(temp,temp1);
    strcat(temp1,temp);
    // puts(str);
    for(int i=0; i<10; i++)
    { 
        printf("%c",temp1[i]);
    } 
    //printf(temp1);
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