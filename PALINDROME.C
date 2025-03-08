#include<stdio.h>
#include<string.h>

int main (){
    char str[100];
    printf("\nenter the string = \n");
    fgets(str , sizeof(str) ,stdin);
    // printf("%s", str);

str[strcspn (str , "\n")] ='\0';


int n = strlen(str);
int ispalindrome = 1;




for (int i = 0; i < n/2; i++)
{
    if (str[i] != str[ n - i - 1])
    {
        ispalindrome =0;
        break;
    }
    

}

if (ispalindrome)
{
    printf("\n THIS STRING IS PALINDROME STRING \n");
}else{

printf("\n THIS STRING IS not PALINDROME STRING \n");

}

return 0;

}