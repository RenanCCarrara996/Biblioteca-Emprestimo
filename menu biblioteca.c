#include <stdio.h>
#include <locale.h>

int main(){
    int menu, dia;
    char cod[10], cpf[20], next;

    setlocale(LC_ALL, "Portuguese");

    printf("= MENU DA BIBLIOTECA =\n");

    do {

        printf("\n[1] Livros dispon�veis\n[2] Contato\n[3] Informa��es de Acesso\n[4] Documentos necess�rios para cadastro\n[5] Empr�stimo de livros\n\nDigite aqui: ");
        scanf("%i", &menu);

        switch (menu)
        {
            case 1:
                printf("\nLivros Dispon�veis: \n\n- O C�digo Da Vinci [A11F3]; \n- � Assim Que Acaba [A11D4]; \n- Verity [B921L7]; \n- Duna [C439E2].\n");
                break;
            case 2:
                printf("\nContato da Biblioteca: \n\n- Telefone: 99887-7665\n");
                break;
            case 3:
                printf("\nInforma��es de Acesso � Biblioteca:\n\n- Hor�rio de funcionamento: \nDe Seg - Sex das 7h30 �s 18h30;\nDe S�b das 9h �s 14h30;\n");
                break;
            case 4:
                printf("\nDocumentos para cadastro: \n\n- Identidade;\n- CPF;\n- Endere�o;\n");
                break;
            case 5:
                printf("\nEmpr�stimo de livros: \n\n");

                printf("Digite o CPF do Cliente: ");
                scanf("%s", &cpf);
                printf("Digite o c�digo do livro: ");
                scanf("%s", &cod);

                printf("Empr�stimo realizado com sucesso.\n Cliente: %s;\n C�digo do livro: %s;\n Tempo de empr�stimo: 5 dias. \n", cpf, cod);
                break;
            default:
                printf("Requisi��o inv�lida.");
        }

        printf("\n\nVoltar ao In�cio? (s/n): ");
        scanf(" %c", &next);

    } while (next == 's' || next == 'S');

    printf("Programa finalizado.\n");



    return 0;
}
