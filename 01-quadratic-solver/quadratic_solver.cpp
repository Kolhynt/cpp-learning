#include <iostream>
#include <cmath> 

int main() {    

double a; 
double b;   
double c;      

std::cout << "Enter a:" << '\n';   
std::cin >> a;   
std::cout << " ---- " << '\n';   
std::cout << "Enter b:" << '\n';   
std::cin >> b;   
std::cout << " ---- " << '\n';   
std::cout << "Enter c:" << '\n';   
std::cin >> c;   
std::cout << " ---- " << '\n';    

double root1 = (-b + std::sqrt(bb - 4ac)) / (2a);   
double root2 = (-b - std::sqrt(bb - 4ac)) / (2a);    

std::cout << "Root 1 is " << root1 << '\n';   
std::cout << "Root 2 is " << root2 << '\n';  

return 0;

}
