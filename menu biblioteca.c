#include <stdio.h>
#include <locale.h>

int main(){
    int menu, dia;
    char cod[10], cpf[20], next;

    setlocale(LC_ALL, "Portuguese");

    printf("= MENU DA BIBLIOTECA =\n");

    do {

        printf("\n[1] Livros disponíveis\n[2] Contato\n[3] Informações de Acesso\n[4] Documentos necessários para cadastro\n[5] Empréstimo de livros\n\nDigite aqui: ");
        scanf("%i", &menu);

        switch (menu)
        {
            case 1:
                printf("\nLivros Disponíveis: \n\n- O Código Da Vinci [A11F3]; \n- É Assim Que Acaba [A11D4]; \n- Verity [B921L7]; \n- Duna [C439E2].\n");
                break;
            case 2:
                printf("\nContato da Biblioteca: \n\n- Telefone: 99887-7665\n");
                break;
            case 3:
                printf("\nInformações de Acesso à Biblioteca:\n\n- Horário de funcionamento: \nDe Seg - Sex das 7h30 às 18h30;\nDe Sáb das 9h às 14h30;\n");
                break;
            case 4:
                printf("\nDocumentos para cadastro: \n\n- Identidade;\n- CPF;\n- Endereço;\n");
                break;
            case 5:
                printf("\nEmpréstimo de livros: \n\n");

                printf("Digite o CPF do Cliente: ");
                scanf("%s", &cpf);
                printf("Digite o código do livro: ");
                scanf("%s", &cod);

                printf("Empréstimo realizado com sucesso.\n Cliente: %s;\n Código do livro: %s;\n Tempo de empréstimo: 5 dias. \n", cpf, cod);
                break;
            default:
                printf("Requisição inválida.");
        }

        printf("\n\nVoltar ao Início? (s/n): ");
        scanf(" %c", &next);

    } while (next == 's' || next == 'S');

    printf("Programa finalizado.\n");



    return 0;
}
