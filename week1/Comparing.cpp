#include <iostream>
#include <vector>
#include<algorithm>
#include <string>

void runComparing(){

    auto number = std::vector<int>();

    std::cout <<"Write 10 numbers: ";

    for (auto i = 0; i < 10 ; i ++) {

        auto val = 0;
        std::cin >> val;
        number.push_back(val);
    }

    for (auto element : number) {
        std::cout << element << " ";
    }

    auto sure = true ;

    for (auto i = 0; i < number.size()/2; i ++) {
        if (number[i] != number[(number.size()/2) + i]) {
            sure = false;
            break;
        }
    }
    if ( sure == true){
        std::cout << "The first half of the array is equal to the second half of the array";
    }else
        std::cout << "The first half of the array is not equal to the second half of the array";









}