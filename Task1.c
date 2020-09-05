#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 1000 

void alphabets(int position, int length, char sub[])
{  int c=0;
   printf("%d,%d\n",position,length);
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
    //fgets(str, MAX_LIMIT, stdin); 
    printf("%s\n", str); 
    printf("%ld\n", (strlen(str)-1));
    int strl=strlen(str), j =0;
    char ans[10]="";
    printf("The answer%s\n", ans);
    for(int i=0; i<strl; i++)
    {  
         printf("The value of j1=%d\n", j);
        if('a'== str[i] || 'A' == str[i])
        {
            alphabets(0,1,sub);
            strcat(&ans[j],sub);
            
            printf("%s",ans);
            j++;
            printf("\nThe value of j2=%d\n", j);             
        }
        else if(' '== str[i])
        {
            printf("\n Inside empty\n");
              ans[j]=' ';
              j++;
              printf("The value of j3=%d\n", j);
        }
        else
        {
            ans[j]=str[i];
        }
         //   printf("%c \n",str[i]);
    }
    /* alphabets(0,10,sub);
    strcat(str,sub); */
    for(int i=0; i<strl; i++)
    { 
        printf("Temp =%d =%c\n",i,ans[i]);
    }   
   //printf("%s",ans);
    return 0; 
} 