#include<stdio.h>
int main()
{
    double a,b,c,pi=3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;

    scanf("%lf%lf%lf",&a,&b,&c);
    TRIANGULO = (1/2.0)*a*c;
    CIRCULO = c*c*pi;
    TRAPEZIO = (1/2.0)*(a+b)*c;
    QUADRADO = b*b;
    RETANGULO = a*b;
    

    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);
    
    return 0;
}
