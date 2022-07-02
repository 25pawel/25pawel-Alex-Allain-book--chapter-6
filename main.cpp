#include <iostream>

using namespace std;

static int addNumbers(int num1, int num2);
static int subtractNumbers(int num1, int num2);
static int multiplyNumbers(int num1, int num2);
static int divideNumbers(int num1, int num2);
static void launchCalculator(void);
static void logIntoSystem(void);

int main()
{
    // launchCalculator();
    logIntoSystem();
}

/* Task 2 */

static bool checkIfLoginSuccessfully(string login, string pass)
{
    bool isLoginSuccessful = false;

    if(login == "admin1" && pass == "pass1")
    {
        isLoginSuccessful = true;
    }

    return isLoginSuccessful;
}

static void logIntoSystem(void)
{
    string login;
    string password;
    bool isLoginSuccessful = false;

    do
    {
        cout << "Enter login: ";
        cin >> login;
        cout << "Enter password: ";
        cin >> password;

        isLoginSuccessful = checkIfLoginSuccessfully(login, password);
    } while (!isLoginSuccessful);

    cout << "Log into system successful";
}
/* Task 2 */

/* Task 1 */
static int addNumbers(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

static int subtractNumbers(int num1, int num2)
{
    int result = num1 - num2;
    return result;
}

static int multiplyNumbers(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}

static int divideNumbers(int num1, int num2)
{
    int result = num1 / num2;
    return result;
}

static void launchCalculator(void)
{
    bool isOperatorValid = true;
    int result = 0;
    do
    {
        char operation;
        int firstNumber;
        int secondNumber;

        cout << "Enter first number: ";
        cin >> firstNumber;
        cout << "Enter second number: ";
        cin >> secondNumber;

        cout << "Calculator started!\n";
        cout << "Choose which operation would you like to perform\n";
        cout << "+ \n";
        cout << "- \n";
        cout << "* \n";
        cout << "/ \n";
        cin >> operation;

        if(operation == '+')
        {
            result = addNumbers(firstNumber, secondNumber);
        }
        else if(operation == '-')
        {
            result = subtractNumbers(firstNumber, secondNumber);
        }
        else if(operation == '*')
        {
            result = multiplyNumbers(firstNumber, secondNumber);
        }
        else if(operation == '/')
        {
            result = divideNumbers(firstNumber, secondNumber);
        }
        else
        {
            cout << "\nBad operation entered. Try one more time\n";
            isOperatorValid = false;
        }

    } while(!isOperatorValid);

    cout << "Result is: " << result <<"\n";
}

/* Task 1 */