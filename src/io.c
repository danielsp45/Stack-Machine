/**
 * @file io.c
 * @brief Funções responsáveis por lidar com o input e ouput do programa.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stack.h"

/**
 * @brief Esta função está encarregue de adicionar à stack os elementos do input.
 */
int val(STACK* s, char* token)
{
    int val;
    sscanf(token, "%d", &val);
    push(s, val);

    return 1;
}

/**
 * @brief Nesta função é feita a filtragem dos elementos que vão para a stack e dos elementos que representam as operações.
 */
void handle_token(STACK* s, char* token)
{
    if (strcmp (token, "+") == 0) add(s);
    else if (strcmp (token, "-") == 0) subtract(s);
    else if (strcmp (token, "*") == 0) multiply(s);
    else if (strcmp (token, "/") == 0) divide(s);
    else if (strcmp (token, "&") == 0) bit_and(s);
    else if (strcmp (token, "|") == 0) bit_or(s);
    else if (strcmp (token, "^") == 0) bit_xor(s);
    else if (strcmp (token, "~") == 0) bit_not(s);
    else if (strcmp (token, "(") == 0) decr(s);
    else if (strcmp (token, ")") == 0) incr(s);
    else if (strcmp(token, "%") == 0)  mod(s);
    else if (strcmp(token, "#" ) == 0) expo(s);
    else val(s, token);
}

void printStack(STACK *s)
{
    DADOS d;
    for (int i = 1; i <= s->sp; ++i)
            d = s->stack[i];
            printf("%d", *((int*)d.dados));
            
        printf("\n");
}
