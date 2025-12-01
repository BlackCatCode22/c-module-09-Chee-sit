//vibeCodingPresentaion.cpp
//Created by Chijenda Vang

//Headers
#include <iostream>  // Preprocessor directive: includes the iostream library so we can use cout (output) and cin (input). "#include" tells the compiler to pull in a library before compiling.
#include <ctime>  // Gives access to time(), it is used to create a seed for random numbers in my case.
#include <string>
using namespace std;

int main() {
    // srand sets the seed for the random number generator.
    // "srand" = seed random. "time(0)" returns the current time in seconds.
    srand(time(0));

    const int numEquations = 5;
    // const is a constant value that cannot be changed.
    // int is an integer type variable that only works for whole numbers.
    // numEquations is my variable name, and it simply stores how many problems will be generated.
    // This "=" is an assignment operator: I am storing the value of 5 into numEquations.

    int correctCount = 0;
    // correctCount variable that will count how many answers the user gets correct.
    // initializes the variable to 0 because I have not answered anything until I run the code.

    // for loop repeats code a set number of times.
    // The i++ is an increment operator: increases i by 1 each loop.
    for (int i = 1; i <= numEquations; i++) {
        int a = rand() % 20 + 1;
        // "a" is my variable name that is storing a random integer.
        // "rand()" is a function that returns back a whole number - it is kind of like setters and getters.
        // This percentage sign "%" is called the modulus operator, and it limits my range of numbers to 20.
        // rand() % 20 produces numbers 0–19.
        // The "+ 1" shifts the range to 1–20.

        int b = rand() % 20 + 1;
        // Same explanation as above.

        int operation = rand() % 4;
        // Operation stores a number from 0–3.
        // 0 = addition
        // 1 = subtraction
        // 2 = multiplication
        // 3 = division

        int solution;
        // Declares an integer but does not assign a value yet.

        string opSymbol;
        // So a string is just a sequence of characters.
        // opSymbol is just the name of my string, and it will store the operator symbols (+, -, *, /).

        // This "==" is a comparison operator, so it checks if the value in the operator is equaled to 0.
        if (operation == 0) {  // Addition
            solution = a + b;
            opSymbol = "+";

        } else if (operation == 1) { // Subtraction
            solution = a - b;
            opSymbol = "-";

        } else if (operation == 2) { // Multiplication
            solution = a * b;
            opSymbol = "*";

        } else if (operation == 3) {
            solution = a / b;
            opSymbol = "/";
        }

        int answer;  // Basically stores my answers so it can tell me which equation I got correct when running my code.
        cout << "Problem " << i << ": " << a << " " << opSymbol << " " << b << " = ? ";
        cin >> answer;


        // Check whether user answered correctly.
        if (answer == solution) {
            cout << "Correct!";
            correctCount++;
            // ++  increment operator: adds 1 to correctCount.
        } else {
            cout << " Wrong. The correct answer is " << solution << ".";
        }
    }
    cout << " You got " << correctCount << " out of " << numEquations << " correct! ";
    return 0;
}