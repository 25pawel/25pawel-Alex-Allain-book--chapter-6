#include <iostream>
#include <limits>

using namespace std;

static int addNumbers(int num1, int num2);
static int subtractNumbers(int num1, int num2);
static int multiplyNumbers(int num1, int num2);
static int divideNumbers(int num1, int num2);
static void launchCalculator(void);
static void logIntoSystem(void);

int main()
{
    launchCalculator();
    // logIntoSystem();
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
    bool isInputValid = false;
    int result = 0;

    char operation;
    int firstNumber;
    int secondNumber;

    do{
        isInputValid = true;
        cout << "* * * * * * * * * *\n";
        cout << "Calculator started!\n";
        cout << "Enter first number: ";
        // Prevent infinite loop
        if(!(cin >> firstNumber))
        {
            // Get rid failure state
            cin.clear();
            // Get rid of bad character from buffer
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Mark that input is invalid
            isInputValid = false;
        }

        cout << "Enter second number: ";
        // Prevent infinite loop
        if(!(cin >> secondNumber))
        {
            // Get rid failure state
            cin.clear();
            // Get rid of bad character from buffer
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Mark that input is invalid
            isInputValid = false;
        }

        cout << "Choose which operation would you like to perform\n";
        cout << "+ \n";
        cout << "- \n";
        cout << "* \n";
        cout << "/ \n";

        if(!(cin >> operation))
        {
            // Get rid failure state
            cin.clear();
            // Get rid of bad character from buffer
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Mark that input is invalid
            isInputValid = false;
        }
        
        if(isInputValid)
        {

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
                isInputValid = false;
            }
        }
        else
        {
            cout << "Entered numbers/operator is invalid. Remember that number must be integer.\n";
            // Set valid input for next iteration of the loop
        }

    } while(!isInputValid);

    cout << "Result is: " << result <<"\n";
}

/* Task 1 */