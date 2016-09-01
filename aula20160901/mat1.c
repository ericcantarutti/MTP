#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, distancia;
    printf("Digite a coordenada x1 do ponto 1: ");
    scanf("%lf",&x1);
    printf("Digite a coordenada y1 do ponto 1: ");
    scanf("%lf",&y1);
    printf("Digite a coordenada x2 do ponto 2: ");
    scanf("%lf",&x2);
    printf("Digite a coordenada y2 do ponto 2: ");
    scanf("%lf",&y2);
    distancia = sqrt(pow(x2-x1,2.) + pow(y2-y1,2.));
    printf(" A distancia entre os pontos P1(%2.lf,%2.lf) e P2(%2.lf,%2.lf) e %lf\n", x1, y1, x2, y2, distancia);
return 0;
}
