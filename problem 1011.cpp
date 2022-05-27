#include<stdio.h>
int main()
{
    double R,pi,vol;

    pi=3.14159;

    scanf("%lf",&R);
    vol=((4/3.0)*pi*R*R*R);

    printf("VOLUME = %.3lf\n",vol);

    return 0;
}
