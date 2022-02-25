#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float E1,I1,I2,x,MA,MB,fx,E2; //I1 eh A e I2 e B

    printf("Insira o intervalo inicial\n");
    scanf("%f %f", &I1, &I2); //Intervalo em que o metodo vai trabalhar

    printf("Precisao Epsilon1:\n");
    scanf("%f", &E1); //Precisao que sera tambem a condicao de parada

    printf("Precisao Epsilon2:\n");
    scanf("%f", &E2);

    for(i=1;i<=100;i++)
    {
        printf("A: %.5f\n", I1);
        printf("B: %.5f\n", I2);
        MA=pow(I1,3)-(I1)-1; //Calculo para FA
        MB=pow(I2,3)-(I2)-1; //Calculo para FB
        if(fabs(MA)<E2)
        {
            printf("x aproximado da raiz eh: %.5f\n", I1);
            break;
        }
        if(fabs(MB)<E2)
        {
            printf("x aproximado da raiz eh: %.5f\n", I2);
            break;
        }

        if((I2-I1)<E1) //condicao de parada
        {
            printf("x aproximado da raiz eh: %.5f\n", (I2+I1)/2);
            break;
        }
        else
        {
            //MA=pow(I1,3)-(9*I1)+3;
            printf("f(a): %.5f\n", MA);
            //MB=pow(I2,3)-(9*I2)+3;
            printf("f(b): %.5f\n", MB);
            x=((I1*MB)-(I2*MA))/(MB-MA);
            printf("x: %.5f\n", x);
            fx=(pow(x,3)-(x)-1);
            printf("f(x): %.5f\n", fx);
            if(fabs(fx)<E2)
            {
                printf("x aproximado da raiz eh: %.5f\n", x);
                break;
            }
            if((MA*fx)>0)
            {
                I1=x;
            }
            else
            {
                I2=x;
            }
            if((I2-I1)<E1) //condicao de parada
            {
                printf("x aproximado da raiz eh: %.5f\n", (I2+I1)/2);
                break;
            }
            printf("\n\n");
        }
    }
    printf("numero de iteracoes %d\n", i);
    return 0;
}
