#include <iostream>
using namespace std;

// Function to find the maximum of three numbers by value
int Value(int a, int b, int c) {
   if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;  // If neither a nor b is largest, then c must be the largest
}

int main() {
    int x,y,z;
    cout << "Enter three numbers";
    cin >> x >> y >> z;

    cout << "The largest number is: " << Value(x, y, z) << endl;
    return 0;
}