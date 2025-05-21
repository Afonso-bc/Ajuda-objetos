#include<stdio.h>
#include<stdlib.h>

typedef struct carro
{
	char modelo[30];
	float potenciaMotor;
	int anoFabrico, numPortas;
}CARRO;
void mostra(CARRO car)
{
	printf("Modelo: %s\n", car.modelo);
	printf("Motor: %.1f\n", car.potenciaMotor);
	printf("Ano: %d\n", car.anoFabrico);
	printf("%dportas\n", car.numPortas);
}

main()
{
	CARRO meutipo = {"XPTO preto", 2.5, 74, 2};
	
	mostra(meutipo);
	
//system("pause");
	)
	

