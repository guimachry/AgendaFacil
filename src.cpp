#include <stdio.h>



typedef struct{
	int quantidade_pessoas;
	int quantidade_horarios;
	char pessoas[100][100];
	int horarios[20];		
}Dados;

void CadastrarPessoas(Dados *dados){
	
	// menu de cadastro de pessoas 
	printf("-------------------\n");
	printf("CADASTRO DE PESSOAS\n");
	printf("-------------------\n");
	
	
	printf("informe quantas pessoas irao partiipar da reuniao ? : ");
	scanf("%d", &dados->quantidade_pessoas);
	
	// aqui é onde vai criar um vetor pra armazenar as strings
	// o primeiro indice é o tamanho
	// e o segundo o tamanho máximno da string
	
	
	
	for(int i = 0; i < dados->quantidade_pessoas; i++){
		printf("informe nome %d :  ", i +1);
		scanf("%s", dados->pessoas[i]);
	}
	
	printf(" participantes : \n");
	for(int i = 0; i < dados->quantidade_pessoas; i++){
		printf("%d - %s \n", i + 1, dados->pessoas[i]);
	}
	
	
}

void cadastrarHorarios(Dados *dados) {
	
	printf("-------------------\n");
	printf("CADASTRO DE HORARIOS\n");
	printf("-------------------\n");
	
    int  i = 0, entrada = 1, j, igual;
    
    // aqui ele vai fazer a coleta da quantidade de horarios pra registro
    printf("Quantos horarios deseja adicionar ? ");
    scanf("%d", &dados->quantidade_horarios);
    
    
	// este laço vai verificar se o "i" é menor que a quantidade e se a entrada é diferente de 0
	// sao 2 condiçoes pra ele funcionar
	// ai ele faz as verificações e cadastra

    while (i < dados->quantidade_horarios && entrada!= 0) {
    	// definido intervalo fixo de horarios pra cadastro, ou seja, so entre as 8 e as 18 pra evitar erros.
        printf("Digite horarios entra as 8 e as 18 / 0 encerra: ");
        scanf("%d", &entrada);
	
        
		// neste condicional ele vai ver se a entrada se encaixa nos paramentros de horario; 
        if (entrada < 8 || entrada > 18) {
            printf("So horario entre as 8 e as 18 \n");
            // esse "continue" aqi vai servir pra depois que entrar no condicoinal, ele nao encerrar o laço
			continue;
        }
		
		// inicializa a variavel igual pra verificar se o horarios ja esta ocupado
		// utiliza 1 e 0 como validadores 
        igual = 0;
        // esse laço percorre o vetor pra ver se a entrada ja tem um horario ocupado, se tem ela joga 1 pra igual
        for (j = 0; j < i; j++) {
            if (dados->horarios[j] == entrada) {
				igual = 1;
        	}
		}
		
		// se o horario = 1, da ocupado, senao ele registra  e incrementa i++ pra sguir pra proxima
        if (igual == 1) {
            printf("horario ocupado \n");
        } else {
            dados->horarios[i] = entrada;
            i++;
            printf("Horario registrado com sucesso!\n");
        }
    }
	
	// print dos horaiors cadastrados
    printf("Horários Cadastrados: ");
    for (j = 0; j < dados->quantidade_horarios; j++) {
    	
        	printf("%d ", dados->horarios[j]);
    }
    
    printf("\n");
}



void registrarDisponibilidade(Dados *dados, int disponibilidade[100][20]){
	
	printf("-------------------\n");
	printf("REGISTRO Disponibilidade\n");
	printf("-------------------\n");
	
	for(int i = 0; i < dados->quantidade_pessoas; i++){
		printf("olá %s, informe disponibilidade, para SIM 1/ NAO 0. \n", dados->pessoas[i]);
		for(int j = 0; j < dados->quantidade_horarios; j++){
			printf("Disponivel as %d horas ? ",dados->horarios[j]);
			scanf("%d", &disponibilidade[i][j]);
		}
	}
		
}

void processarDisponibilidade(){
	
}

void exibirMelhoresHorarios(){
	
}
void exibirRelatorioCompleto(){
	
}

int main(){
	
	Dados dados;
	int disponibilidade[100][20];
	
	CadastrarPessoas(&dados);
	cadastrarHorarios(&dados);
	registrarDisponibilidade(&dados, disponibilidade);
	
	
}













