#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char modelo[30];
	float potenciaMotor;
	int anoFabrico,
	numPortas;
}CARRO;

void mostra(CARRO car)
{
	printf("\n\tMostrar dados do carro:\n");
	printf("Modelo: %s\n", car.modelo);
	printf("Motor: %.1f\n", car.potenciaMotor);
	printf("Ano: %d\n", car.anoFabrico);
	printf("%d portas\n", car.numPortas);
}

void inserir(CARRO *car)
{
	printf("Modelo do carro: ");
	gets( car->modelo );
	printf("Motor: ");
	scanf("%f", &car->potenciaMotor);
	printf("Ano: ");
	scanf("%d", &car->anoFabrico);
	printf("Numero de portas: ");
	scanf("%d", &car->numPortas);
}

main()
{
	CARRO meutipo;
	
	inserir(&meutipo);
	
	mostra(meutipo);
	
	//system("pause");
}
