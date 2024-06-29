#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Estrutura do funcionário
struct emp {
    char nome[50];
    float salario;
    int idade;
    char cargo;
};
struct emp e;

// Tamanho da estrutura
long int tamanho = sizeof(e);

// Nas coordenadas iniciais
// será 0, 0
COORD coordenada = {0, 0};

// Função para definir as
// coordenadas
void gotoxy(int x, int y)
{
    coordenada.X = x;
    coordenada.Y = y;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE),
        coordenada);
}

FILE *fp, *ft;

// Função para adicionar os registros
void adicionarRegistro()
{
    system("cls");
    fseek(fp, 0, SEEK_END);
    char outro = 's';

    while (outro == 's') {
        printf("\nDigite o Nome : ");
        gets(e.nome);
       fgets(e.nome, sizeof(e.nome), stdin);
        e.nome[strcspn(e.nome, "\n")] = '\0';  // Remove newline character

        printf("\nDigite a Idade : ");
        scanf("%d", &e.idade);

        printf("\nDigite o Salário : ");
        scanf("%f", &e.salario);

        printf("\nDigite o Cargo : ");
        scanf("%s", &e.cargo);

        fwrite(&e, tamanho, 1, fp);

        printf("\nDeseja adicionar outro"
               " registro (S/N) : ");
        fflush(stdin);

        scanf("%c", &outro);
    }
}

// Função para deletar os registros
void deletarRegistro()
{
    system("cls");
    char nomeFuncionario[50];
    char outro = 's';

    while (outro == 's') {
        printf("\nDigite o nome do funcionário "
               "para deletar : ");
        scanf("%s", nomeFuncionario);

        ft = fopen("temporario.txt", "wb");
        rewind(fp);

        while (fread(&e, tamanho,
                     1, fp) == 1) {
            if (strcmp(e.nome,
                       nomeFuncionario)
                != 0)
                fwrite(&e, tamanho, 1, ft);
        }

        fclose(fp);
        fclose(ft);
        remove("dados.txt");
        rename("temporario.txt", "dados.txt");
        fp = fopen("dados.txt", "rb+");

        printf("\nDeseja deletar outro"
               " registro (S/N) :");
        fflush(stdin);
        scanf("%c", &outro);
    }
}

// Função para exibir os registros
void exibirRegistros()
{
    system("cls");

    // Define o ponteiro para o início
    // do arquivo
    rewind(fp);

    printf("\n========================="
           "==========================="
           "======");
    printf("\nNOME\t\tIDADE\t\tSALÁRIO\t\t"
           "\tID\n",
           e.nome, e.idade,
           e.salario, e.cargo);
    printf("==========================="
           "==========================="
           "====\n");

    while (fread(&e, tamanho, 1, fp) == 1)
        printf("\n%s\t\t%d\t\t%.2f\t%10d",
               e.nome, e.idade, e.salario, e.cargo);

    printf("\n\n\n\t");
    system("pause");
}

// Função para modificar o registro
void modificarRegistro()
{
    system("cls");
    char nomeFuncionario[50];
    char outro = 's';

    while (outro == 's') {
        printf("\nDigite o nome do funcionário"
               " para modificar : ");
        scanf("%s", nomeFuncionario);

        rewind(fp);

        // Enquanto o arquivo estiver aberto
        while (fread(&e, tamanho, 1, fp) == 1) {
            // Compara o nome do funcionário
            // com o nome informado
            if (strcmp(e.nome, nomeFuncionario) == 0) {
                printf("\nDigite o novo nome:");
                scanf("%s", e.nome);
                printf("\nDigite a nova idade :");
                scanf("%d", &e.idade);
                printf("\nDigite o novo salário :");
                scanf("%f", &e.salario);
                printf("\nDigite o novo ID do Funcionário :");
                scanf("%d", &e.cargo);

                fseek(fp, -tamanho, SEEK_CUR);
                fwrite(&e, tamanho, 1, fp);
                break;
            }
        }

        // Pergunta se deseja modificar outro registro
        printf("\nDeseja modificar outro"
               " registro (S/N) :");
        fflush(stdin);
        scanf("%c", &outro);
    }
}

// Função para ler registros do arquivo
void lerRegistros(const char *nomeArquivo)
{
    fp = fopen(nomeArquivo, "rb+");
    if (fp == NULL) {
        printf("\nNão foi possível abrir o arquivo...");
        exit(1);
    }

    system("cls");
    rewind(fp); // Define o ponteiro do arquivo para o início

    printf("\n========================="
           "==========================="
           "======");
    printf("\nNOME\t\tIDADE\t\tSALÁRIO\t\t"
           "\tCARGO\n",
           e.nome, e.idade,
           e.salario, e.cargo);
    printf("==========================="
           "==========================="
           "====\n");

    // Lê cada registro do arquivo e exibe
    while (fread(&e, tamanho, 1, fp) == 1)
        printf("\n%s\t\t%d\t\t%.2f\t%10d",
               e.nome, e.idade, e.salario, e.cargo);

    printf("\n\n\n\t");
    system("pause");
}

// Função principal
int main()
{
    int escolha;

    char nomeArquivo[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo
    lerRegistros(nomeArquivo);

    while (1) {
        // Limpa o console e pede ao
        // usuário a entrada
        system("cls");
        gotoxy(30, 10);
        printf("\n1. ADICIONAR REGISTRO\n");
        gotoxy(30, 12);
        printf("\n2. DELETAR REGISTRO\n");
        gotoxy(30, 14);
        printf("\n3. EXIBIR REGISTROS\n");
        gotoxy(30, 16);
        printf("\n4. MODIFICAR REGISTRO\n");
        gotoxy(30, 18);
        printf("\n5. SAIR\n");
        gotoxy(30, 20);
        printf("\nDIGITE SUA ESCOLHA...\n");
        fflush(stdin);
        scanf("%d", &escolha);

        // Switch Case
        switch (escolha) {
        case 1:

            // Adiciona os registros
            adicionarRegistro();
            break;

        case 2:

            // Deleta os registros
            deletarRegistro();
            break;

        case 3:

            // Exibe os registros
            exibirRegistros();
            break;

        case 4:

            // Modifica os registros
            modificarRegistro();
            break;

        case 5:
            fclose(fp);
            exit(0);
            break;

        default:
            printf("\nESCOLHA INVÁLIDA...\n");
        }
    }

    return 0;
}
