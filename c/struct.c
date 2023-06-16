#include<stdio.h>

struct aluno{ 
    char nome[20];
    char telefone[20];
    char cpf[11];
    double todoDinheiroDisponivel;  
    int idade;
};
struct Professor{
    char nome[20];
    char telefone[20];
    char cpf[11];
    double todoDinheiroDisponivelpMim;
};

int main(){

    struct aluno aluno1;
    struct Professor professor1;

    int vetor[50];
    struct aluno listaAlunosVetor[4];
    struct aluno listaAlunosMatriz[2][2];

    printf("Digite o nome do aluno: ");
    scanf("%s", &aluno1.nome);
    printf("Digite o cpf: ");
    fgets(aluno1.cpf, 11, stdin);
    printf("Digite o telefone: ");
    gets(aluno1.telefone);
    printf("Digite o valor disponivel: ");
    scanf("%lf", &aluno1.todoDinheiroDisponivel);


    for(i=0;i<50;i++){
        printf("Digite o nome do aluno: ");
        fgets(listaAlunos[i].nome, 20, stdin);
        printf("Digite a idade: ");
        scanf("%d", &listaAlunos[i].idade);
    
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o nome do alino: ");
            fgets(listaAlunosMatriz[i[j].nome];)
        }
    }
}
