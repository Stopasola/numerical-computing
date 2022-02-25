#include <stdio.h>
#include <math.h>

float f(float x) {
   return pow(x,2)-5*x+6;
}

float der(float x) {
   return 2*x-5; // derivada de f(x).
}

int main() {
   float eps, x0, *iter; // erro, ponto inicial, vetor itera��es.
   int i, numiter; // itera��o atual, n�mero de itera��es.

   printf("M�todo de Newton-Rhapson para o zero da fun��o f(x).\n");
   printf("Digite o erro: \n");

   scanf("%f",&eps);

   printf("Digite o n�mero m�ximo de itera��es?\n");
   scanf("%d", &numiter);

   printf("Digite o X0 inicial? \n");
   scanf("%f", &x0);

   // Alocar din�micamente mem�ria para o vetor das itera��es.
   iter = malloc(sizeof(float) * numiter);

   // Condi��es iniciais.
   iter[0] = x0;
   i = 0;

   // Itera��es.
   while(f(iter[i]) > eps) {
      // Excedeu o nosso limite de itera��es.
      if(i > numiter) {
         printf("N�o convergiu em %d itera��es!!!\n", numiter);
         printf("Provavelmente f'(x) est� errada.\n");

      
      }
      iter[i+1] = iter[i] - f(iter[i])/der(iter[i]);
      i++;
   }

   printf("X ~= %f ", iter[i]);
   printf("\nForam feitas %d itera��es.\n",i);
}
