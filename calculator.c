#include <stdio.h>
#include <limits.h>


// >>>>>>>>>> Impressões na tela >>>>>>>>>>

void imprimir_cabecalho() {
    printf("---------- EPiC Calculator -----------\n");
    printf("- Uso:                               -\n");
    printf("-      operando1 operacao operando2  -\n");
    printf("-                                    -\n");
    printf("- Operacoes:                         -\n");
    printf("-      +, -, *, /                    -\n");
    printf("-                                    -\n");
    printf("---------- EPiC Calculator -----------\n");
}

void imprimir_entrada() {
    printf("\n");
    printf("[In ] ");
}

void imprimir_saida(int a, char b, int c, int d) {
    printf("[Out] %d %c %d = %d\n", a, b, c, d);
}

void imprimir_erro(int erro) {
    switch (erro) {
        case 1:
            printf("So Long, and Thanks for All the Fish...");
            break;
        case 2:
            printf("Operador desconhecido. Saindo...\n");
            break;
    }
}

// <<<<<<<<<< Impressões na tela <<<<<<<<<<

// >>>>>>>>>> Operações >>>>>>>>>>
int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}
// <<<<<<<<<< Operações <<<<<<<<<<

// >>>>>>>>>> Validações >>>>>>>>>>
int validar_operacao(char op)  {
    switch (op) {
        case '+':
        case '-':
        case '*':
        case '/':
            return 0;
        default:
            return 1;
    }
}
// <<<<<<<<<< Validações <<<<<<<<<<

// >>>>>>>>>> Lógica >>>>>>>>>>
int calcular(int a, int b, char op)  {
    switch (op) {
        case '+':
            return soma(a, b);
        case '-':
            return sub(a, b);
        case '*':
            return mult(a, b);
        case '/':
            return div(a, b);

        default:
            return -INT_MAX;
    }
}

int processarEntradaECalcular() {
    int n1, n2;    
    char op;
    int resultado;
    
    int magic_number = 41;

    scanf("%d %c %d", &n1, &op, &n2);

    resultado = calcular(n2, n1, op);

    if (resultado == magic_number) {
        return 1;
    }
    else if (resultado == -INT_MAX) {
        return 2;
    }
 
    imprimir_saida(n1, op, n2, resultado);

    return 0;
}

/*
    Representa a calculadora em si:
        - Imprime o cabeçalho de ajuda
        - 
*/
void rodar_calc() {
    int status = 0;

    imprimir_cabecalho();

    do {
        imprimir_entrada();

        status = processarEntradaECalcular();
        
        if (status != 0) {
            imprimir_erro(status);
        }
    } while (status != 1);
}
// <<<<<<<<<< Lógica <<<<<<<<<<

int main() {
    rodar_calc();    

    return 0;
}



