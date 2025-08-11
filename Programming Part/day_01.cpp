#include <iostream>
using namespace std;

struct Rectangle
{
    int height;
    int breadth;
};

int main()
{
    int theArr[5];

    // Assign values
    theArr[0] = 1;
    theArr[1] = 2;
    theArr[2] = 3;
    theArr[3] = 4;
    theArr[4] = 5;

    // Print values
    for (int i = 0; i < 5; i++)
    {
        printf("%d. %d\n", i, theArr[i]);
    }

    struct Rectangle r1;


    malloc;

    r1.height = 4;
    r1.breadth = 12;

    std::cout<<"The area of rectangle r1 is "<<r1.height * r1.breadth<<std::endl;


    // Size in bytes
    printf("The Size Of The Array Is : %lu\n", sizeof(theArr));

    // Total elements
    int size = sizeof(theArr) / sizeof(theArr[0]);
    printf("Total Number Of Elements: %d\n", size);

    cout << "Hello World" << endl;

    return 0;
}
