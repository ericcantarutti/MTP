#include <stdio.h>

int binomial(int a, int n);
int main() {
    int n, a;
    printf("Digite o numero total de bolas: ");
    scanf("%d", &a);
    printf("Digite o numero total de bolas que voce quer tirar: ");
    scanf("%d", &n);
    printf("Binomial e: %d", binomial(a, n));
  return 0;
}
int binomial(int a, int n) {
  return ((n == 0 )? 1 : a*binomial(a-1,n-1)/n);
}
