#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    printf("enter the string = ");


    fgets(str , sizeof(str) , stdin);


    int n = strlen(str);
    
    for (int  i = n-1; i >= 0; i--)
    {
        printf("%c \n", str[i]);
    }
    printf("\n");
    return 0;
}