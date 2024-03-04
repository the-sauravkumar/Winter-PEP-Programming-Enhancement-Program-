#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> historyStack;
    string currentUrl = "Home";

    int n;
    cout << "Enter the number of operations: ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int operationType;
        cout << "Operation " << i + 1 << ": ";
        
        while (true)
        {
            cin >> operationType;

            if (operationType == 1 || operationType == 2)
                break;

            cout << "Invalid operation type. Use 1 for pushing a URL, and 2 for backward navigation." << endl;
            cout << "Operation " << i + 1 << ": ";
        }

        if (operationType == 1)
        {
            string url;
            cout << "Enter URL: ";
            cin >> url;

            historyStack.push(currentUrl);
            currentUrl = url;

            cout << "You are now at: " << currentUrl << endl;
        }
        else if (operationType == 2)
        {
            if (!historyStack.empty())
            {
                currentUrl = historyStack.top();
                historyStack.pop();

                cout << "Backward navigation. You are now at: " << currentUrl << endl;
            }
            else
            {
                cout << "No previous URLs in history." << endl;
            }
        }
    }
}
