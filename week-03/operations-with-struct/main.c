#include <stdio.h>
#include <>
int main() {
    Stack_t stack;
    createStack(5, &stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(stack));
    printf("Stack size: %d\n", size(stack));

    printf("Popped element: %d\n", pop(&stack));
    printf("Top element after pop: %d\n", peek(stack));

    destroyStack(&stack);
    return 0;
}
