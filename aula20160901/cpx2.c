#include <stdio.h>
#include <complex.h>
int main(){
    double complex z1, z2, produto;
    double r1, i1;
    printf("Digite a parte real de z1: ");
    scanf("%lf",&r1);
    printf("Digite a parte imaginaria z1: ");
    scanf("%lf",&i1);
    z1 = r1 + i1 *I;
    z2 = conj(z1);
    produto = z1 * z2;
    printf(" O produto dos numeros complexos  e %.2lf + %.2lf i\n", creal(produto), cimag(produto));
    printf(" O produto dos numeros complexos  e %.2lf + %.2lf rad\n", cabs(produto), carg(produto));
return 0;
}

