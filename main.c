#include <stdio.h>
#include "bet.h"
int main(void)
{
    struct bet *expr_tree = NULL;
    while ((expr_tree = bet_read()) != NULL)
    {
        printf("The BET evaluates to %d.\n", bet_evaluate(expr_tree));
        bet_destroy(expr_tree);
    }
}