#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{   
    int r,c, count; 
    while(scanf("%d %d",&r, &count)=='\n');
    //printf("%d",count);
    c=r;
    if(r==0 || c==0)
    {
        printf("%d",0);
        return 0;
    }
    int *arr[r]; 
    for (int i=0; i<r; i++) 
         arr[i] = (int *)malloc(c * sizeof(int));
    // Note that arr[i][j] is same as *(*(arr+i)+j) 
//    count = 0;
    int k,l;
    for (int i = 0; i <  count; i++) 
       {  
        while(scanf("%d  %d", &k,&l)=='\n');
            arr[k-1][l-1] = 1;
            arr[l-1][k-1] =1;    
       } // Or *(*(arr+i)+j) = ++count 
       //  printf("%d %d\n",k, l);
    int temp=0; count=0;
    for (int i = 0; i <  r; i++) 
     { for (int j = 0; j < c; j++) 
       {   
 //          printf("%d ", arr[i][j]);
           if(arr[i][j]==1)
            {temp++;}
       }
       if(temp>count)
       {
           count=temp;
       }
       temp=0;   
  //     printf("\n");
     }
     if(count==1)
        {count++;}
    /* Code for further processing and free the  
      dynamically allocated memory */
    //printf("Largest count is=%d",count);
    printf("%d",count);
    //free(arr);
   return 0; 
} 