#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <conio.h>
#include <unistd.h>
#include <stdbool.h>


#define MAX_cliente 2

enum{
	Chave_ENTER = 13,
	CHAVE_ESC = 27,
	//SETA_CIMA = 256 + 72,
	//SETA_BAIXO = 256 + 80,
	//SETA_ESQUERDA = 256 + 75,
	//SETA_DIREITA = 256 + 77	
};
static int GET_CODE(void){
	
	int Get_ch = getch();
	if(Get_ch == 0 || Get_ch ==224){
		Get_ch = 256 + getch();
	}
	return Get_ch;
}

struct info{
	int idade;
	float altura;
	float peso;
	char nome[40];
	char identificacao;
	char identifico[2][40];
	char codigo[50];
	char part[40];
	char pesquisa[10];
};

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout =  GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	system("title Prova De Struct Nº2");
	system("Color 02");
	
	
	
	struct info cliente[5];
	int Contador_ch_Nome[MAX_cliente], numercao_de_pesquisa, receptor_tecla;
	char check[3];
	
	printf("\n\n\n============================\n");
	printf("|                          |\n");
	printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
	printf("|                          |\n");
	printf("============================\n\n");	
	
	while((receptor_tecla=GET_CODE()) != CHAVE_ESC){
		system("Cls");
		for(int i=0;i<MAX_cliente;i++){
			system("Cls");
			do{
				system("Cls");	
				printf("\033[1;35mDigite o Nome do Atleta Nº\033[4;34m%d\033[0m\033[1;35m: \033[0;32m", i+1);
				fgets(cliente[i].nome, 40, stdin);
				fflush(stdin);
				strtok(cliente[i].nome, "\n");
				Contador_ch_Nome[i] = strlen(cliente[i].nome);
			//	printf("\n\n%d\n\n", Contador_ch_Nome);
				
	
				printf("\n\033[1;35mDigite a Altura do(a) \033[4;34m%s\033[0m\033[1;35m: \033[0;32m", cliente[i].nome);
				scanf("%f", &cliente[i].altura);
				fflush(stdin);
			
				printf("\n\033[1;35mDigite o peso do(a) \033[4;34m%s\033[0m\033[1;35m: \033[0;32m", cliente[i].nome);
				scanf("%f", &cliente[i].peso);
				fflush(stdin);
			
				printf("\n\033[1;35mDigite a idade do(a) \033[4;34m%s\033[0m\033[1;35m: \033[0;32m", cliente[i].nome);
				scanf("%d", &cliente[i].idade);
				fflush(stdin);
				
				printf("\n\033[1;35mDigite o modo do seu treino\n(entre M-para musculação, C-para crossfit e I-para Luta: \033[0;32m");
				scanf("%c", &cliente[i].identificacao);
				fflush(stdin);
	

				if(Contador_ch_Nome[i]<3 || Contador_ch_Nome[i]>40 || cliente[i].idade<16 || cliente[i].idade>90){
					system("Cls");
					printf("\nInfelizmente alguma das informações recebidas não baitem com as diretrizes da organização\nRecomece o processo\n");
					printf("\n\n\n============================\n");
					printf("|                          |\n");
					printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
					printf("|                          |\n");
					printf("============================\n\n");
					getch();
					fflush(stdin);
				}
				switch(cliente[i].identificacao) {
					case 'M':
						strcpy(cliente[i].codigo, "LL4");
						strcpy(cliente[i].identifico, "musculação");
						system("Cls");					
						if(Contador_ch_Nome[i]>3 && Contador_ch_Nome[i]<40 && cliente[i].idade>16 && cliente[i].idade<90){	
							system("Cls");					
							printf("O codigo da sua conta é: %s", cliente[i].codigo);
							printf("\n\n\n============================\n");
							printf("|                          |\n");
							printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
							printf("|                          |\n");
							printf("============================\n\n");
							getch();
							fflush(stdin);
						}
						break;
					case 'm':
						strcpy(cliente[i].codigo, "C4C");
						strcpy(cliente[i].identifico, "musculação");
						if(Contador_ch_Nome[i]>3 && Contador_ch_Nome[i]<40 && cliente[i].idade>16 && cliente[i].idade<90){	
							system("Cls");					
							printf("O codigo da sua conta é: %s", cliente[i].codigo);
							printf("\n\n\n============================\n");
							printf("|                          |\n");
							printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
							printf("|                          |\n");
							printf("============================\n\n");
							getch();
							fflush(stdin);
						}
						break;
					case 'C':
						strcpy(cliente[i].codigo, "2Gd");
						strcpy(cliente[i].identifico, "crossfit");
						if(Contador_ch_Nome[i]>3 && Contador_ch_Nome[i]<40 && cliente[i].idade>16 && cliente[i].idade<90){	
							system("Cls");					
							printf("O codigo da sua conta é: %s", cliente[i].codigo);
							printf("\n\n\n============================\n");
							printf("|                          |\n");
							printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
							printf("|                          |\n");
							printf("============================\n\n");
							getch();
							fflush(stdin);
						}
						break;
					case 'c':
						strcpy(cliente[i].codigo, "Z7h");
						strcpy(cliente[i].identifico, "crossfit");
						system("Cls");					
						if(Contador_ch_Nome[i]>3 && Contador_ch_Nome[i]<40 && cliente[i].idade>16 && cliente[i].idade<90){	
							system("Cls");					
							printf("O codigo da sua conta é: %s", cliente[i].codigo);
							printf("\n\n\n============================\n");
							printf("|                          |\n");
							printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
							printf("|                          |\n");
							printf("============================\n\n");
							getch();
							fflush(stdin);
						}
						break;
					case 'I':
						strcpy(cliente[i].codigo, "VfV");
						strcpy(cliente[i].identifico, "Luta");
						if(Contador_ch_Nome[i]>3 && Contador_ch_Nome[i]<40 && cliente[i].idade>16 && cliente[i].idade<90){	
							system("Cls");					
							printf("O codigo da sua conta é: %s", cliente[i].codigo);
							printf("\n\n\n============================\n");
							printf("|                          |\n");
							printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
							printf("|                          |\n");
							printf("============================\n\n");
							getch();
							fflush(stdin);
						}
						break;
					case 'i':
						strcpy(cliente[i].codigo, "LHF");	
						strcpy(cliente[i].identifico, "Luta");
						if(Contador_ch_Nome[i]>3 && Contador_ch_Nome[i]<40 && cliente[i].idade>16 && cliente[i].idade<90){	
							system("Cls");					
							printf("O codigo da sua conta é: %s", cliente[i].codigo);
							printf("\n\n\n============================\n");
							printf("|                          |\n");
							printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
							printf("|                          |\n");
							printf("============================\n\n");
							getch();
							fflush(stdin);
						}
	
						break;
					default:
						system("Cls");
						printf("\nInfelizmente alguma das informações recebidas não baitem com as diretrizes da organização\nRecomece o processo\n");
						printf("\n\n\n============================\n");
						printf("|                          |\n");
						printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
						printf("|                          |\n");
						printf("============================\n\n");
						getch();
						fflush(stdin);	
						break;
				}
			//|| strcmp(cliente[i].identificacao, "M")==0 || strcmp(cliente[i].identificacao, "m")==0 || strcmp(cliente[i].identificacao, "C")==0 || strcmp(cliente[i].identificacao, "c")==0 || strcmp(cliente[i].identificacao, "I")==0 || strcmp(cliente[i].identificacao, "i")==0
			}while(Contador_ch_Nome[i]<3 || Contador_ch_Nome[i]>40 || cliente[i].idade<16 || cliente[i].idade>90);	
					
		}

/*	for(int i=0;i<MAX_cliente;i++){
		printf("%s", cliente[i].codigo);		
	}*/
		system("Cls");
		printf("\nDeseja procurar entre os Cadastros o seu cadastro(Sim ou Não): ");
		scanf("%s", check);
		if(strcmp(check, "Sim")==0 ||strcmp(check, "sim")==0 || strcmp(check, "S")==0 || strcmp(check, "s")==0){
			printf("\nQual é o codigo que deseja buscar: ");
			scanf("%s", cliente[0].pesquisa);
		
			for(int i=0;i<MAX_cliente;i++){
				if(strcmp(cliente[i].codigo, cliente[0].pesquisa)==0){
					numercao_de_pesquisa = i; 
				}
			}
			system("Cls");
			printf("\n\n\t\t-----------------");
			for(int i=0;i<=Contador_ch_Nome[numercao_de_pesquisa];i++){
				printf("-");
			}	
			printf("\n\t\tNome do Cliente: %s\n", cliente[numercao_de_pesquisa].nome);
			printf("\n\t\t-----------------");
			for(int i=0;i<=Contador_ch_Nome[numercao_de_pesquisa];i++){
				printf("-");
			}
			printf("\n");
		
			printf("\n\t\tPeso do Cliente: %.2f\n", cliente[numercao_de_pesquisa].peso);
		
			printf("\n\t\t-----------------");
			for(int i=0;i<=Contador_ch_Nome[numercao_de_pesquisa];i++){
				printf("-");
			}
			printf("\n");
		
			printf("\n\t\tAltura do Cliente: %.2f\n", cliente[numercao_de_pesquisa].altura);
			printf("\n\t\t-----------------");
			for(int i=0;i<=Contador_ch_Nome[numercao_de_pesquisa];i++){
				printf("-");
			}
			printf("\n");
		
			printf("\n\t\tIdade do Cliente: %d\n", cliente[numercao_de_pesquisa].idade);
			printf("\n\t\t-----------------");
			for(int i=0;i<=Contador_ch_Nome[numercao_de_pesquisa];i++){
				printf("-");
			}
			printf("\n");
			
			printf("\n\t\tA Modalidade escolida é: %s", cliente[numercao_de_pesquisa].identifico);
			printf("\n\t\t-----------------");
			for(int i=0;i<=Contador_ch_Nome[numercao_de_pesquisa];i++){
				printf("-");
			}
			printf("\n");
	
		}else{
			printf("\n\n\t\tEntendo......\n\n");
			exit(0);
		}
	

	}
	return 0;
}
