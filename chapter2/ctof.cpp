#include <iostream>

double celtofah(double);

int main(){
    double cel;
    double fah;
    std::cout << "Enter a cel degree: " << std::endl;
    std::cin >> cel;
    fah = celtofah(cel);
    std::cout << "The degree for fah is " << fah << std::endl;  
}

double celtofah(double cel){
    double fah;
    fah = 1.8 * cel + 32;
    return fah;
}
