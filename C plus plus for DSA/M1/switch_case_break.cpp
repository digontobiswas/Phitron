#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x; // Takes an integer as input

    // Switch statement to check if the input integer is even or odd
    switch (x % 2)
    {
    case 0:
        cout << "Even";
        break;
    case 1:
        cout << "Odd";
        break;
    default:
        cout << "Invalid input"; // Default case for other situations
    }

    return 0;
}
