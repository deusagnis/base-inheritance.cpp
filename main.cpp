#include <iostream>
#include "third.h"

using namespace std;

int main()
{
    Third* third = new Third();

    third->inputNumbers();

    cout << "\nSum: " << third->getFirstNumberFromThird() + third->getSecondNumberFromThird() + third->getThirdNumber() << endl;
    return 0;
}
