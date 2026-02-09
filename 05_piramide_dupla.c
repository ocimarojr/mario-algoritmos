/**
 * ============================================================================
 * PROJETO: Dominando Loops em C
 * ARQUIVO: 05_piramide_dupla.c
 * AUTOR:   Ocimar
 * DATA:    Fevereiro de 2026
 *
 * DESCRIÇÃO:
 * O desafio "Mario More" do CS50.
 * Constrói duas pirâmides adjacentes separadas por um "gap" de 2 espaços.
 *
 * LÓGICA DE CONSTRUÇÃO:
 * 1. Imprime Espaços (Alinhamento)
 * 2. Imprime Pirâmide Esquerda
 * 3. Imprime Gap (2 espaços fixos)
 * 4. Imprime Pirâmide Direita (Simétrica à esquerda)
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
        
        // Espaço entre as piramides
        printf("  ");

          for (int y = 0; y < i+1; y++)
        {
            printf("#");
        }
        printf("\n");           
        
    }
}