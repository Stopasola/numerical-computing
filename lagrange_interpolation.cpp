#include <stdio.h>
#include <stdlib.h>
int main()
{
  
 	int tamanho,cont,i,j;
     printf("Insira o numero de valores conhecidos da funcao que deseja interpolar:\t");
     scanf("%d",&tamanho);
     printf("\n");  
     float vetfx[tamanho],p,pn,vetx[tamanho],x,fx;
     printf("Valores de x pre existentes:\n");
     for(cont=0;cont<tamanho;cont++){
        printf("Insira o valor de x%d :\t",cont);
        scanf("%f",&vetx[cont]);
     }                                  
     printf("Valores de f<x> pre existentes:\n");    
     for(cont=0;cont<tamanho;cont++){
        printf("Insira o valor de y%d :\t",cont);
        scanf("%f",&vetfx[cont]);
     }                                
     printf("Insira o valor de x para o qual deseja obter f<x>: ");
     scanf("%f",&x);
     printf("\n"); 
	 pn=0;       
     for(j=0;j<tamanho;j++){
     	p=1;
       	for(i=0;i<tamanho;i++){
       		if(i!=j){
        	p = p * (x - vetx[i]) / (vetx[j] - vetx[i]); 
			}
		} 
	pn = (p * vetfx[j]) + pn;
	}
     printf("O valor de f<%f> e : %.4f ",x,pn);
     printf("\n\n");
     

  system("PAUSE");    
  return 0;
}
