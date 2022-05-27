#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c,maiorAB,maiorC;

    scanf("%d%d%d",&a,&b,&c);

    maiorAB=(a+b+abs(a-b))/2;
    maiorC=(maiorAB+c+abs(maiorAB-c))/2;

    printf("%d eh o maior\n",maiorC);
    return 0;
}
