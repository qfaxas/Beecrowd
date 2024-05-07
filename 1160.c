#include <stdio.h>

int main(){
	float ca, cb;
	int cases, i, pa, pb, tempo;
	scanf("%i", &cases);	
	for (i = 1 ; i <= cases; i++){
		scanf(" %d %d %f %f", &pa, &pb, &ca, &cb);				
		for (tempo = 1; tempo <= 100; tempo++){
			pa *= (1 + ca/100);
			pb *= (1 + cb/100);
			if (pa > pb){
				printf("%d anos.\n", tempo);
				break;
			}
		}
		if (tempo == 101) printf("Mais de 1 seculo.\n");		
	}
	
	return 0;
}

