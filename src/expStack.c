#include "stack.h"
#include <stdio.h>
#include <stdlib.h>


void dup (STACK *s)
{
   DADOS d = pop (s);

   if (d.tipo == LONG)
    {
        long *a = d.dados;
        long n = *a;
        push_long(s, n);
        push_long(s, n);
    }
    else if (d.tipo == CHAR)
    {
        char *b = d.dados;
        char n = *b;
        push_char(s, n);
        push_char(s, n);
    }
    else if (d.tipo == DOUBLE)
    {
        double *b = d.dados;
        double n = *b;
        push_double(s, n);
        push_double(s, n);
    }
    else if (d.tipo == STRING)
    {
        char *str = (char*)d.dados;
        push_string(s, str);
        push_string(s, str);
    }
    free(d.dados);

}

void spin (STACK *s)
{
   DADOS x = pop (s);
   DADOS y = pop (s);
   DADOS z = pop (s);

    if (y.tipo == LONG)
    {
        long *a = y.dados;
        long n = *a;
        push_long(s, n);
    }
    else if (y.tipo == CHAR)
    {
        char *b = y.dados;
        char n = *b;
        push_char(s, n);
    }
    else if (y.tipo == DOUBLE)
    {
        double *b = y.dados;
        double n = *b;
        push_double(s, n);
    }
    else if (y.tipo == STRING)
    {
        char *str = (char*)y.dados;
        push_string(s, str);
    }


    if (x.tipo == LONG)
    {
        long *a = x.dados;
        long n = *a;
        push_long(s, n);
    }
    else if (x.tipo == CHAR)
    {
        char *b = x.dados;
        char n = *b;
        push_char(s, n);
    }
    else if (x.tipo == DOUBLE)
    {
        double *b = x.dados;
        double n = *b;
        push_double(s, n);
    }
    else if (x.tipo == STRING)
    {
        char *str = (char*)x.dados;
        push_string(s, str);
    }
    

    if (z.tipo == LONG)
    {
        long *a = z.dados;
        long n = *a;
        push_long(s, n);
    }
    else if (z.tipo == CHAR)
    {
        char *b = z.dados;
        char n = *b;
        push_char(s, n);
    }
    else if (z.tipo == DOUBLE)
    {
        double *b = z.dados;
        double n = *b;
        push_double(s, n);
    }
    else if (z.tipo == STRING)
    {
        char *str = (char*)z.dados;
        push_string(s, str);
    }
    
    
    
    free(x.dados);
    free(y.dados);
    free(z.dados);

}

void popS(STACK *s)
{

   pop (s);
   DADOS z = pop(s);
   
   if (z.tipo == LONG)
    {
        long *a = z.dados;
        long n = *a;
        push_long(s, n);
    }
    else if (z.tipo == CHAR)
    {
        char *b = z.dados;
        char n = *b;
        push_char(s, n);
    }
    else if (z.tipo == DOUBLE)
    {
        double *b = z.dados;
        double n = *b;
        push_double(s, n);
    }
    else if (z.tipo == STRING)
    {
        char *str = (char*)z.dados;
        push_string(s, str);
    }

    free(z.dados);

}

void swap(STACK *s) 
{

  
   DADOS x = pop (s);
   DADOS y = pop (s);


    if (x.tipo == LONG)
    {
        long *a = x.dados;
        long n = *a;
        push_long(s, n);
    }
    else if (x.tipo == CHAR)
    {
        char *b = x.dados;
        char n = *b;
        push_char(s, n);
    }
    else if (x.tipo == DOUBLE)
    {
        double *b = x.dados;
        double n = *b;
        push_double(s, n);
    }
    else if (x.tipo == STRING)
    {
        char *str = (char*)x.dados;
        push_string(s, str);
    }

    if (y.tipo == LONG)
    {
        long *a = y.dados;
        long n = *a;
        push_long(s, n);
    }
    else if (y.tipo == CHAR)
    {
        char *b = y.dados;
        char n = *b;
        push_char(s, n);
    }
    else if (y.tipo == DOUBLE)
    {
        double *b = y.dados;
        double n = *b;
        push_double(s, n);
    }
    else if (y.tipo == STRING)
    {
        char *str = (char*)y.dados;
        push_string(s, str);
    }
      
    free(x.dados);
    free(y.dados);


}


void ncopy(STACK *s)
{

   DADOS n = pop(s);
   DADOS x = pop (s);
   


    if (x.tipo == LONG)
    {
        long *a = x.dados;
        long n = *a;
        push_long(s, n);
    }
    else if (x.tipo == CHAR)
    {
        char *b = x.dados;
        char n = *b;
        push_char(s, n);
    }
    else if (x.tipo == DOUBLE)
    {
        double *b = x.dados;
        double n = *b;
        push_double(s, n);
    }
    else if (x.tipo == STRING)
    {
        char *str = (char*)x.dados;
        push_string(s, str);
    }
   
   busca (s,n);

   free(n.dados);
   free(x.dados);
 

}

void busca(STACK *s, DADOS n)
{

    conv_double (STACK *s);

    while (n < 0)
    {
      pop(s);
    }
    
    DADOS x = pop(s);
    
    
    if (x.tipo == DOUBLE)
    {
        double *b = x.dados;
        double n = *b;
        push_double (s,n);
       
    }
    
    free (x.dados);
    
}

