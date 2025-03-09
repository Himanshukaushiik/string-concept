// using the STR STR function 

#include<stdio.h>
#include<string.h>

int main(){

    
    char str [100];
    char sub[100];
    int found = 0;
    printf("\nenter the string = \n");

    fgets(str , sizeof(str) , stdin);

    printf("\n enter the string which you like to find out =  ");
    fgets(sub , sizeof(sub) , stdin);

if (strstr( str , sub))
{
    printf("THE STRING IS FOUND\n");
}else{
    printf("THE STRING IS NOT FOUND \n");
}



}