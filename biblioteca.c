#include <stdio.h>
#include <locale.h>

int main(){
    int tipo, qnt;

    setlocale(LC_ALL, "portuguese");

    printf("Que tipo de usu�rio voc� �? \n [1] Aluno \n [2] Professor \n [3] Pesquisador \n [4] Visitante \n\nDigite aqui: ");
    scanf("%i", &tipo);
    printf("Informe a quantidade de livros para empr�stimo: ");
    scanf("%i", &qnt);

    switch (tipo){
        case 1:
            printf("Voc� pode realizar o empr�stimo de at� 3 livros.\n\n");
            if (qnt <=3){
                printf("Empr�stimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empr�stimos excedida.");
            }
            break;

        case 2:
            printf("Voc� pode realizar o empr�stimo de at� 5 livros.\n\n");
            if (qnt <=5){
                printf("Empr�stimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empr�stimos excedida.");
            }
            break;

        case 3:
            printf("Voc� pode realizar o empr�stimo de at� 10 livros.\n\n");
            if (qnt <=10){
                printf("Empr�stimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empr�stimos excedida.");
            }
            break;

        case 4:
            printf("Voc� pode realizar o empr�stimo de apenas 1 livro.\n\n");
            if (qnt <= 1){
                printf("Empr�stimo realizado com sucesso.");
            }
            else{
                printf("Quantidade de empr�stimos excedida.");
            }
            break;
    }
    return 0;
}
