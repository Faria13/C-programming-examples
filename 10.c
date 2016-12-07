#include <stdio.h>
int main()
{
    int fact=1,n,i;

    scanf("%d",&n);

    for(i = n; i > 0; i--){
        fact = fact*i;
    }
    printf("The factorial of %d is: %d\n",n,fact);

    return 0;
}
