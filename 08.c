#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];

    char str2[100];

    scanf("%s",str1);

    strcpy(str2,str1);

    strrev(str2);

    if(strcmp(str2,str1) == 0){
        printf("%s is a palindrome\n",str1);
    }
    else{
        printf("%s is not a palindrome\n",str1);
    }


    return 0;
}
