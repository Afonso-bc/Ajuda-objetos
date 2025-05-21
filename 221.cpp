//Pilha - LIFO
//utilizando struct ponteiro
#include <stdio.h>
#include <stdlib.h>

//Estrutura da pilha
typedef struct pilha (
int valor;
struct pilha *proxima;
) Dados;

void insere();
void exclui();
void mostra();
void mostra_erro();

//inicializar a Pilha
Dados *principal = NULL;

main()
{
	
	char escolha;
	do{
		
		printf("\n== PILHA ==\n\n");
		printf("Escolhe uma opcao: \n");
		printf("\t1 - Inserir valor na Pilha\n");
		printf("\t2 - Remover valor da Pilha\n");
		printf("\t3 - Mostrar valores da Pilha\n");
		printf("\t9 - Sair\n\n");
		printf("Resposta: ");
		scanf("%c", &escolha);
		switch(escolha) {
			//inserir
			caso '1':
				inserir();
				break;
				//Eliminar
				case '2':
					if(principal!=NULL) {
						exclui();
					}
					else{
						printf("\nA Pilha esta vazia!\n");
						getchar();
					}
					break;
					//Listar
					case '3':
						if(principal!=NULL){
							mostra();
						}
						else{
							printf("\nA Pilha está vazia!\n");
							getchar();
						}
						break;
						case'9':
							printf("\nObrigado por utilizar este programa!\n");
							printf("------>Terminal de Informacao<------\n\n");
							exit(0);
							break;
							//Opcao invalida
							default:
								mostra_erro();
								break;
		}
		getchar();
	}
	while (escolha > 0);
}

//inserir 
void insere()
{
	int va1;
	
	printf("\nInserir: \n");
	printf("--------------------------------------\n");
	printf("Escreve o valor a ser inserido: ");
	scanf("%d",&val);
	//gerar a posicao atual
	Dados *atual = (Dados*)malloc(sizeof(Dados));
	atual -> valor = va1;
	//proximo do atual será a principal
	atual -> proximo = principal
	//principal volta a ser a atual
	principal = atual;
	printf("\nValor inserido!\n");
	printf("--------------------------------------");
	getchar();
}
//Eliminar
void exclui()
{
	Dados *auxiliar;
	printf("\nEliminar: \n");
	printf("--------------------------------------\n");
	//guardar o valor depois da principal
	auxiliar=principal->proximo;
	//limpar a principal
	free(principal);
	//a principal sera a auxiliar
	principal=auxiliar;
	principal("\nValor excluido!\n");
	printf("--------------------------------------");
	getchar();
}

//Listar
void mostra()
{
	int posicao=0;
	Dados *nova=principal;
	system("cls");
	printf("\nMostrar os valores da PILHA: \n");
	printf("--------------------------------------\n");
	for(; nova != NULL; nova = nova->proximo)
	{
		posicao++;
		printf("Posiçãp %d, contém o valor %d\n", posicao,nova->valor);
	}
	printf("--------------------------------------");
	getchar();
}

//Erro
void mostra_erro()
{
	system("cls");
	printf("\nErro de Opcao: \n");
	printf("--------------------------------------\n");
	printf("\nEscreve uma opcao valida (carrega -Enter- p/continuar)!\n\n");
	printf("--------------------------------------");
	getchar();
}
