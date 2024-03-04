#include <iostream>
#include <stack>
#include <cctype>

using std::cout;
using std::isdigit;
using std::isspace;
using std::stack;
using std::stoi;
using std::string;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(char operation, int operand1, int operand2)
{
    switch (operation)
    {
    case '+':
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '*':
        return operand1 * operand2;
    case '/':
        return operand1 / operand2;
    }
}

int evaluatePostfix(const string &postfixExpression)
{
    stack<int> operandStack;

    int i = 0;
    while (i < postfixExpression.length())
    {
        while (i < postfixExpression.length() && isspace(postfixExpression[i]))
        {
            ++i;
        }

        string token;
        while (i < postfixExpression.length() && !isspace(postfixExpression[i]))
        {
            token += postfixExpression[i++];
        }

        if (!token.empty())
        {
            if (isdigit(token[0]))
            {

                operandStack.push(stoi(token));
            }
            else if (isOperator(token[0]))
            {
                int operand2 = operandStack.top();
                operandStack.pop();

                int operand1 = operandStack.top();
                operandStack.pop();

                int result = performOperation(token[0], operand1, operand2);
                operandStack.push(result);
            }
        }
    }

    return operandStack.top();
}

int main()
{
    string postfixExpression = "3 7 10 * +";

    cout << "Postfix Expression: " << postfixExpression << "\n";
    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << "\n";
}
