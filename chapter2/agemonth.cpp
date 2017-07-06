#include <iostream>

int main(){
    int ageinyear;
    int ageinmonth;
    std::cout << "Please enter your age in year: " << std::endl;
    std::cin >> ageinyear;
    ageinmonth = ageinyear*12;
    std::cout << "The age in month is " << ageinmonth << std::endl;
}
