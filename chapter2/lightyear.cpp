#include <iostream>

double lytoau(double);

int main(){
    double lightyears;
    double au;
    std::cout << "Enter the number of light years: ";
    std::cin >> lightyears;
    au = lytoau(lightyears);
    std::cout << lightyears << "light years = " << au << " astronomical units" << std::endl;
}

double lytoau(double lightyears){
    double au;
    au = lightyears * 63240;
    return au;
}
