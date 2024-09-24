#include <iostream>
#include <cctype> // I looked online and found this header and wanted to use it because it has inbuilt functions for strings in C++

int main() {
    const int MAX_SIZE = 1000; // I wanted the maximium size of 1000
    char input[MAX_SIZE];
    int vowel_count = 0;

    std::cout << "Enter a string (max " << MAX_SIZE - 1 << " characters): ";
    std::cin.getline(input, MAX_SIZE); //getline is the library function I am using to read my string 

    for (int i = 0; input[i] != '\0'; ++i) { // here is my loop, I used std::tolower() to map characters to all lower case
        switch (std::tolower(input[i])) { // Here I used a switch statement in my loop to to check if every character will be a vowel
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowel_count; // I found this method to be more efiicient because this way I wouldn't have to use multiple if-else statements
                break;
            default:
                break;
        }
    }

    std::cout << "Number of vowels in the input: " << vowel_count << std::endl;
    // I used std::cout in order to print out the last vowel count in the vowel_count to be more "clean code" and less garbage
    return 0;
}