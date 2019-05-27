/*
 * This project uses recursion to make
 * n number of "<" and ">" evenly divided
 * with one "*" in the middle if n is odd
 * or two "*" if n is even.
 * Taken from Stanford CS 106B lab exercises
 * Glenn Langdon
*/

#include <string>
#include "console.h"
#include "simpio.h" // getLine()
using namespace std;
/*
 * Function prototypes
 */

void zigzag(int n);
void mystery1(int x, int y);

int main() {
    cout << "Welcome to Zigzag" << endl;
    cout << "This program will produce a ziazag structure the length" << endl;
    cout << "of the number of integers entered" << endl;
    cout << "Enter '0' to end program" << endl;
    cout << endl;



    while (true){
        int num = getInteger("Please enter an integer:");
        if (num == 0) break;
        else {
            zigzag(num);
            cout << endl;
        }
    }
    return 0;
}
void zigzag(int n){
    if (n == 1) {
        cout << "*";
    }
    else if (n == 2) {
        cout << "**";
    }
    else {
        cout << "<";
        zigzag(n - 2);
        cout << ">";
    }
}

