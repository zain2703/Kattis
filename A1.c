#include<stdio.h>
#include<string.h>

void clip (char *str)
{ 
   int mod,i=0;
   int inc=0;
//   printf("Printing in main =%c \n",str[0]);
   while(str[i]!=0){
       mod=i%3;
       if(mod==0 && str[i]!='P')
                inc++;   
       else if(mod==1 && str[i]!='E')
                inc++;
       else if (mod==2 && str[i]!='R')
                inc++;
//     printf("Printing inside the while =%c \n",str[i]);
     i++;  
//     printf("Size of array =%d \n",size);
  }
  printf("%d \n",inc);
}

int main()
{
    char *str=(char*)calloc(300, sizeof(char)); ;
    scanf("%s",str);
    clip(str);
}
