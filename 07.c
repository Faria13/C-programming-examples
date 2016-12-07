#include <stdio.h>
int main()
{
    int num,temp,sum=0,r;
    scanf("%d",&num);

    temp = num;
    while(num!=0){
        r = num%10;
        num = num/10;
        sum = sum*10+r;
    }
    if(temp == sum)
        printf("%d is a palindrome number\n",temp);
    else
        printf("%d is not a palindrome number\n",temp);

    return 0;
}
