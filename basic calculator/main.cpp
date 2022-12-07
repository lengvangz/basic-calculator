#include <iostream>

/*
 the program ask user to enter two floating numbers,
 then one mathematical symbols (+,-,*,/), the program computes
 the answer and print the results
 */

//get and return double from user
double readNumber()
{
    double i;
    std::cout << "Enter a number with decimal: ";
    std::cin >> i;
    return i;
}

//check the mathematical symbol from user
char getOperator()
{
    char i;
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> i;
    return i;
}

void print(double x, char operation, double y)
{
    if(operation == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    if(operation == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    if(operation == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    if(operation == '/')
        std::cout << x << " / " << y << " is " << x / y << '\n';
    
}

int main()
{
    double x{ readNumber() };
    double y{ readNumber() };
    char operation { getOperator() };
    
    print(x, operation, y);
    
    return 0;

}
