#include <iostream>
using std::cout; using std::cin; using std::endl;

int main(){

    cout << "Welcome to the Calculator App" <<endl;
        double num1, num2;
        char operation;

    
cout << "Enter First number: " <<endl;
    cin >> num1;
    cout << "Enter an operation (*, /, +, -): " <<endl;
    cin >> operation;
    cout << "Enter Second Number: " << endl;
    cin >> num2;


    if (operation == '*'){
        cout << "Your answer is " << num1 * num2 <<endl;
    }
    else if (operation == '/')
    {
        cout << "Your answer is " << num1 / num2 <<endl;
    }
    else if (operation == '+')
    {
        cout << "Your answer is " << num1 + num2 <<endl;
    }
    else if (operation == '-')
    {
        cout << "Your answer is " << num1 - num2 <<endl;
    }

    else
        cout << "Invalid operation" << endl;

    }
    
    
    

        

    
