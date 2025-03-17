#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool sumOfTwo( ) {

    auto myNumbers = std::vector<int> {1, 2, 3, 4, 6};
    auto input  = 0;
    std::cin>> input ;
    auto right = myNumbers.size() - 1;

    for(int left = 0; right = myNumbers.size() - 1; left < right) {
        auto sum = myNumbers[left] + myNumbers[right];

        if (sum == input) {
            std::cout << "the indice: " << left << " and " << right << " are the numbers that add up to " << input
                      << '\n';
            return true;
        } else if (sum < input) {
            left++;
        } else {
            right--;
        }

    }
    return false;


}
