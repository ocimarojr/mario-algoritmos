/**
 * ============================================================================
 * PROJETO: Dominando Loops em C
 * ARQUIVO: 03_triangulo_esquerdo.c
 * AUTOR:   Ocimar
 * DATA:    Fevereiro de 2026
 *
 * DESCRIÇÃO:
 * Implementação de um triângulo retângulo alinhado à ESQUERDA.
 * Introduz o conceito de "dependência de variável": o loop interno
 * depende do valor atual do loop externo.
 *
 * LÓGICA MATEMÁTICA:
 * - Quantidade de hashtags = Número da linha + 1
 * - Fórmula: j < i + 1
 * ============================================================================
 */
#include <stdio.h>

int main(void)
{
    const int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
}