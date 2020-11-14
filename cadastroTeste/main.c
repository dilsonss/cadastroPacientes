#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    FILE *cfPtr;

    int opcao,opcao1,opcao2,opcao3,opcao4,i,qtd;

    struct paciente
    {
        char nome[100],cpf[30],telefone[15],rua[50],
        nrua[4],bairro[50],cidade[50],estado[50],cep[20];
    }
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
        char usuario[100]; //Variável que guarda o nome do usuário
        setlocale(LC_ALL,"");
        system("cls");
        printf("Nome do Usuário: ");
        fflush(stdin);
        scanf("%[^\n]s",usuario);
        printf("Digite Sua Senha: ");
        scanf("%d",&opcao3);

        switch(opcao3)
        {
        case 123456:
            while(opcao != 6)
            {
                while(opcao2 != 1)
                {
                    system("color f4");
                    system("cls");

                    printf("---------------------------------------\n");
                    printf("\t Seja Bem Vindo(a) Atendente %s\n",usuario);
                    printf("---------------------------------------\n");
                    printf("1- CADASTRAR PACIÊNTE\n ");
                    printf("2- EXIBIR DADOS DO PACIÊNTE\n ");
                    printf("3- INFORMAÇÕES DO SISTEMA\n ");
                    printf("4- SAIR\n ");
                    printf("---------------------------------------\n\n");
                    printf("\nESCOLHA UMA OPÇÃO: ");
                    scanf("%d",&opcao);

                    switch(opcao)
                    {
                    case 1:
                        system("cls");
                        printf("\n\n QUANTOS CADASTROS DESEJA FAZER: ");
                        scanf("%d",&qtd);

                    for (i=1;i<=qtd;i++)
                        {

                            int ano, morbidade, idade, anoatual = 2020;



                            cfPtr = fopen("pacientes.txt","w");
                            system("cls");
                            printf("\n\n\t\t\t  INICIANDO CADASTRO %d\n",i);
                            printf("\t\t\t  ----------------\n\n");
                            printf("\nDigite o ano de nascimento do paciente: ");
                            scanf("%d",&ano);
                            idade = anoatual - ano;
                            printf("O PACIENTE TEM %d",idade, " ANOS");

                            if(idade >= 65 && morbidade != ""){
                            printf("\n NOME DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].nome);
                            printf("\n CPF DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cpf);
                            printf("\n TELEFONE DO PACIENTE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].telefone);
                            printf("\n CEP: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cep);
                            printf("\n NOME DA RUA: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].rua);
                            printf("\n NÚMERO: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].nrua);
                            printf("\n BAIRRO: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].bairro);
                            printf("\n CIDADE: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].cidade);
                            printf("\n ESTADO: ");
                            fflush(stdin);
                            scanf("%[^\n]s",CA[i].estado);

                            while(!feof(stdin) && i<=qtd){
                            fprintf(cfPtr, "\n NOME DO PACIENTE: %s\n CPF: %s\n TELEFONE: %s\n CEP: %s\n ", CA[i].nome, CA[i].cpf,CA[i].telefone,CA[i].cep );
                            printf("PRESSIONE CTRL+Z PARA ENCERRAR ");
                            scanf("%s%s%s",CA[i].estado,CA[i].cidade,&CA[i].bairro);
                            }


                            fclose(cfPtr);
                            printf("\n\n\t\t");
                            system("pause");
                            system("cls");
                            }
                            else{
                                printf("O PACIENTE NÃO FAZ PARTE DO GRUPO DE RISCO.");
                                system("pause");
                            }

                        }
                        break;

                    case 2:
                    system("cls");
                    for (i=1;i<=qtd;i++)
                        {
                            system("cls");
                            printf("\n\n\t\t EXIBINDO CADASTRO DO PACIÊNTE\n\n");
                            printf("\n NOME DO PACIÊNTE: %s\n",CA[i].nome);
                            printf("\n CPF DO PACIÊNTE: %s\n",CA[i].cpf);
                            printf("\n TELEFONE DO PACIÊNTE: %s\n",CA[i].telefone);
                            printf("\n CEP: %s\n",CA[i].cep);
                            printf("\n NOME DA RUA: %s\n",CA[i].rua);
                            printf("\n NÚMERO: %s\n",CA[i].nrua);
                            printf("\n BAIRRO: %s\n",CA[i].bairro);
                            printf("\n CIDADE: %s\n",CA[i].cidade);
                            printf("\n ESTADO: %s\n",CA[i].estado);
                            system("pause");
                        }
                         break;

                    case 3:
                    system("cls");
                    printf("TRABALHO REALIZADO POR: \n\n");
                    printf("Valdeilson Dos Santos Silva RA: \n");
                    system("pause");
                    break;

                    case 4:
                    system("cls");
                    printf("\n DESEJA SAIR DO SISTEMA? %s\n",usuario);
                    printf(" 1-SIM\n 2-NÃO");
                    printf("\n\n");
                    scanf("%d",&opcao2);

                    switch(opcao2)
                        {
                        case 1:
                            system("cls");
                            printf("\n\n ATÉ MAIS %s\n",usuario);
                            system("pause");
                            return(0);
                            break;
                        }
                    }
                }
                break;
            }
        }

    system("pause");
return(0);
}




