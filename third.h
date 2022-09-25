#ifndef THIRD_H
#define THIRD_H

#include "second.h"

class Third: public Second
{
public:
    float thirdNumber;

    void setThirdNumber(float);
    float getThirdNumber();

    float getSecondNumberFromThird();
    float getFirstNumberFromThird();

    void inputNumbers();
};

#endif // THIRD_H
