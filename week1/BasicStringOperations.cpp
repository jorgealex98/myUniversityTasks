#include <iostream>
#include <string>

#include <algorithm>
 void runBasicStringOperations(){

    auto word = std::string();

    std::cout << "Write a word: ";

    std::cin >> word  ;
     std::cout << '\n';
     std::cout << "First letter: "<< word[0];
     std::cout << '\n';
     std::cout << "Last letter"<< "\'" <<word[word.size() -1]<< "\'";
     std::cout << '\n';
     std::cout << "Number of letters"<< word.size();
     std::cout << '\n';
     std::cout << "middle word"<< " \""<< word[word.size() / 2] << "\"" ;
     std::cout << '\n';
     std::cout << "in brackets" << "[" << word << "]";

     std::ranges::sort(word);
      for ( auto element: word){
          std::cout << element;
      }

 }

