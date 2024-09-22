#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*mdsss passei horas nesse codigo, por causa de um \n no lugar errado */
/*não coloquem \n num scanf, beijão*/
int main()
{
    float v1, v2, r1;
    int opr;

    printf("\ndigite o primeiro valor\n");
    scanf("%f", &v1);

    printf("\ndigite o segundo valor\n");
    scanf("%f", &v2);

    printf("***menu de operadores***\n");
    printf("escolha o operador desejado:\n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("5 - potencia\n");
    printf("6 - exit\n");
    scanf("%d", &opr);

    switch (opr)
    {
    case 1:
        r1 = v1 + v2;
        printf("o resultado da soma e %f\n", r1);
        break;

    case 2:
        r1 = v1 - v2;
        printf("o resultado da subtracao deu %f\n", r1);
        break;

    case 3:
        r1 = v1 * v2;
        printf("o resultado da multiplicacao foi %f\n", r1);
        break;

    case 4:
        if (v2 != 0)
        {
            r1 = v1 / v2;
            printf("o resultado da divisao e %f\n", r1);
        }
        else
        {
            printf("divisao por 0 nao e permitida\n");
        }
        break;

    case 5:
        r1 = pow(v1, v2);
        printf("o resultado da potencia e de %f\n", r1);
        break;
    case 6:
        printf("voce fechou o programa...");
        break;
    default:
        printf("voce escolheu uma opcao inexistente\n");
        break;
    }
    return 0;
}