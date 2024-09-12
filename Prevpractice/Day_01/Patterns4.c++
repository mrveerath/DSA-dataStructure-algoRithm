#include <iostream>
using namespace std;

#include <iostream>

void alphabetPyramid(int noOfRow) {
    for (int i = 1; i <= noOfRow; i++) {
        // Print leading spaces
        for (int j = 0; j < noOfRow - i; j++) {
            std::cout << " ";
        }

        char ch = 'A';
        int breakPoint = i;  // Correct breakpoint calculation

        // Print characters
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << ch;
            if (j < breakPoint) ch++; 
            else ch--;  // Correct this to avoid going out of range of alphabets
        }

        // Print trailing spaces
        for (int j = 0; j < noOfRow - i; j++) {
            std::cout << " ";
        }

        std::cout << std::endl;  // Changed 'endl' to 'std::endl' for consistency
    }
}


int main(){
    int n;
    std::cin >> n;
    alphabetPyramid(n);
}