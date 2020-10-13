#include<stdio.h>
#include<string.h>

void decode (char *str)
{
   printf("Printing in main =%s",str);

}

int main()
{
    char *str=malloc(sizeof(char) * 300);
    scanf("%s",str);
    printf("Printing in main =%s",str);
    decode(str);
}
