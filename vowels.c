#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int vowels =0 ,consonents=0;

    printf("enter the string ");
    fgets(str , sizeof(str) , stdin  );

    str[strcspn(str , "\n")] = '\0'; 

    int n = strlen(str);





   for (int i = 0 ;str[ i ] != '\0' ; i++)
   {
    char ch = str[i];

    if ((ch>='A' && ch <= 'Z')  ||  (ch >='a' && ch <= 'z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        } else{
            consonents++;
          }
        
    }
    
   }
   
   printf("vowels =  %d \n" , vowels);
   printf("consonents  =  %d \n" , consonents);

     

} 