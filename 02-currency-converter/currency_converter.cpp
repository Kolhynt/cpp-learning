#include <iostream>  

int main() {

double pesos;  
double reais;
double soles;
double dollars;

std::cout << "Enter number of Colombian Pesos: " << '\n'; 
std::cin >> pesos;
    
std::cout << "Enter number of Brazilian Reais: " << '\n'; 
std::cin >> reais;

std::cout << "Enter number of Peruvian Soles : " << '\n'; 
std::cin >> soles;

// Exchange rates to USD (updated at 22/06/2025)
// Pesos conversion rate: 0,00024
// Reais conversion rate: 0.18
// Soles conversion rate: 0.28

// Calculation: Convert all currencies to USD and total amount
dollars = 0.00024 * pesos + 0.18 * reais + 0.28 * soles;

std::cout << "Total USD = $" << dollars << '\n';

return 0;

}
