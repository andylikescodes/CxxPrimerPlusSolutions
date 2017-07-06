#include <iostream>

int main(){
    int furlong;
    int yard;
    std::cout << "What is the furlong you are asking?" << std::endl;
    std::cin >> furlong;
    yard = furlong * 220;
    std::cout << "The distance for " << furlong << "furlong is " << yard << "yards." << std::endl;

}
