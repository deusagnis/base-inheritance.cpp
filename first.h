#ifndef FIRST_H
#define FIRST_H

class First
{
    friend float getFirstPrivateNumber(First&);
    friend void setFirstPrivateNumber(First&, float);
private:
    float firstNumber;

    void setFirstNumber(float);
    float getFirstNumber();
};

#endif // FIRST_H
