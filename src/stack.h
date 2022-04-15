/**
 * @file stack.h
 * @brief Declaração de funções e definição de estruturas de dados.
 */

#define MAX_STACK  1000

typedef enum{LONG, DOUBLE, CHAR, STRING}TIPO;

typedef struct
{
    TIPO tipo;
    void *dados;
} DADOS;

/**
 * @brief Definição da estrutura da stack.
 * 
 * - `stack[MAX_STACK]` - __Array para armazenar os elementos da stack com um tamanho maximo de 1000.__
 * - `sp` - __Stack pointer que vai apontar para a stack.__
 */
typedef struct
{
    DADOS stack[MAX_STACK];
    int sp;
} STACK;

STACK* new_stack();

void push(STACK *s, long elem);
void* pop(STACK *s);

// expMat.c
void add(STACK *s);
void subtract(STACK *s);
void multiply(STACK *s);
void divide(STACK *s);
void bit_and(STACK *s);
void bit_or(STACK *s);
void bit_xor(STACK *s);
void bit_not(STACK *s);
void decr(STACK *s);
void incr(STACK *s);
void mod(STACK *s);
void expo(STACK *s);

// io.c
int val(STACK* s, char* token);
void handle_token(STACK* s, char* token);
void printStack(STACK *s);


//conversions.c
void convDouble(STACK *s);
void convLong(STACK *s);