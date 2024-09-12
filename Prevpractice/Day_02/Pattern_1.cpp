#include <stdint.h>
#include <iostream>
using namespace std;


void patternM(int n){
    for (int i = 1; i <= n; i++)
    {
        int space = 2 * n - (i * 2);
        //Numbers
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        };
        //Space
        for (int j = 1; j <= space ; j++)
        {
            std::cout << " ";
        }
        
        //Numbers
        for (int j = i; j >= 1; j--)
        {
            std::cout << j;
        };
        std::cout << endl;
        
    }
    
};

void pattern15(int n){
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << num;
            num = num + 1;
            std::cout << " ";
        }
        std::cout << endl;
        
    }
    
}

void pattern14(int n){
    // char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i ; ch++)
        {
            std::cout << ch;
            std::cout << " ";
        }
        
        std::cout << endl;
        
    }
    
}

void pattern16(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            std::cout << ch;
            std::cout << " ";
        }
        std::cout << endl;
        
    }
    
}

void pattern17(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            std::cout << ch;
            std::cout << " ";
        }
        std::cout << endl;
    }
    
}

void pattern18(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;
        //Space
        for (int j = 0; j < n - i - 1; j++)
        {
            std::cout << " ";
        }
        //Alphabet
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            std::cout << ch;
            if(j <= breakPoint) ch++;
            else ch--;
        }
        //Space
        for (int j = 0; j < n - i - 1; j++)
        {
            std::cout << " ";
        }
        std::cout << endl;
        
    }
    
}

void pattern19(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            std::cout << ch;
            std::cout << " ";
        }
        std::cout << endl;
        
    }
    
}

void pattern20(int n){
        int initialSpace = 0;
    for (int i = 0; i < n; i++)
    {
        //Star
        for (int j = 0; j < n - i; j++)
        {
            std::cout << "*";
        };
        // Space
        for (int j = 0  ; j <= initialSpace; j++)
        {
            std::cout << " ";
        };
        //Star
        for (int j = 0; j < n - i; j++)
        {
            std::cout << "*";
        };
        initialSpace = initialSpace + 2;
        std::cout << endl;
    }
    
}

void pattern21(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           std::cout << "*";
        };

        for (int j = 1; j < 2 * n - ( i * 2 ); j++)
        {
            std::cout << " ";
        };
        

        for (int j = 0; j <= i; j++)
        {
           std::cout << "*";
        };
        std::cout << endl;
    }
    
}


void pattern22(int n){
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if(i > n) star = 2 * n - i;
        for (int j = 1; j <= star; j++)
        {
            std::cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            std::cout << "*";
        }
        if(i < n) space -= 2;
        else space +=2;
        std::cout << endl;
        
    }
    
}

void pattern23(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n-1 || j == n-1)
            {
                std::cout << "#" << " ";
            }
            else{
                std::cout << "  ";
            }
        }
            std::cout << endl;
        
    }
    
}

void pattern24(int n){
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
    {
       int top = i;
       int left = j;
       int right = (2 * n - 2) - j;
       int down = (2 * n - 2) - i;
       std::cout << (n - min(min(top,down),min(left,right))) << " ";
    }
    std::cout << endl;
    }
    
}

int main()
{
    int n;

    std::cin >> n;

    pattern24(n);
}