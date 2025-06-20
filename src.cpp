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

void cadastrarHorarios() {
	
	printf("-------------------\n");
	printf("CADASTRO DE HORARIOS\n");
	printf("-------------------\n");
	
    int qtd, i = 0, entrada = 1, j, igual;
    
    // aqui ele vai fazer a coleta da quantidade de horarios pra registro
    printf("Quantos horarios deseja adicionar ? ");
    scanf("%d", &qtd);
    int horarios[qtd];
    
	// este laço vai verificar se o "i" é menor que a quantidade e se a entrada é diferente de 0
	// sao 2 condiçoes pra ele funcionar
	// ai ele faz as verificações e cadastra

    while (i < qtd && entrada!= 0) {
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
            if (horarios[j] == entrada) {
				igual = 1;
        	}
		}
		
		// se o horario = 1, da ocupado, senao ele registra  e incrementa i++ pra sguir pra proxima
        if (igual == 1) {
            printf("horario ocupado \n");
        } else {
            horarios[i] = entrada;
            i++;
            printf("Horario registrado com sucesso!\n");
        }
    }
	
	// print dos horaiors cadastrados
    printf("Horários Cadastrados: ");
    for (j = 0; j < i; j++) {
    	
        	printf("%d ", horarios[j]);
    }
    
    printf("\n");
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
	
	CadastrarPessoas();
	cadastrarHorarios();
	
	
}













