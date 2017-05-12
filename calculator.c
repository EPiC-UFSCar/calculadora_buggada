#include <stdio.h>
#include <limits.h>


// >>>>>>>>>> Impressões na tela >>>>>>>>>>

/**
 * Imprime cabeçalho da calculadora.
 */
// FIXME tem algo de errado nos espaçamentos
void imprimir_cabecalho() {   
    printf("---------- EPiC Calculator -----------\n");
    printf("- Uso:                               -\n");
    printf("-      operando1 operacao operando2   -\n");
    printf("-                                    -\n");
    printf("- Operacoes:                           -\n");
    printf("-      +, -, *, /                    -\n");
    printf("-                                         -\n");
    printf("---------- EPiC Calculator -----------\n");
}

/**
 * Imprime prompt de input.
 */
void imprimir_entrada() {
    printf("\n");
    printf("[In ] ");
}

/**
 * Imprime prompt de output.
 */
void imprimir_saida(int a, char b, int c, int d) {
    printf("[Out] %d %c %d = %d\n", a, b, c, d);
}

/**
 * Imprime uma mensagem associada a um código numérico.
 * @param erro código do erro.
 */
// FIXME Nome de função incoerente
// Quando erro = 1, não é uma mensagem de erro.
// Tem um nome melhor pra essa função?
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
    return a + b;
}

int div(int a, int b) {
    return a / b;
}
// <<<<<<<<<< Operações <<<<<<<<<<

// >>>>>>>>>> Validações >>>>>>>>>>
/**
 * Testa se op é uma operação válida/conhecida.
 * @param op char da operação a ser verificada.
 * @see calcular()
 * @return 0 se op é válido, 1 caso contrário
 */
int operacao_valida(char op)  {
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

/**
 * Calcula efetivamente a operação op.
 * Espera-se que op seja uma operação válida.
 * @param a o primeiro operando
 * @param b o segundo operando
 * @param op a operação
 * @see operacao_valida()
 * @return O valor de "a op b" caso op seja reconhecido, ou -INT_MAX caso contrário
 */
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
			// impossível de acontecer, considerando que
			// operacao_valida(op) foi testada antes
            return -INT_MAX;
    }
}

/**
 * Lê entrada, valida operação, calcula resultado e o printa caso nenhum erro
 * tenha sido gerado no processo.
 * @see operacao_valida()
 * @see calcular()
 * @see imprimir_saida()
 * @return Código de status gerado a partir do processamento do último input
 */
int processarEntradaECalcular() {
    int n1, n2;    
    char op;
    int resultado;
    
    // FIXME Acho que esse é o magic_number errado. Qual era a resposta mesmo? e.e
    int magic_number = 41;

    scanf("%d %c %d", &n1, &op, &n2);

	if (operacao_valida(op) != 0) {
		return 2;
	}

    resultado = calcular(n2, n1, op);

    if (resultado == magic_number) {
        return 1;
    }
    else if (resultado == -INT_MAX) {
        return 3;
    }
 
    imprimir_saida(n1, op, n2, resultado);

    return 0;
}

/**
 * Gerencia toda a lógica da calculadora.
 * Responsável por manter a execução da calculadora ativa enquanto o
 * status do processamento da entrada não for 1
 * @see imprimir_cabecalho()
 * @see imprimir_entrada()
 * @see imprimir_erro()
 * @see processarEntradaECalcular()
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



