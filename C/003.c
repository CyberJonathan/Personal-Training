#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Atividade para Teste.\n");
	
		system("pause");
	
	int n1;
	
	
	printf("Digite um n�mero � descubra se ele � Par ou Impar\n");
	
		system("pause");
		
	printf("Digite um numero!\n");
		scanf("%d",&n1);
		
		if(n1 % 2 == 0){
			printf("%d numero � Par!\n",n1);
		}else{
			printf("%d numero � Impar!\n",n1);
		}	
		
		system("pause");
		
	printf("Descubra se o numero � multiplo de 5!\n");
			
		system("pause");
	
	int n2;
		
	printf("Digite um numero\n");
		scanf("%d",&n2);
		
		if(n2 % 5 == 0){
			printf("%d numero � multiplo de 5!\n",n2);
		}else{
			printf("%d numero n�o � multiplo de 5!\n",n2);
		}	
			
		system("pause");
		
	printf("Descubra a Area do Retangulo\n");
	
		system("pause");
		
		int area;
		int base;
		int altura;
		
	printf("Digite a base do retangulo!\n");
		scanf("%d",&base);		
	printf("Digite a altura do retangulo!\n");
		scanf("%d",&altura);
		
		area = base * altura;
		
	printf("A Area do Retangulo � de %d cm� \n",area);
	
		system("pause");
	
		char nomep[12];
		float valorp;
		int distancia;
		
	printf("Pre�o com Frete\n");
		
		system("pause");
	
	printf("Qual o nome do produto!\n");
		scanf("%s",&nomep);
	printf("Qual o valor do produto!\n");
		scanf("%f",&valorp);
	printf("Digite a distancia da origem pro meu destino!, em Km!\n");
		scanf("%d",&distancia);
	
		if(distancia > 50){
			printf("O frete sera de 20 reais!\n");
		}else if(distancia == 50){
			printf("O frete sera de 10 reais!\n");
		}
		
		system("pause");
		
	printf("Fim do Programa\n");
	
}
