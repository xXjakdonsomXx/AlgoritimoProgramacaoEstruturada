#include <stdio.h>
#include <string.h>

#define MAX_USERS 1000
#define MAX_EMAIL_LENGTH 100

typedef struct {
    char email[MAX_EMAIL_LENGTH];
    // Outros campos de dados do usuário
} User;

User users[MAX_USERS];
int numUsers = 0;

void addUser() {
    if (numUsers == MAX_USERS) {
        printf("Limite máximo de usuários alcançado.\n");
        return;
    }

    User newUser;
    printf("Digite o email do usuário: ");
    scanf("%s", newUser.email);
    // Preencha os outros campos de dados do usuário, se necessário

    users[numUsers] = newUser;
    numUsers++;

    printf("Usuário adicionado com sucesso.\n");
}

void editUser() {
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário a ser editado: ");
    scanf("%s", email);

    int found = 0;
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].email, email) == 0) {
            printf("Digite o novo email do usuário: ");
            scanf("%s", users[i].email);
            // Edite os outros campos de dados do usuário, se necessário

            printf("Usuário editado com sucesso.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Usuário não encontrado.\n");
    }
}

void deleteUser() {
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário a ser excluído: ");
    scanf("%s", email);

    int found = 0;
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].email, email) == 0) {
            for (int j = i; j < numUsers - 1; j++) {
                users[j] = users[j + 1];
            }
            numUsers--;

            printf("Usuário excluído com sucesso.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Usuário não encontrado.\n");
    }
}

void searchUser() {
    char email[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário a ser buscado: ");
    scanf("%s", email);

    int found = 0;
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].email, email) == 0) {
            printf("Usuário encontrado:\n");
            printf("Email: %s\n", users[i].email);
            // Imprima outros campos de dados do usuário, se necessário

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Usuário não encontrado.\n");
    }
}

void printUsers() {
    if (numUsers == 0) {
        printf("Nenhum usuário cadastrado.\n");
        return;
    }

    printf("Usuários cadastrados:\n");
    for (int i = 0; i < numUsers; i++) {
        printf("Usuário %d:\n", i + 1);
        printf("Email: %s\n", users[i].email);
    }
}
