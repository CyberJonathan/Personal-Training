#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	char nome[12];
	int idadeusu;
	
	
	printf("Atividades para Treino 2.\n");
	
		system("pause");
		
	printf("Qual o seu nome?\n");
		scanf("%s",&nome);
	printf("Qual a sua idade?\n");
		scanf("%d",&idadeusu);	
		
		if(idadeusu <= 12){
			printf("O Usuario � uma crian�a!\n");
		}else if(idadeusu > 13 && idadeusu < 17){
			printf("O Usuario � um adolesc�nte!\n");
		}else{
			printf("O Usuario � um Adulto!\n"); 
		}
		
		system("pause");
	
	int p;
	int s;
	
		
	printf("Atividade para Treino!\n");
	
		system("pause");
		
	printf("Digite o primeiro numero\n");
		scanf("%d",&p);		
	printf("Digite o segundo numero\n");
		scanf("%d",&s);
	
		if(p > s){
			printf("%d � maior que %d\n",p,s);
		}else if (p == s){
			printf("%d s�o iguais %d\n",p,s);
		}else{
			printf("%d � maior que %d\n",s,p);
		}
	
		system("pause");
		
		int nmult;
		
		
	printf("Atividade para Treino!\n");
		
		system("pause");	
		
	printf("Digite um numero inteiro/int!\n");
		scanf("%d",&nmult);	
		
		system("pause");
		
		if(nmult % 3 == 0){
			printf("Esse numero � divisivel por 3!\n");
		}else{
			printf("Esse numero n�o � divisivel por 3!\n");
		}
		
		system("pause");
		
	printf("Fim do Programa!\n");	
		
		
	return 0;
}
