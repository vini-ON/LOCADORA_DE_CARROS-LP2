#include "clientes.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 100
#define TAM_CPF 15
#define TAM_IDADE 4

typedef struct Cliente
{
    int id;
    char nome[TAM_NOME];
    char cpf[TAM_CPF];
    char idade[TAM_IDADE];

    struct Cliente *prox;

} Cliente;

void limpar_buffer(){

    int c;
 while ((c = getchar()) != '\n' && c != EOF);

}



void cadastrar_cliente(clientes c){



 printf("DIgite seu nome:");
 fgets(c[].nome,TAM_NOME,stdin);

    if(strchr(c.nome,'\n') != NULL){ // strchr serve para verificar se existe o caractere \n na string, se existir ele retorna o endereço de memória do caractere, caso contrário retorna NULL
        c.nome[strcspn(c.nome,"\n")] = '\0'; //strcspn serve para realizar a busca de um caractere em uma string, nesse caso ele vai buscar o \n e retornar o índice do caractere, e com isso podemos substituir o \n por \0 para finalizar a string corretamente
        limpar_buffer(); 
    }else{
        limpar_buffer();
    }

    printf("Digite seu CPF:");
    fgets(c[].cpf,TAM_CPF,stdin);

    if(strchr(c.cpf,'\n')!= NULL){
      c.cpf[strcspn(c.cpf,'\n')] = '\0';
      limpar_buffer();
    }else{
        limpar_buffer();
    }   

    printf("Digite sua idade:");
    fgets(c[].idade,TAM_IDADE,stdin);
    

    if(c[].idade == '\0' || c[].idade <= 0){
        printf("Idade inválida. Por favor, digite novamente.\n");
        printf("Digite sua idade:");
        fgets(c[].idade,TAM_IDADE,stdin);
    }


    if(strchr(c.idade,'\n')!= NULL){
      c.idade[strcspn(c.idade,'\n')] = '\0';
      limpar_buffer();
    }else{
        limpar_buffer();
    }

    


}
