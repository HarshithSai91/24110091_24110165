#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randomfuncs.h"

using namespace std;

int main() {
    srand(time(0));

    cout << "Random Functions Demo" << endl;

    // Flip a coin
    if (flipCoin() == 0)
        cout << "Coin flip: Tails" << endl;
    else
        cout << "Coin flip: Heads" << endl;

    // Roll a 6-sided die
    cout << "6-sided die: " << rollSixSidedDie() << endl;

    // Roll a 10-sided die
    cout << "10-sided die: " << rollTenSidedDie() << endl;

    return 0;
}
