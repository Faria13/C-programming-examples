#include <stdio.h>
int main()
{
    int a,check,i;

    scanf("%d",&a);

    check = 1;

    if(a == 0 || a == 1)
        check = 0;
    for(i = 2; i < a; i++){
        if(a%i == 0)
            check = 0;
    }
    if(check == 1){
        printf("%d is a prime number\n",a);
    }
    else{
       printf("%d is not a prime number\n",a);
    }

    return 0;
}
