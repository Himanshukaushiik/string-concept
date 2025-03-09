// using the without the strstr() function

#include <stdio.h>
#include <string.h>

int main()
{
 char str[100];

     printf("\nenter the string = \n");
    
    fgets(str, sizeof(str), stdin);

    str[strcspn(str , "\n")] = '\0' ;
    
    char sub[100];
    
    printf("\n enter the string which you like to find out =  ");
   
    fgets(sub, sizeof(sub), stdin);
   
    sub[strcspn(sub , "\n")] = '\0' ;

    
    
    
    int strLen = strlen(str);
    
    int subLen = strlen(sub);
    
    int found = 0;


    for (int i = 0; i <=  strLen - subLen; i++)
    { 
        int j;

        for ( j = 0; j < subLen; j++)
        {
            if (str [ i + j] != sub[j])
            
                break;

            
        }
        
        if ( j == subLen)
        {
            found = 1 ;
            printf("THE STRING IS FOUND at index %d!!\n" , i);
            break;
        }
        
    }
    if (!found)
    {
        printf("THE STRING IS  NOT FOUND !!\n");

    }

    return 0 ;

    
    
}