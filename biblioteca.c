#include <stdio.h>
#include <locale.h>

int main(){
    int tipo, qnt;

    setlocale(LC_ALL, "portuguese");

    printf("Que tipo de usuário você é? \n [1] Aluno \n [2] Professor \n [3] Pesquisador \n [4] Visitante \n\nDigite aqui: ");
    scanf("%i", &tipo);
    printf("Informe a quantidade de livros para empréstimo: ");
    scanf("%i", &qnt);

    switch (tipo){
        case 1:
            printf("Você pode realizar o empréstimo de até 3 livros.\n\n");
            if (qnt <=3){
                printf("Empréstimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empréstimos excedida.");
            }
            break;

        case 2:
            printf("Você pode realizar o empréstimo de até 5 livros.\n\n");
            if (qnt <=5){
                printf("Empréstimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empréstimos excedida.");
            }
            break;

        case 3:
            printf("Você pode realizar o empréstimo de até 10 livros.\n\n");
            if (qnt <=10){
                printf("Empréstimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empréstimos excedida.");
            }
            break;

        case 4:
            printf("Você pode realizar o empréstimo de apenas 1 livro.\n\n");
            if (qnt <= 1){
                printf("Empréstimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empréstimos excedida.");
            }
            break;
    }
    return 0;
}
