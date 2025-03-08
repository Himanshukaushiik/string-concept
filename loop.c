#include<stdio.h>
#include<string.h>


int main(){

    char str[] ="hello";

    printf("\n The Characters in the String \n ");
    for (int i = 0; str[i] !='\0'; i++)
    {
        printf("%c\n",str[i]);
    }

    return 0;
    
}