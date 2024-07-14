#include <iostream>
using namespace std;

void showMenu()
{
    cout << "Basic Calculator Menu:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main()
{
    int choice;
    double num1, num2, result;

    while (true)
    {
        showMenu();
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (choice < 1 || choice > 5)
        {
            cout << "Invalid choice. Please select a valid option from the menu.\n";
            continue;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed.\n";
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            cout << "An unexpected error occurred.\n";
        }

        cout << "\n";
    }

    return 0;
}
