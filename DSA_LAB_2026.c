#include <stdio.h>
#define MAX 5  // Maximum stack size

int stack[MAX], top = -1;

// Push an element onto the stack
void push(int val) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = val;
    printf("%d pushed.\n", val);
}

// Pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return;
    }
    printf("%d popped.\n", stack[top--]);
}

// Display stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack: ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}