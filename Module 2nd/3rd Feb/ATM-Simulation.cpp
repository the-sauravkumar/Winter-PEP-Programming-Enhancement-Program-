#include <iostream>

using std::cout;
using std::cin;

class Node
{
public:
    int accountNumber;
    int pin;
    double balance;
    Node *next;

    Node(int accNum, int pin, double bal) : accountNumber(accNum), pin(pin), balance(bal), next(nullptr) {}
};

class ATM
{
private:
    Node *head;

public:
    ATM() : head(nullptr) {}

    void createAccount()
    {
        int accNum, pin;
        double balance;

        cout << "Enter Account Number: ";
        cin >> accNum;

        if (accountExists(accNum))
        {
            cout << "Account with this number already exists. Please choose a different account number.\n";
            return;
        }

        cout << "Enter PIN: ";
        cin >> pin;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        Node *newNode = new Node(accNum, pin, balance);
        newNode->next = head;
        head = newNode;

        cout << "Account created successfully!\n";
    }

    bool accountExists(int accNum)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->accountNumber == accNum)
            {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void depositMoney()
    {
        int accNum;
        double amount;

        cout << "Enter Account Number: ";
        cin >> accNum;

        Node *current = findAccount(accNum);

        if (current != nullptr)
        {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;

            current->balance += amount;
            cout << "Deposit successful. New balance: " << current->balance << "\n";
        }
        else
        {
            cout << "Account not found.\n";
        }
    }

    void withdrawMoney()
    {
        int accNum;
        double amount;

        cout << "Enter Account Number: ";
        cin >> accNum;

        Node *current = findAccount(accNum);

        if (current != nullptr)
        {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            if (current->balance >= amount)
            {
                current->balance -= amount;
                cout << "Withdrawal successful. New balance: " << current->balance << "\n";
            }
            else
            {
                cout << "Insufficient funds.\n";
            }
        }
        else
        {
            cout << "Account not found.\n";
        }
    }

    void checkBalance()
    {
        int accNum;

        cout << "Enter Account Number: ";
        cin >> accNum;

        Node *current = findAccount(accNum);

        if (current != nullptr)
        {
            cout << "Current Balance: " << current->balance << "\n";
        }
        else
        {
            cout << "Account not found.\n";
        }
    }

    void miniStatement()
    {
        int accNum;

        cout << "Enter Account Number: ";
        cin >> accNum;

        Node *current = findAccount(accNum);

        if (current != nullptr)
        {
            cout << "Account Number: " << current->accountNumber << "\n";
            cout << "Current Balance: " << current->balance << "\n";
        }
        else
        {
            cout << "Account not found.\n";
        }
    }

    void changePin()
    {
        int accNum, newPin;

        cout << "Enter Account Number: ";
        cin >> accNum;

        Node *current = findAccount(accNum);

        if (current != nullptr)
        {
            cout << "Enter New PIN: ";
            cin >> newPin;

            current->pin = newPin;
            cout << "PIN changed successfully.\n";
        }
        else
        {
            cout << "Account not found.\n";
        }
    }

    Node *findAccount(int accNum)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->accountNumber == accNum)
            {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    ~ATM()
    {
        Node *current = head;
        Node *nextNode;

        while (current != nullptr)
        {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main()
{
    ATM atm;
    int choice;

    do
    {
        cout << "\n----- ATM Simulation Menu -----\n";
        cout << "1. Create an Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Balance Check\n";
        cout << "5. Mini Statement\n";
        cout << "6. Change PIN\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            atm.createAccount();
            break;
        case 2:
            atm.depositMoney();
            break;
        case 3:
            atm.withdrawMoney();
            break;
        case 4:
            atm.checkBalance();
            break;
        case 5:
            atm.miniStatement();
            break;
        case 6:
            atm.changePin();
            break;
        case 7:
            cout << "Exiting ATM simulation. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 7);
}
