 #include <stdio.h>
 #define TAM 50
 
 int main()
 {
 
    char nome[TAM];
    char endereco[TAM];
    char telefone[TAM];
    char cpf[TAM];
    char profissao[TAM];
    
    char *p1 =&nome[0];
    char *p2 =&endereco[0];
    char *p3 =&telefone[0];
    char *p4 =&cpf[0];
    char *p5 =&profissao[0];
    
    FILE *fp;
    
    fp = fopen ("\CADASTRO.txt", "w");
    if (fp == NULL) {
       printf ("Houve um erro ao abrir o arquivo.\n");
       return 1;
    }
    
    printf("Informe nome: ");
    fgets(p1, TAM, stdin);
    
    printf("Informe endereco: ");
    fgets(p2, TAM, stdin);
    
    printf("Informe telefone: ");
    fgets(p3, TAM, stdin);
    
    printf("Informe cpf: ");
    fgets(p4, TAM, stdin);
    
    printf("Informe profissao: ");
    fgets(p5, TAM, stdin);
    
 
    printf ("Arquivo CADASTRO criado com sucesso.\n");
    fprintf(fp, "%s\n%s\n%s\n%s\n%s\n", p1,p2,p3,p4,p5);
    
    fclose (fp);
    fflush(stdin);
    getchar();
    return 0;;
    
 }
