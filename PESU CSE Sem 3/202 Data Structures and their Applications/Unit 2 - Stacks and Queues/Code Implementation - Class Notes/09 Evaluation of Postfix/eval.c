#include <stdio.h>


#define STR_LEN 20

int evaluate_postfix(char *);
void push(int *, char, int *);
int pop(int *, int *);
int peep(int *, int);
int to_num(char);
int powerof(int, int);
int is_operator(char);
int operate(int, int, char);
void display(int *, int);

int main() {
    char postfix[STR_LEN] = "";

    printf("Enter valid postfix expression: ");
    scanf("%s", postfix);

    int ans = evaluate_postfix(postfix);
    printf("Answer: %d\n", ans);

    return 0;
}

int evaluate_postfix(char *postfix) {
    int stack[STR_LEN];
    int top = -1;
    int a, b, ans;

    for (int i = 0; postfix[i] != '\0'; ++i) {
        if (!is_operator(postfix[i])) {
            push(stack, to_num(postfix[i]), &top);
            // display(stack, top);
        }
        else {
            b = pop(stack, &top);
            a = pop(stack, &top);
            ans = operate(a, b, postfix[i]);
            push(stack, ans, &top);
            // display(stack, top);
        }
    }
    return ans;
}

void display(int *stack, int top) {
    for (int i = top; i >= 0; --i) {
        printf("%d->", stack[i]);
    }
    printf("#\n");
}

int operate(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '^': return powerof(a, b);
        case '/': return a / b;
        case '*': return a * b;
        default: return 1;
    }
}

int powerof(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; ++i) {
        res *= a;
    }
    return res;
}

int is_operator(char ch) {
    switch (ch) {
        case '+':
        case '-':
        case '*': 
        case '/':
        case '^':
            return 1;
        default:
            return 0;
    }
}

int to_num(char ch) {
    return (ch - '0');
}

void push(int *stack, char ch, int *ptop) {

    if (*ptop == STR_LEN - 1) {
        printf("Expression too long\n");
        return;
    }

    ++(*ptop);
    stack[*ptop] = ch;
}


int peep(int *stack, int top) {
    return stack[top];
}

int pop(int *stack, int *ptop) {
    if (*ptop == -1) {
        return '#';
    }
    int popped = stack[*ptop];
    stack[*ptop] = 0;
    --(*ptop);
    return popped;
}