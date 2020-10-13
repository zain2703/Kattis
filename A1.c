#include<stdio.h>
#include<string.h>

void clip (char *str)
{ 
   int i=0 ;
//   printf("Printing in main =%c \n",str[0]);
   while(str[i]!=0){
//     printf("Printing inside the while =%c \n",str[i]);
     i++;  
//     printf("Size of array =%d \n",size);
  }
 // printf("Printing outside the while =%c \n",str[i]);
}

int main()
{
    char *str=(char*)calloc(300, sizeof(char)); ;
    scanf("%s",str);
    printf("Printing in main =%s \n",str);
    clip(str);
}
