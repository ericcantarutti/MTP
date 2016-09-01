#include <stdio.h>
#include <complex.h>
int main(){
    double complex z1, z2, soma, produto;
    double r1, i1, r2, i2;
    printf("Digite a parte real de z1: ");
    scanf("%lf",&r1);
    printf("Digite a parte imaginaria z1: ");
    scanf("%lf",&i1);
    printf("Digite a parte real de z2: ");
    scanf("%lf",&r2);
    printf("Digite a parte imaginaria d2 z2: ");
    scanf("%lf",&i2);
    z1 = r1 + i1 *I;
    z2 = r2 + i2 *I;
    soma = z1 + z2;
    produto = z1 * z2;
    printf(" A soma dos numeros complexos  e %lf + %lf i\n", creal(soma), cimag(soma));
    printf(" A soma dos numeros complexos  e %lf + %lf rad\n", cabs(soma), carg(soma));
    printf(" O produto dos numeros complexos  e %lf + %lf i\n", creal(produto), cimag(produto));
    printf(" O produto dos numeros complexos  e %lf + %lf rad\n", cabs(produto), carg(produto));
return 0;
}

