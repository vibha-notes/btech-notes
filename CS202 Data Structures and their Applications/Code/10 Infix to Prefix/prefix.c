#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 20

void push(char *, char, int *);
char pop(char *, int *);
char peep(char *, int);
int stack_precedence(char);

void convert_postfix(char *, char *);
void convert_prefix(char *, char *);
void reverse(char *);

int main(int argc, char *argv[]) {
    int top = -1;
    char prefix[STR_LEN] = "";
    char infix[STR_LEN] = "";

    printf("Enter valid infix expression: ");
    scanf("%s", infix);

    printf("%s\n", infix);

    convert_prefix(infix, prefix);

    printf("Prefix: %s\n", prefix);
    return 0;

}

int stack_precedence(char sym) {
    switch (sym) {
        case '+':
        case '-': 
            return 2;
        case '*':
        case '/':
            return 4;
        case '(':
            return 0;
        case '^': 
            return 5;
        case '#':
            return -1;
        default: 
            return 8;
    }
}

int input_precedence(char sym) {
    switch (sym) {
        case '+':
        case '-': 
            return 1;
        case '*':
        case '/':
            return 3;
        case '(':
            return 9;
        case ')':
            return 0;
        case '^': 
            return 6;
        case '#':
            return -1;
        default: 
            return 7;
    }
}

void convert_prefix(char *infix, char *prefix) {
    reverse(infix);
    convert_postfix(infix, prefix);
    reverse(prefix);
}

void reverse(char *arr) {
    char *rev = (char *) malloc(strlen(arr) * sizeof(char));
    int j = 0;
    for (int i = strlen(arr) - 1; i >= 0; --i) {
        rev[j++] = arr[i];
    }
    rev[j] = '\0';
    strcpy(arr, rev);
    free(rev);
}

void convert_postfix(char *infix, char *postfix) {
    static char stack[STR_LEN];
    int top = 0;
    stack[top] = '#';

    int j = 0, i = 0;

    for (i = 0; infix[i] != '\0'; ++i) {

        while (stack_precedence(peep(stack, top)) > input_precedence(infix[i])) {
            postfix[j++] = pop(stack, &top);
        }
        if (stack_precedence(peep(stack, top)) < input_precedence(infix[i])) {
            push(stack, infix[i], &top);
        }
        else {
            pop(stack, &top);
        }
    }


    while (peep(stack, top) != '#') {
        postfix[j++] = pop(stack, &top);
    }

    postfix[j++] = '\0';

    
}

char peep(char *stack, int top) {
    return stack[top];
}

void push(char *stack, char ch, int *ptop) {

    if (*ptop == STR_LEN - 1) {
        printf("Expression too long\n");
        return;
    }

    ++(*ptop);
    stack[*ptop] = ch;
}

char pop(char *stack, int *ptop) {
    if (*ptop == -1) {
        return '#';
    }
    char popped = stack[*ptop];
    stack[*ptop] = 0;
    --(*ptop);
    return popped;
}