#include <stdio.h> 
#define MAX_LIMIT 1000 
int main() 
{ 
char str[MAX_LIMIT]; 
fgets(str, MAX_LIMIT, stdin); 
printf("%s", str); 
printf("%d \n", (strlen(str)-1));
return 0; 
} 
