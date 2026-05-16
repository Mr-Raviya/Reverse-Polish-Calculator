#include <stdio.h>

// stack array
int stack[100];

// stack is empty
int top = -1;

// when push int value top value update and stack value = int value
void push(int value)
{
    top++;
    stack[top] = value;
}

// pop function
int pop()
{
    int value;

    value = stack[top];
    top--;

    return value;
}

int main()
{
    char exp[100]; // char array

    printf("\n");
    printf("=========================================\n");
    printf("       REVERSE POLISH CALCULATOR\n");
    printf("=========================================\n\n");

    printf("Instructions:\n");
    printf("-> Enter postfix expression with spaces\n");
    printf("-> Example : 5 23 * 2 +\n");
    printf("-> Supported operators : +  -  *  /\n\n");

    printf("Enter postfix expression : ");

    fgets(exp, sizeof(exp), stdin);

    int i = 0;

    // Run the loop till exp[i] character = ('\0')
    while(exp[i] != '\0')
    {
        char ch;
        ch = exp[i];

        // ignore spaces
        if(ch == ' ')
        {
            i++;
            continue;
        }

        // if number
        if(ch >= '0' && ch <= '9')
        {
            int num = 0;

            // Build full number
            while(exp[i] >= '0' && exp[i] <= '9')
            {
                num = num * 10 + (exp[i] - '0');
                i++;
            }

            push(num);

            i--; // important
        }

        // addition
        else if(ch == '+')
        {
            int a, b;

            b = pop();
            a = pop();

            push(a + b);
        }

        // subtraction
        else if(ch == '-')
        {
            int a, b;

            b = pop();
            a = pop();

            push(a - b);
        }

        // multiplication
        else if(ch == '*')
        {
            int a, b;

            b = pop();
            a = pop();

            push(a * b);
        }

        // division
        else if(ch == '/')
        {
            int a, b;

            b = pop();
            a = pop();

            push(a / b);
        }

        i++;
    }

    printf("\n");
    printf("=========================================\n");
    printf("Answer = %d\n", pop());
    printf("=========================================\n");

    return 0;
}