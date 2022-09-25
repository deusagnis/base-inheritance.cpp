#include "third.h"
#include "iostream"

float getFirstPrivateNumber(First& first) {
    return first.getFirstNumber();
}

void setFirstPrivateNumber(First& first, float number){
    first.setFirstNumber(number);
}

void Third::inputNumbers() {
    float temp;
    std::cout << "Type first number: ";
    std::cin >> temp;
    setFirstPrivateNumber(*this, temp);

    std::cout << "Type second number: ";
    std::cin >> temp;
    this->setSecondNumber(temp);

    std::cout << "Type third number: ";
    std::cin >> temp;
    this->setThirdNumber(temp);
}

float Third::getFirstNumberFromThird() {
    return getFirstPrivateNumber(*this);
}

float Third::getSecondNumberFromThird() {
    return this->getSecondNumber();
}

void Third::setThirdNumber(float number) {
    this->thirdNumber = number;
}

float Third::getThirdNumber() {
    return this->thirdNumber;
}
