/**
 * ============================================================================
 * PROJETO: Dominando Loops em C
 * ARQUIVO: 02_quadrado.c
 * AUTOR:   Ocimar
 * DATA:    Fevereiro de 2026
 *
 * DESCRIÇÃO:
 * Introdução aos Loops Aninhados (Nested Loops).
 * O objetivo é imprimir um quadrado sólido de 5x5 hashtags.
 *
 * LÓGICA:
 * - Loop Externo (i): Controla a mudança de LINHAS.
 * - Loop Interno (j): Controla a impressão das COLUNAS (caracteres).
 * ============================================================================
 */
#include <stdio.h>

int main(void)
{
    // Defina uma constante para o tamanho (opcional, mas elegante)
    const int n = 5;

    // Escreva aqui seus dois loops aninhados para formar o quadrado.
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("#");
        }
        printf("\n");
    }
}