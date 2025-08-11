#include <iostream>
#include <climits> // For INT_MIN
#include <algorithm> // For std::swap




// Main function to run all tests
int main() {
    testFindLargestAndSmallest();
    std::cout << "------------------------" << std::endl;
    
    testReverseArray();
    std::cout << "------------------------" << std::endl;
    
    testArraySorting();
    std::cout << "------------------------" << std::endl;
    
    testFindSecondLargest();
    
    return 0;
}
