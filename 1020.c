#include <stdio.h>

int main(){
	int tempo;
	scanf("%d", &tempo);
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", (tempo/365), ((tempo%365)/30), ((tempo%365)%30));
	return 0;
}
