#include <stdio.h>
#include <string.h>
#include <locale.h>

#define maxUsers 1000
#define TamEmail 50
#define TamNome 50

struct User {
    char email[TamEmail];
    char name[TamNome];
};

struct User users[maxUsers];
int numUsers = 0;

void addUser() {
    if (numUsers >= maxUsers) {
        printf("Número máximo de usuários atingido.\n");
        return;
    }

    printf("Digite o email do usuário: ");
    scanf("%s", users[numUsers].email);

    printf("Digite o nome do usuário: ");
    scanf("%s", users[numUsers].name);

    numUsers++;
    printf("Usuário adicionado com sucesso.\n");
}

void editUser() {
    char email[TamEmail];
    printf("Digite o email do usuário que deseja editar: ");
    scanf("%s", email);

    int i;
    for (i = 0; i < numUsers; i++) {
        if (strcmp(users[i].email, email) == 0) {
            printf("Digite o novo email do usuário: ");
            scanf("%s", users[i].email);

            printf("Digite o novo nome do usuário: ");
            scanf("%s", users[i].name);

            printf("Usuário editado com sucesso.\n");
            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void deletarUser() {
    char email[TamEmail];
    printf("Digite o email do usuário que deseja excluir: ");
    scanf("%s", email);

    int i;
    for (i = 0; i < numUsers; i++) {
        if (strcmp(users[i].email, email) == 0) {
            memmove(&users[i], &users[i + 1], (numUsers - i - 1) * sizeof(struct User));
            numUsers--;

            printf("Usuário excluído com sucesso.\n");
            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void searchUser() {
    char email[TamEmail];
    printf("Digite o email do usuário que deseja buscar: ");
    scanf("%s", email);

    int i;
    for (i = 0; i < numUsers; i++) {
        if (strcmp(users[i].email, email) == 0) {
            printf("Usuário encontrado:\n");
            printf("Email: %s\n", users[i].email);
            printf("Nome: %s\n", users[i].name);
            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void printAllUsers() {
    int i;
    for (i = 0; i < numUsers; i++) {
        printf("Usuário %d:\n", i + 1);
        printf("Email: %s\n", users[i].email);
        printf("Nome: %s\n", users[i].name);
        printf("\n");
    }
}

void backupUsers() {
    FILE *file = fopen("backup.txt", "w");
    if (file == NULL) {
        printf("Erro ao criar o arquivo de backup.\n");
        return;
    }

    int i;
    for (i = 0; i < numUsers; i++) {
        fprintf(file, "%s,%s\n", users[i].email, users[i].name);
    }

    fclose(file);
    printf("Backup realizado com sucesso.\n");
}

void restoreUsers() {
    FILE *file = fopen("backup.txt", "r");
    if (file == NULL) {
        printf("Arquivo de backup não encontrado.\n");
        return;
    }

    numUsers = 0;
    while (fscanf(file, "%[^,],%s\n", users[numUsers].email, users[numUsers].name) != EOF) {
        numUsers++;
    }

    fclose(file);
    printf("Restauração dos dados concluída.\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    char choice;

    while (1) {
        printf("Selecione uma opção:\n");
        printf("1. Incluir usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Buscar usuário por email\n");
        printf("5. Imprimir todos os usuários\n");
        printf("6. Fazer backup dos usuários\n");
        printf("7. Restaurar dados\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                addUser();
                break;
            case '2':
                editUser();
                break;
            case '3':
                deletarUser();
                break;
            case '4':
                searchUser();
                break;
            case '5':
                printAllUsers();
                break;
            case '6':
                backupUsers();
                break;
            case '7':
                restoreUsers();
                break;
            case '0':
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}
