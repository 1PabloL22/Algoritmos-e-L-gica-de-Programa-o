#include <stdio.h>
#include <stdlib.h>

/* Funcao que ira efetuar os calculos de Collatz

 Regra:
  if (n % 2 == 0) -> n / 2
  else -> (3*n) + 1


 Essa funcao nao precisa retornar nenhum valor, por isso ela é void.
 
 OBS: O metodo utilizado para solucionar esse problema foi iterativo,
      onde fazemos calculos em um laco de repeticao ate que a condicao de parada seja satisfeita.
*/

void collatz(int n) {
    printf("\nResultado: \n\n\n");

    /* Enquanto o resultado das operacoes for maior que 1, significa que ainda temos que
       calcular o proximo termo para satisfazer a conjuctura de Collatz
    */
    while (n > 1) {

        // Se for par
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            // Se for impar
            n = (3 * n) + 1;
        }

        // Imprimindo o valor atualizado a cada iteracao
        printf("%d ", n);
    }
}

int main(void) {
    // Essa variavel sera responsavel por conter o valor do termo que será calculado em breve
    int userInput;

    // Mensagem de apresentacao do programa
    printf("\nInforme um numero para o calculo: ");
    
    // Recebendo input do usuario
    scanf("%d", &userInput);

    // Chamando a funcao
    collatz(userInput);

    // Encerrando o programa
    return 0;
}
