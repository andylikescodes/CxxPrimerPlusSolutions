#include <iostream>

void mice();
void run();

int main(){
    mice();
    mice();
    run(); 
    run();   
}

void mice(){
    std::cout << "Three blind mice" << std::endl;
}

void run(){
    std::cout << "See how they run" << std::endl;

}
