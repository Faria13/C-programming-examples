#include <stdio.h>
int main()
{
    int i,j,k=1,r;
    scanf("%d",&r);

    for(i = 1; i <= r; i++){
        for(j = 1; j <= i; j++,k++){
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
