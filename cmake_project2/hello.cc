#include<iostream>
#include"calculator.h"

int main()
{
    Calculator mCalculator{1,'+',1};
    std::cout << "Hello" << std::endl;
    std::cout << mCalculator.calculate() << std::endl;
    return 0;
}