#include<stdio.h>
int main()
{
    int X;
    double Y,ac;

    scanf("%d",&X);
    scanf("%lf",&Y);

    ac=X/Y;

    printf("%.3lf km/l\n",ac);
    
    return 0;

}
