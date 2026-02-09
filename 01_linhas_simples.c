/**
 * ============================================================================
 * PROJETO: Dominando Loops em C
 * ARQUIVO: 01_linhas_simples.c
 * AUTOR:   Ocimar
 * DATA:    Fevereiro de 2026
 *
 * DESCRIÇÃO:
 * Primeiro exercício prático. Implementação de loops lineares básicos 
 * (horizontal e vertical) para entender o controle de fluxo antes de 
 * partir para loops aninhados.
 * ============================================================================
 */
#include <stdio.h>

int main(void)
{
    // 1. Um loop que imprime 4 interrogações na mesma linha.
    for(int i = 0; i < 4; i++)
    {
        printf("?");
    }
    // 2. Um printf que pula linha.
    printf("\n");
    // 3. Um loop que imprime 4 hashtags, uma por linha (vertical).
    for(int k = 0; k < 4; k++)
    {
        printf("#\n");
    }
}