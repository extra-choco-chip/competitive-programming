#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Enter value of side a: " << '\n';
    std::cin >> a;

    std::cout << "Enter value of side b: " << '\n';
    std::cin >> b;

    c=sqrt(pow(a,2)+pow(b,2));
    std::cout << "Hypotenuse length c: " << c;

    return 0;
}