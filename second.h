#ifndef SECOND_H
#define SECOND_H

#include "first.h"

class Second: public First
{
protected:
    float secondNumber;

    void setSecondNumber(float);
    float getSecondNumber();
};

#endif // SECOND_H
