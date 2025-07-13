#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <termios.h>

#define MAX_CONTATOS 100

typedef struct
{
    char nome[50];
    char telefone[20];
    char email[50];
} Contato;

char apresentarMenu();
void adicionarContato(Contato *agenda, int *totalContatos, Contato novoContato);
void listarTodosOsContatos(Contato *agenda, int totalContatos);
Contato buscarContatoPorNome(char *nome, Contato contatos[]);
void removerContatoPorNome(char *nome, Contato contatos[]);
void salvarContatosEmArquivo(char *nomeArquivo, Contato contatos[]);

char getch();
void strip(char *text);

int main()
{
    Contato agenda[MAX_CONTATOS];
    int totalContatos = 0;

    while (true)
    {
        char opcao = apresentarMenu();

        printf("Opção selecionada: %c\n", opcao);

        switch (opcao)
        {
        case '1':
            printf("Adicionando um novo contato...\n");
            Contato contato;
            printf("Nome: ");
            fgets(contato.nome, sizeof(contato.nome), stdin);
            strip(contato.nome);
            printf("Telefone: ");
            fgets(contato.telefone, sizeof(contato.telefone), stdin);
            strip(contato.telefone);
            printf("E-mail: ");
            fgets(contato.email, sizeof(contato.email), stdin);
            strip(contato.email);
            adicionarContato(agenda, &totalContatos, contato);

            break;

        case '2':
            printf("Listando todos os contatos...\n");
            listarTodosOsContatos(agenda, totalContatos);
            break;

        case '3':
            printf("Buscando um contato por nome...\n");
            break;

        case '4':
            printf("Removendo um contato por nome...\n");
            break;

        case '5':
            printf("Salvando dados em um arquivo...\n");
            break;

        case '6':
            printf("Carregando dados de um arquivo...\n");
            break;

        case 'Q':
        case 'q':
            printf("Finalizando Agenda...\n");
            sleep(1);
            return 0;

        default:
            break;
        }
    }
}

char apresentarMenu()
{
    while (true)
    {
        system("clear");
        printf("========== Agenda ==========\n");
        printf("1. Adicionar um novo contato\n");
        printf("2. Listar todos os contatos\n");
        printf("3. Buscar um contato por nome\n");
        printf("4. Remover um contato por nome\n");
        printf("5. Salvar dados em um arquivo\n");
        printf("6. Carregar dados em um arquivo\n");
        printf("Q. Sair da agenda\n");

        printf("\n\nDigite a sua opção: \n");

        char opcao = getch();
        fflush(stdin);

        switch (opcao)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case 'Q':
        case 'q':
            return opcao;

        default:
            printf("Opcao inválida.\n");
            sleep(1);
        }
    }
}

void adicionarContato(Contato *agenda, int *totalContatos, Contato novoContato)
{
    agenda[*totalContatos] = novoContato;
    (*totalContatos)++;
}

void listarTodosOsContatos(Contato *agenda, int totalContatos)
{
    for (int i = 0; i < totalContatos; i++)
    {
        Contato contato = agenda[i];
        printf("Nome: %s\n", contato.nome);
        printf("Telefone: %s\n", contato.telefone);
        printf("Email: %s\n", contato.email);
        printf("\n");
    }
    printf("Pressione qualquer tecla para prosseguir.\n");

    getch();
}
Contato buscarContatoPorNome(char *nome, Contato contatos[]) {}
void removerContatoPorNome(char *nome, Contato contatos[]) {}
void salvarContatosEmArquivo(char *nomeArquivo, Contato contatos[]) {}

char getch()
{
    struct termios old, new;
    char c;

    // Pega as configurações atuais do terminal
    tcgetattr(STDIN_FILENO, &old);
    new = old;

    // Desativa o modo de espera por Enter (modo canônico) e eco na tela
    new.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new);

    // Lê o caractere imediatamente
    read(STDIN_FILENO, &c, 1);

    // Restaura as configurações antigas
    tcsetattr(STDIN_FILENO, TCSANOW, &old);

    return c;
}

void strip(char *text)
{
    text[strcspn(text, "\n")] = '\0';
}