
#include<stdio.h>


    float media;

    float calculaMedia (float nota[]) {
    media = ((nota[0] + nota[1])/2);
    return media;
    }


int main() {
    float mediaAluno, somaMedias;
    float nota[2];
    int i = 0, aprovados = 0, reprovados = 0, exames = 0;

    for(i=0; i < 6; i++) {
    printf("\nDigite a primeira nota: ");
    scanf("%f%*c", &nota[0]);

    printf("Digite a segunda nota: ");
    scanf("%f%*c", &nota[1]);

         mediaAluno = calculaMedia(nota);


        if (mediaAluno <= 3) {
            reprovados++;
            printf("Aluno reprovado: %f\n");

        } else if ((mediaAluno > 3) && (mediaAluno < 7) ) {
           exames++;
           printf("Aluno de exame: %f\n", mediaAluno);

        }
        else {
           aprovados++;
           printf("Aluno aprovado: %f\n", mediaAluno);
        somaMedias = somaMedias + mediaAluno;
        }

    }
    printf("\nTotal de alunos Aprovados: %d", aprovados);
    printf("\nTotal de alunos em Exames: %d", exames);
    printf("\nTotal de alunos Reprovados: %d", reprovados);
    printf("\nMédia da clase:  %f", somaMedias);



    getchar();
    return 0;
}
