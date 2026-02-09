/**
 * ============================================================================
 * PROJETO: Dominando Loops em C
 * ARQUIVO: 04_piramide_mario.c
 * AUTOR:   Ocimar
 * DATA:    Fevereiro de 2026
 *
 * DESCRIÇÃO:
 * A famosa pirâmide do Mario (Right-Aligned).
 * Introduz o conceito de "Múltiplos Loops Internos Sequenciais".
 *
 * LÓGICA MATEMÁTICA:
 * 1. Primeiro loop interno imprime ESPAÇOS (Decrescendo: n - i - 1)
 * 2. Segundo loop interno imprime HASHTAGS (Crescendo: i + 1)
 * 3. Resultado visual: A pirâmide parece "subir" para a direita.
 * ============================================================================
 */
#include <stdio.h>

int main(void)
{
    const int n = 5;

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            printf(" ");
        }
        
        for (int k = 0; k < i+1 ; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}