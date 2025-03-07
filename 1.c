#include<stdio.h>
#include<string.h>

int main (){
  char str1[]=" bhai";
  char str2[]= " bhai";
    char str3[50];
    // printf("enter the string");

    // fgets(str,sizeof(str),stdin);

    // puts(str);

    // str1[strcspn (str1 , "\n") ] ='\0';
//     printf("you entered  a  = %s",str);

printf(" the length of the string %d\n",strlen(str1));
strcpy(str3 ,str1);
printf(" the text copy from the s1 to s3 = %s\n",str3);
strcat(str3 ,str2);

printf(" merges the text s2 and s3 = %s\n",str3);

if
(strcmp(str1 ,str2)==0){
    printf("strings are equal \n");

}else{
    printf("strings are not equal \n");
}

}
