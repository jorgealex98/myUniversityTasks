#include <iostream>
#include <vector>
#include <algorithm>

void runBasicStringOperations();
void runDigitTransformation();
void runComparing();
void runMigratingToJava();


auto main () -> int  {

    /*auto vec = std::vector<int>{3, 5, 1, 4, 2, 0};
    auto middle =  vec.begin() + vec.size() / 2;

    //first half sort

    std::ranges::sort(vec.begin(), middle);
    // reverse
    std::ranges::reverse(middle, vec.end());

    for(auto element : vec){
        std::cout << element << " ";
    }

    std::ranges::sort(vec.begin(), middle);
    std::ranges::sort(middle, vec.end());

    auto bothHalves = std::ranges::equal(vec.begin(),middle,middle,vec.end());

    std::cout << bothHalves;

    for(auto iter = vec.begin(); iter != vec.end(); iter++){
        std::cout << *iter ;
    }*/
    auto numbers = std::vector<int>(5,1);

    auto duplicates = std::ranges::unique(numbers.begin(), numbers.end());

    numbers.erase(duplicates.begin(), duplicates.end());

    for(auto number : numbers){
        std::cout << number;
    }





}
