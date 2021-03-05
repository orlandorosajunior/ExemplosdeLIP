#include <stdio.h>
int main()
{
	// Definição de variáveis //Inicializar as variáveis
	int n1 = 0, n2 = 0, resultado = 0, ressub = 0, resmul = 0;
	float resdiv = 0.00;
	//Atribuição de valores
	printf("Digite um valor:");
	scanf_s("%d", &n1);
	printf("Voce digitou esse valor: %d", n1);
	printf("\nDigite o segundo valor:");
	scanf_s("%d", &n2);
	resultado = n1 + n2;
	printf("\nO resultado e:%d", resultado);
	ressub = n1 - n2;
	printf("\nO resultado e:%d", ressub);
	resmul = n1 * n2;
	printf("\nO resultado e:%d", resmul);
	resdiv = (float) n1 / (float) n2;
	printf("\nO resultado e:%.2f", resdiv);
}