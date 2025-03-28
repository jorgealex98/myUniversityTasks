#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>


void runMigratingToJava() {

    // First problem(input your name)

    /*std::cout << "Input  your name";

    std::string name;
    std::cin>> name ;

    if (name == "Einstein") {
        std::cout << "I know you!";
    } else {
        std::cout << "Greetings";
    }*/

    // Second problem(guess the number)

    /*// Step 1: Create a random device
    std::random_device rd;

    // Step 2: Create a Mersenne Twister generator and seed it with random_device
    std::mt19937 gen(rd());

    // Step 3: Define the distribution range (for example, numbers from 1 to 100)
    std::uniform_int_distribution<> distrib(1, 10);

    // Step 4: Generate random numbers
    for (int i = 0; i < 5; ++i) {
        std::cout << "Random Number: " << distrib(gen) << std::endl;
    }*/

    /*std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 100);

    auto numberToGuess = distrib(gen);
    auto input = -1;


    while (input != numberToGuess) {

        std::cout << "Guess a number " << '\n';
        std::cin >> input;


        if (input > numberToGuess) {
            std::cout << "Too big. Try Lower" << '\n';
        }
        if ( input < numberToGuess) {
            std::cout << "Too small. Try Higher" << '\n';
        }

    }


    std::cout << "Congratulation! You guessed the number" << '\n';
    */

    // third problem

    using namespace std;



    auto numbers = std::vector<int>{};

    int input;

    while (std::cin >> input && input >= 0  ) {
        numbers.push_back(input);
    }

    for ( auto number : numbers) {
        std::cout << number << " ,";
    }

    std::cout << '\n';


    for (auto number : numbers) {
        bool isWhat = true;

        if (number <= 1) isWhat = false;
        else if (number == 2) isWhat = true;  // 2 is prime
        else if (number % 2 == 0) isWhat = false;  // Even numbers > 2 are not prime
        else {
            for (auto j = 3; j <= sqrt(number); j += 2) {  // Only check odd numbers
                if (number % j == 0) {
                    isWhat = false;
                    break;  // Stop checking if we found a divisor
                }
            }
        }

        if (isWhat)
            cout << number << " is prime." << endl;
        else
            cout << number << " is not prime." << endl;
    }


}


