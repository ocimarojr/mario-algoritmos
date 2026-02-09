/**
 * ----------------------------------------------------------------------------
 * Projeto: Dominando Loops em C
 * Arquivo: 06_losango_complexo.c
 * ----------------------------------------------------------------------------
 * Autor:  Ocimar
 * Data:   Fevereiro de 2026
 * * Descrição:
 * Este programa gera um losango (diamante) completo utilizando quatro
 * loops aninhados para desenhar as metades superior e inferior.
 * Foi desenvolvido como exercício de superação do "Problem Set Mario" do CS50.
 * * Conceitos Praticados:
 * - Loops aninhados (Nested Loops)
 * - Lógica aritmética (incremento/decremento)
 * - Manipulação de saída no terminal
 * ----------------------------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    const int n = 5;

    // Piramide de cima
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

          for (int y = 0; y < i+1; y++)
        {
            printf("#");
        }
        printf("\n");           
        
    }

    // Piramide de baixo

    for(int z = 0; z < n; z++)
    {
        for (int x = 0; x < z ; x++)
        {
            printf(" ");
        }
        
        for (int v = 0; v < n-z ; v++)
        {
            printf("#");
        }

        for (int f = 0; f < n-z; f++)
        {
            printf("#");
        }
         
        printf("\n");  
    }


}