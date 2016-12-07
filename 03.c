#include <stdio.h>
int main()
{
    int num,temp,r,sum=0;

    scanf("%d",&num);

    temp = num;

    while(num!=0){
        r = num%10;
        num = num/10;
        sum += (r*r*r);
    }
    if(sum == temp){
        printf("%d is an Armstrong number\n",temp);
    }
    else{
        printf("%d is not an Armstrong number\n",temp);
    }


    return 0;
}
