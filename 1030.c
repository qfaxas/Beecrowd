#include <stdio.h>

int resta(int pessoas, int passo);

int main(){

	int casos, pessoas, passo, i;								//i é o indice para o for/numero de casos para print, casos em si é a condição de 
																//parada
	
	scanf("%d %d %d", &casos, &pessoas, &passo);				
	
	for (i = 1; i <= casos; i++){								//loop para o numero de casos
	
		printf("Case %i: %i\n", i, resta(pessoas, passo));
	
		if(i != casos)	scanf("%d %d", &pessoas, &passo);		//nova atribuição de variaveis
	
	}

	return 0;

}

int resta(int pessoas, int passo){

	int vivos[pessoas], i = 0, cont = 0, mortos = 0, final = 0; /* vivos é uma lista que marca com 1 aqueles que ainda estão vivos, i é o indice
																para os loops em for, cont conta as pessoas até o passo, e final é o somatório dos
																número de 1 até a quantidade de pessoas */
	
	for(i = 0; i < pessoas; i++){								//preencher a lista com 1.
		
		vivos[i] = 1;
		
	} 
	
	final = (pessoas * (pessoas + 1))/2;						//fórmula de somatório
	
	i = 0;
		
	while(1){													//loop infinito para forçar um break
			
		if (vivos[i] == 1)	cont++;								//cont só considera jogadores vivos
				
		if (cont == passo){										//se o cont for igual ao passo, o jogador morre
			
			vivos[i] = 0;
				
			cont = 0;
			
			final -= i + 1;										//e seu numero é subtraido do somatorio
				
			mortos++;											//além de aumentar o número de mortos
			
		}
			
		if(mortos == pessoas - 1)	break;						//que quando deixar somente um vivo encerra o programa
		
		i++;
		
		if(i >= pessoas)	i = 0;								//reseta o indice da lista no final
		
	}
	
	return final;
			
}

