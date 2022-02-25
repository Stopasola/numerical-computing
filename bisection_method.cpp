#include<stdio.h>
#include<stdlib.h>


float function(float x){
	float cubo,f;
	cubo=(x*x)*x ;
	f=(cubo-x)-k0; ik+ ;
}  
   
int main (){

	float a,b,fx,precisao;
  	float xa,k=0,f,fa,fb,x,m,inter;    

	printf("Escreva o intervalo inici al\n");
	scanf("%f",&intial_interval) ; 

	scanf("%f",&final);
	printf("Escreva a precis�o\n");
	scanf("%f",&precision);

	if((fa*fb)>0){
		printf("O valor de a e final n�o pode ser calculados pois f(a)*f(b) sao maiores que 0\n");
		return 0;
	}
	
	for(k=0; k<100; k++){
		x  = intial_interval;
		f  = function(x);
		fa = f;

		x  = final;
		f  = function(x);
		fb = f;
		
		f  = function(x);
		fa = f;
		m  = fa;
		x  = (intial_interval + final) / 2;
		
		f  = function(x);
		fx = f;

		if((m*fx)>0){
			intial_interval=x;
		}
		else{
			final=x;
		}

		if( (final-intial_interval) < precision){
			break;
		}
	}

	x     = intial_interval;
	f     = function(x);
	fa    = f;
	x     = final;
	f     = function(x);
	fb    = f;
	inter = final - intial_interval;

	printf("O Valor de x eh %f\n",x);
	printf("O valor de f(x) eh %f\n",fx);
	printf("O valor de f(a) eh %f\n",fa);
	printf("O valor de f(b) eh %f\n",fb);
	printf("O valor de intial_interval final eh %f\n",intial_interval);
	printf("O valor de final final eh %f\n",final);
	printf("O valor do intervalo eh %f\n",inter);
	
	return 0;	
}
