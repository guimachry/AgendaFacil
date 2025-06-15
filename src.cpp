#include <stdio.h>

void CadastrarPessoas(){
	
	// menu de cadastro de pessoas 
	printf("-------------------\n");
	printf("CADASTRO DE PESSOAS\n");
	printf("-------------------\n");
	
	int quantidade_pessoas;
	printf("informe quantas pessoas irao partiipar da reuniao ? : ");
	scanf("%d", &quantidade_pessoas);
	
	// aqui é onde vai criar um vetor pra armazenar as strings
	// o primeiro indice é o tamanho
	// e o segundo o tamanho máximno da string
	char pessoas[quantidade_pessoas][100];
	
	
	for(int i = 0; i < quantidade_pessoas; i++){
		printf("informe nome %d :  ", i +1);
		scanf("%s", pessoas[i]);
	}
	
	printf("%d participantes : \n", quantidade_pessoas);
	for(int i = 0; i < quantidade_pessoas; i++){
		printf("%d - %s \n", i + 1, pessoas[i]);
	}
	
	
}

void cadastrarHorarios(){
	
		printf("Há quantos horarios disponiveis ? : \n");
		int qtd_horarios;
		scanf("%d", &qtd_horarios);
		
		int horario[qtd_horarios];
		int i = 0;
		
		while(horario != 0){
		
		// menu de cadastro de horarios 
		printf("-------------------\n");
		printf("CADASTRO DE HORARIOS\n");
		printf("-------------------\n");
		
		printf("Digite um horario para agendar, so aceita formatos inteiros ex: 10 : \n");
		printf("Digite 0 para encerrar \n");
		scanf("%d", &horario[i]);
		
		
		
		}
	
	
}

void registrarDisponibilidade(){
	
}

void processarDisponibilidade(){
	
}

void exibirMelhoresHorarios(){
	
}
void exibirRelatorioCompleto(){
	
}

int main(){
	
	cadastrarHorarios();
	
}













