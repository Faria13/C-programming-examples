#include <stdio.h>
int main()
{
    int num,r,temp,i,sum=0,fact;
    scanf("%d",&num);
    temp = num;

    while(num > 0){
        r = num%10;
        i = 1;
        fact = 1;

        while(i<=r){
           fact = fact*i;
           i++;
        }
        sum += fact;

        num = num/10;

    }
    if(temp == sum)
        printf("%d is a strong number\n",temp);
    else
        printf("%d is not a strong number\n",temp);

    return 0;
}
