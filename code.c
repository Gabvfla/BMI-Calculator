#include <stdio.h>
#include <string.h>
int main() {
	char nome[20];
	int peso;
	float altura;
	printf("Digite seu nome: \n");
	scanf("%s", nome);
	printf("Digite seu peso: \n");
	scanf("%d", &peso);
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	double conta = peso/(altura*altura);
	double agua = peso*35/1000;
	printf("Seu IMC é %.2f\n", conta);
	if (conta < 18)
	{
		printf("Você está classificado como : ""Magreza"" Atenção!!!\n");
	}
	if (conta > 18 & conta < 25)
	{
		printf("Você está classificado como: ""Peso Normal"" \n");
	}
	if (conta > 25)
	{
		printf("Você está classificado como: ""Sobrepeso"" Atenção!!!\n");
	}
	printf("Você precisa tomar %.2f litros de água por dia\n", agua);

	return 0;
}
