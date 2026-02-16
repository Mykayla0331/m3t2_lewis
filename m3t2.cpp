// CSC 134
// M3T2 - CRAPS
// MYKAYLA LEWIS
// 2/16/26
// START THE GAME OF CRAPS

#include <iostream>
#include <cstdlib> // for random
#include <ctime> // for time
using namespace std;

// Function declarations
// (tell the program what the functions will be)
int roll();

// main() goes here
int main () {
    // seed the random number generator
    int seed = time(0);
    srand(seed);

    // roll two dice and show the results 
    int first, second, total;
    first = roll();
    second = roll ();
    total = first + second;
    cout << "You rolled a " << first << " + " << second << " = " << total << endl;
    return 0;
}

// fuction definitions 
// (actually write the entire function)

int roll() {
    // rand() gives a large random number
    // % 6 divides by six and keeps the remainder
    // finally, add 1 so it's 1 to 6, not zero to five
    int my_roll = (rand() % 6) + 1;
    return my_roll;
}