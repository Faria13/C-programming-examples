#include <stdio.h>
int main()
{
    int n,i,sum=0;

    i = 1;

    printf("Enter a number: \n");

    scanf("%d",&n);

    while(i < n){
        if(n%i == 0)
            sum = sum+i;
            i++;
    }
    if(sum == n)
        printf("%d is a perfect number\n",i);
    else
        printf("%d is not a perfect number\n",i);

    return 0;
}
