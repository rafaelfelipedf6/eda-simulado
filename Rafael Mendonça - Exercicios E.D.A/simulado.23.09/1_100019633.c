#include<stdio.h>
#include<stdlib.h>
/*assinatura basica de 100min de conversação, cada minuto além é 0.15 centavos, pacote básico é de X reais por mes */
float calculaConta(unsigned int tempo, unsigned int xbas){
	int func;
	float adicional;

	if(tempo>=100){
		func=tempo-100;
		adicional=func*0.15;
		return(xbas+adicional);
	}else{
		return xbas;	
	}
}
int main(void){

	unsigned int x, t;
	float valorAtualizado;
	scanf("%u",&x);
	scanf("%u",&t);

	valorAtualizado=calculaConta(t,x);
	printf("VALOR DA CONTA = R$ %0.02f",valorAtualizado);

	return(0);
}
