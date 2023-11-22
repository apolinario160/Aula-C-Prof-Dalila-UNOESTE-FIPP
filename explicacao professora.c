#include <stdio.h>
#include <windows.h>
#define MAXTAM 10

int inicio, fim, FILA[MAXTAM];

void CriaFila(){
	inicio = 0, fim = -1;
	printf("\nFila Criada\n");
}

int FilaVazia(){
	if(inicio>fim){
		return 1;
	}
	else{
		return 0;
	}
}

int FilaCheia(){
	if(fim == MAXTAM -1){
		return 1;
	}
	else{
		return 0;
	}
}

void InsereFila(int valor){
	if(FilaCheia()){
		printf("\n A Fila esta Cheia\n");
	}
	else{
		fim++;
		FILA[fim]=valor;
	}
}

int RemoveFila(){
	int valor;
	if(FilaVazia()){
		return 1;
	}
	else{
		valor = FILA[inicio];
		inicio++;
		return valor;
	}
}

int Tamanho(){
	return(fim-inicio)+1;
}
int EstaVazia() {
    if (Tamanho() == 0) {
        printf("\nFila vazia\n");
        return 1;
    }
    return 0; 
}

void ExibeFila(){
	int x;
	if(!FilaVazia()){
		for(x=inicio; x<=fim; x++){
			printf("\n\%d\n", FILA[x]);
		}
		
	}
	else{
			printf("\nA Fila esta vazia.\n");
	}
}

void menu(){
	printf("\n 1 - Criar Fila: ");
	printf("\n 2 - Inserir Fila: ");
	printf("\n 3 - Remover Fila: ");
	printf("\n 4 - Tamanho Fila: ");
	printf("\n 5 - Exibe Fila: ");
	printf("\n 0 - Sair: ");
	
}
main(){
	int op, valorf;
	menu();
	printf("\nOpcao desejada:");
	scanf("%d", &op);
	while(op!=0){
		switch(op){
			case 1: CriaFila(); system("pause"); break;
			case 2: printf("\nInforme um valor:\n"); scanf("%d", &valorf); InsereFila(valorf); break;
			case 3: printf("\nO elemento removido foi:%d\n", RemoveFila()); system("pause"); break;
			case 4: printf("\nO tamanho da Fila e: %d\n", Tamanho()); if(EstaVazia()){system("pause");} break;
			case 5: ExibeFila(); system("pause"); break;
		}		
		system("cls");
		menu();
		printf("\nOpcao desejada:");
		scanf("%d", &op);
	}
}
