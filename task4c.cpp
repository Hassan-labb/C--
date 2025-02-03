#include <iostream>
using namespace std;

// Function to find the maximum of three numbers by reference
int Reference(int& a, int& b, int& c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main() {
    int x = 10, y = 20, z = 30;

    // Call the function with the numbers directly
    cout << "The largest number is: " << Reference(x, y, z) << endl;

    return 0;
}