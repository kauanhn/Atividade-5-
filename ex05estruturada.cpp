#include <stdio.h>
	
	float le_valida_media(float num, int indice){
		
		int i=0;
		
		while(i==0){
			
			printf("Digite a %da nota: ", indice+1);
			scanf("%f", &num);
		
			if(num >= 0 && num <= 10){
				i++;
			}
			
		}
		
		return num;
				
	}
	
	float calcular_media(float qntd, float soma){
		
		float media;
		
		return media = soma/qntd;
		
	}
	
int main(){
	
	int repro=0, apro=0, qntd;
	float num, soma=0, menor, maior, media;
	
	printf("\n--------------------\n");
	printf("Relatorio da turma");
	printf("\n--------------------\n\n");
	
	printf("Digite a quantidade de medias: ");
	scanf("%d", &qntd);
	
	printf("\n--------------------\n");
	
	for(int i=0; i<qntd; i++){
			
			num = le_valida_media(num, i);
			
			if(qntd==0){
				menor = num;
				maior = num;
			}
			
			else if(num<menor){
				menor = num;
			}
			
			else if(num>maior){
				maior = num;
			}
			
			if(num >= 7){
				apro++;
			}else{
				repro++;
			}
			
			soma+=num;
				
	}
	
	media = calcular_media(float(qntd), soma);
	
	printf("--------------------\n");
	
	printf("Media da turma: %.1f \n", media);
	printf("Maior nota: %.1f \n", maior);
	printf("Menor nota: %.1f \n", menor);
	printf("Reprovados: %d \n", repro);
	printf("Aprovados: %d", apro);
	
	printf("\n--------------------\n");
	
	printf("   BSB - 2023\n");
	
	return 0;
}
