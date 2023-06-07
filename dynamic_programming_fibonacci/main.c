#include <stdio.h>
#include <stdlib.h>



typedef enum TypeTag
{
    ADD,
    SUB,
    MUL,
    DIV,
    FIB
} TypeTag;

typedef struct Node
{
    TypeTag type;
    int operand1;
    int operand2;
    int value;
} Node;


int fibonacci(int n)
{
    int* fib;
    fib = (int*)malloc(n * sizeof(int));
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int result = fib[n-1];
    free(fib);
    return result;
}

Node* makeFunc(TypeTag type, int operand1, int operand2)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->operand1 = operand1;
    node->operand2 = operand2;
    return node;
}


int calc(Node *node)
{
    switch (node->type)
    {
    case ADD:
        node->value = node->operand1 + node->operand2;
        printf("add : %d\n", node->value);
        break;
    case SUB:
        node->value = node->operand1 - node->operand2;
        printf("sub : %d\n", node->value);
        break;
    case MUL:
        node->value = node->operand1 * node->operand2;
        printf("mul : %d\n", node->value);
        break;
    case DIV:
        node->value = node->operand1 / node->operand2;
        printf("div : %d\n", node->value);
        break;
    case FIB:
        node->value = fibonacci(node->operand1);
        printf("fibo: %d\n", node->value);
        break;
    }
    return node->value;
}


void main()
{
    Node* add = makeFunc(ADD, 10, 6);
    calc(add);

    Node* mul = makeFunc(MUL,5,4);
    calc(mul);

    Node* sub = makeFunc(SUB,add->value,mul->value);
    calc(sub);

    Node* fibo = makeFunc(FIB, abs(sub->value),0);
    calc(fibo);

    free(add);
    free(mul);
    free(sub);
    free(fibo);
}
