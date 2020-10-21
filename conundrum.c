#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void clip (char *str)
{ 
   int mod,i=0;
   int day=0;
   // while condition to find the numer of elements in array.
   while(str[i]!=0){
       // The clipper size at most is 3
       mod=i%3;
      // If condiiton to not change if 'PER' already exist.
       if(mod==0 && str[i]!='P')
                day++;   
       else if(mod==1 && str[i]!='E')
                day++;
       else if (mod==2 && str[i]!='R')
                day++;
     i++;  
  }
  printf("%d \n",day);
}

int main()
{   char *str=(char*)calloc(300, sizeof(char)); ;
    scanf("%s",str);
    //print the clip
    clip(str);
    free (str);
}
