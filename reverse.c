#include<stdio.h>
#include<string.h>

int main(){

    char str[]="hello himanshu";
    int n = strlen(str);

    for (int  i = n-1; i >= 0; i--)
    {
        printf("%c \n", str[i]);
    }
    printf("\n");
    return 0;
}