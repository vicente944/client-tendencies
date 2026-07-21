#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    FILE *clientes;
    char carac;
    clientes = fopen("clientes.csv", "w"); // Mudar de w para outro tipo de abertura posteriormente

    if(clientes == NULL) {
    printf("Nao foi possivel abrir o arquivo.");
    exit(1);
    }

    fprintf(clientes, "cliente,telefone,email");

    fclose(clientes);
}