#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

// Function to check if operator `a` has higher or equal precedence than operator `b`
bool isGreaterEqual(char a, char b) {
    if (a == '*' || a == '/') {
        return true;
    } else {
        // a is + or a -
        if (b == '+' || b == '-') return true;
        return false;
    }
}

// Function to evaluate the expression
int evaluateExpression(const string& str) {
    stack<int> operands;
    stack<char> operators;

    unordered_map<char, int> precedence;
    precedence['+'] = precedence['-'] = 1;
    precedence['*'] = precedence['/'] = 2;

    for (char c : str) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                char op = operators.top();
                operators.pop();
                int operand2 = operands.top();
                operands.pop();
                int operand1 = operands.top();
                operands.pop();
                if (op == '+') operands.push(operand1 + operand2);
                else if (op == '-') operands.push(operand1 - operand2);
                else if (op == '*') operands.push(operand1 * operand2);
                else if (op == '/') operands.push(operand1 / operand2);
            }
            operators.pop(); // Discard the '('
        } else {
            while (!operators.empty() && operators.top() != '(' && isGreaterEqual(operators.top(), c)) {
                char op = operators.top();
                operators.pop();
                int operand2 = operands.top();
                operands.pop();
                int operand1 = operands.top();
                operands.pop();
                if (op == '+') operands.push(operand1 + operand2);
                else if (op == '-') operands.push(operand1 - operand2);
                else if (op == '*') operands.push(operand1 * operand2);
                else if (op == '/') operands.push(operand1 / operand2);
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        int operand2 = operands.top();
        operands.pop();
        int operand1 = operands.top();
        operands.pop();
        if (op == '+') operands.push(operand1 + operand2);
        else if (op == '-') operands.push(operand1 - operand2);
        else if (op == '*') operands.push(operand1 * operand2);
        else if (op == '/') operands.push(operand1 / operand2);
    }

    return operands.top();
}

int main() {
    string str;
    cout << "Enter the infix expression: ";
    cin >> str;

    int result = evaluateExpression(str);
    cout << "Result: " << result << endl;

    return 0;
}
