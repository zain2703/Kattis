#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 1000 
int main() 
{ 
char str[MAX_LIMIT]; 
fgets(str, MAX_LIMIT, stdin); 
printf("%s", str); 
printf("%d", (strlen(str)-1));
char str1[MAX_LIMIT];
fgets(str1, MAX_LIMIT, stdin);
strcat(str,str1);
//puts(str);
printf("%s", str);
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