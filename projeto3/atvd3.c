#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Usuario {
    int id;
    char nomeCompleto[75];
    char email[75];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

struct Usuario* usuarios = NULL;
int totalUsuarios = 0;
int capacidadeTotal = 0;

int gerarID() {
    return rand() % 10000 + 1;
}

bool validarEmail(const char* email) {
    const char* caractere = strchr(email, '@');
    return (caractere != NULL);
}

bool validarSexo(const char* sexo) {
    return (strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "Masculino") == 0);
}

bool validarAltura(double altura) {
    return (altura >= 1.0 && altura <= 2.0);
}

bool validarVacina(int vacina) {
    return (vacina == 0 || vacina == 1);
}

void incluirUsuario() {
    struct Usuario maisUmUsuario;

    maisUmUsuario.id = gerarID();

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", maisUmUsuario.nomeCompleto);

    printf("Digite o email: ");
    scanf(" %[^\n]", maisUmUsuario.email);
    while (!validarEmail(maisUmUsuario.email)) {
        printf("Email inválido. Digite novamente: ");
        scanf(" %[^\n]", maisUmUsuario.email);
    }

    printf("Digite o sexo (Feminino ou Masculino): ");
    scanf(" %[^\n]", maisUmUsuario.sexo);
    while (!validarSexo(maisUmUsuario.sexo)) {
        printf("Sexo inválido. Digite novamente: ");
        scanf(" %[^\n]", maisUmUsuario.sexo);
    }

    printf("Digite o endereço: ");
    scanf(" %[^\n]", maisUmUsuario.endereco);

    printf("Digite a altura (entre 1 e 2 metros): ");
    scanf("%lf", &maisUmUsuario.altura);
    while (!validarAltura(maisUmUsuario.altura)) {
        printf("Altura inválida. Digite novamente: ");
        scanf("%lf", &maisUmUsuario.altura);
    }

    printf("Digite se tomou a vacina (1 para sim, 0 para não): ");
    scanf("%d", &maisUmUsuario.vacina);
    while (!validarVacina(maisUmUsuario.vacina)) {
        printf("Valor inválido. Digite novamente (1 para sim, 0 para não): ");
        scanf("%d", &maisUmUsuario.vacina);
    }

    if (totalUsuarios == capacidadeTotal) {
        capacidadeTotal += 10;
        struct Usuario* novaLista = (struct Usuario*)malloc(capacidadeTotal * sizeof(struct Usuario));
        if (novaLista == NULL) {
            printf("Erro ao alocar memória.\n");
            return;
        }
        usuarios = novaLista;
    }

    usuarios[totalUsuarios] = maisUmUsuario;
    totalUsuarios++;

    printf("Usuário cadastrado com sucesso!\n");
}

void editarUsuario() {
    int id;
    printf("Digite o ID do usuário a ser editado: ");
    scanf("%d", &id);

    int i;
    for (i = 0; i < totalUsuarios; i++) {
        if (usuarios[i].id == id) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]", usuarios[i].nomeCompleto);

            printf("Digite o novo email: ");
            scanf(" %[^\n]", usuarios[i].email);
            while (!validarEmail(usuarios[i].email)) {
                printf("Email inválido. Digite novamente: ");
                scanf(" %[^\n]", usuarios[i].email);
            }

            printf("Digite o novo sexo (Feminino, Masculino ou Indiferente): ");
            scanf(" %[^\n]", usuarios[i].sexo);
            while (!validarSexo(usuarios[i].sexo)) {
                printf("Sexo inválido. Digite novamente: ");
                scanf(" %[^\n]", usuarios[i].sexo);
            }

            printf("Digite o novo endereço: ");
            scanf(" %[^\n]", usuarios[i].endereco);

            printf("Digite a nova altura (entre 1 e 2 metros): ");
            scanf("%lf", &usuarios[i].altura);
            while (!validarAltura(usuarios[i].altura)) {
                printf("Altura inválida. Digite novamente: ");
                scanf("%lf", &usuarios[i].altura);
            }

            printf("Digite se tomou a vacina (1 para sim, 0 para não): ");
            scanf("%d", &usuarios[i].vacina);
            while (!validarVacina(usuarios[i].vacina)) {
                printf("Valor inválido. Digite novamente (1 para sim, 0 para não): ");
                scanf("%d", &usuarios[i].vacina);
            }

            printf("Usuário editado com sucesso!\n");
            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void excluirUsuario() {
    int id;
    printf("Digite o ID do usuário a ser excluído: ");
    scanf("%d", &id);

    int i;
    for (i = 0; i < totalUsuarios; i++) {
        if (usuarios[i].id == id) {
            int j;
            for (j = i; j < totalUsuarios - 1; j++) {
                usuarios[j] = usuarios[j + 1];
            }
            totalUsuarios--;
            printf("Usuário excluído com sucesso!\n");
            return;
        }
    }

    printf("Usuário não encontrado.\n");
}

void imprimirUsuarios() {
    int i;
    for (i = 0; i < totalUsuarios; i++) {
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome completo: %s\n", usuarios[i].nomeCompleto);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereço: %s\n", usuarios[i].endereco);
        printf("Altura: %.2f\n", usuarios[i].altura);
        printf("Vacina: %s\n", (usuarios[i].vacina == 1) ? "Sim" : "Não");
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    char opcao;
    do {
        printf("===== MENU =====\n");
        printf("1. Incluir usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Imprimir usuários\n");
        printf("0. Sair\n");
        printf("Digite sua opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario();
                break;
            case '2':
                editarUsuario();
                break;
            case '3':
                excluirUsuario();
                break;
            case '4':
                imprimirUsuarios();
                break;
            case '0':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Digite novamente.\n");
                break;
        }
        printf("\n");
    } while (opcao != '0');

    free(usuarios);
    return 0;
}
