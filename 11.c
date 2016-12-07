#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,p,d,r1,r2,q;

    scanf("%f%f%f",&a,&b,&c);

    d = b*b-4*a*c;

    p = sqrt(d);

    q = (2*a);

    r1 = -(b-p)/q;

    r2 = -(b+p)/q;

    printf("%0.3f\n",r1);

    printf("%0.3f\n",r2);

    return 0;
}
