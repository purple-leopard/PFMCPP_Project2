#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool
 double
 char
 unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int age = 3;
    int score = 100;

    float temperature = 20.0f;
    float distance = 1000.056f;
    float height = 30.6f;

    bool isOrganic = false;
    bool unlocked = true;
    bool error = false;

    double weight = 63.7;
    double pressure = 11.02;
    double speed = 42.0;

    char grade = 'A';
    char symbol = '!';
    char initial = 'G';

    unsigned int population = 400000;
    unsigned int area = 111;
    unsigned int brightness = 255;
    
    ignoreUnused(number, age, score, temperature, distance, height, isOrganic, unlocked, error, weight, pressure, speed, grade, symbol, initial, population, area, brightness); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void printSingleCharacter(char character)
{
    ignoreUnused(character);
}

/*
 2)
 */
double calculateBMI(double weight, double height)
{
    ignoreUnused(weight, height);
    return {};
}

/*
 3)
 */
void setTimerParameters(float seconds, bool repeat = false)
{
    ignoreUnused(seconds, repeat);
}

/*
 4)
 */
int findMin(int a, int b, int c)
{
    ignoreUnused(a, b, c);
    return {};
}

/*
 5)
 */
bool checkPrime(int number)
{
    ignoreUnused(number);
    return {};
}

/*
 6)
 */
void drawCircle(float centerX, float centerY, float radius)
{
    ignoreUnused(centerX, centerY, radius);
}

/*
 7)
 */
float computeProfit(float revenue, float costs, float interest = 0.06f)
{
    ignoreUnused(revenue, costs, interest);
    return {};
}

/*
 8)
 */
void setThermostat(float newTemp)
{
    ignoreUnused(newTemp);
}

/*
 9)
 */
double calculateRequiredSpeed(double elapsedDistance, double timeRemaining)
{
    ignoreUnused(elapsedDistance, timeRemaining);
    return {};
}

/*
 10)
 */
void configureSynthVoices(unsigned int numVoices)
{
    ignoreUnused(numVoices);
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    printSingleCharacter('A');
    //2)
    auto bmi = calculateBMI(65.0, 1.75);
    //3)
    setTimerParameters(120.0f, true);
    //4)
    auto minVal = findMin(5, 10, 2);
    //5)
    auto isPrime = checkPrime(11);
    //6)
    drawCircle(5.0f, 5.0f, 3.0f);
    //7)
    auto profit = computeProfit(500000.0f, 100.0f);
    //8)
    setThermostat(22.5f);
    //9)
    auto requiredSpeed = calculateRequiredSpeed(100.0, 11.5);
    //10)
    configureSynthVoices(32);
    
    ignoreUnused(carRented, bmi, minVal, isPrime, profit, requiredSpeed);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
