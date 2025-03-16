#include <iostream>
#include <string>


void runDigitTransformation(){

    /*auto number = 0;


    std::cin >> number;



        std::cout << " Enter a number between \"0 and 9\" ";

        switch (number) {
            case 0:
                std::cout << "zero";
                break;
            case 1:
                std::cout << "one";
                break;
            case 2:
                std::cout << "two";
                break;
            case 3:
                std::cout << "three";
                break;
            case 4:
                std::cout << "four";
                break;
            case 5:
                std::cout << "five";
                break;
            case 6:
                std::cout << "six";
                break;
            case 7:
                std::cout << "seven";
                break;
            case 8:
                std::cout << "eight";
                break;
            case 9:
                std::cout << "nine";
                break;
            default:
                std::cout << "Something went wrong!";
        }*/

        std::string input;
        std::cout << "Enter a number between zero and nine: ";
        std::cin >> input;

        if (input == "zero") {
            std::cout << "0";
        } else if (input == "one") {
            std::cout << "1";
        } else if (input == "two") {
            std::cout << "2";
        } else if (input == "three") {
            std::cout << "3";
        } else if (input == "four") {
            std::cout << "4";
        } else if (input == "five") {
            std::cout << "5";
        } else if (input == "six") {
            std::cout << "6";
        } else if (input == "seven") {
            std::cout << "7";
        } else if (input == "eight") {
            std::cout << "8";
        } else if (input == "nine") {
            std::cout << "9";
        } else {
            std::cout << "Incorrect input! Try again by restarting the program.";
        }//end of if else statement







}
