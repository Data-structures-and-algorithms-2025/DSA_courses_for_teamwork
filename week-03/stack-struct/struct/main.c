#include <stdio.h>
#include <string.h>
#include "stack.h"

int main(void)
{
    char t[]="1 2 3 4 5 6 7 8 9 11 34";
    Stack_t stack;
    createStack(strlen(t), &stack);
    destroyStack(&stack);
    
    return 0;
}