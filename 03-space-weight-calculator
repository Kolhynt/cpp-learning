#include <iostream>

int main() {
    // Variable declarations for weight and planet selection
    double earth_weight;
    int planets_number;  // Note: currently not used in calculations
    int planet;
    
    // Input Earth weight
    std::cout << "What's the weight on Earth? " << '\n';
    std::cin >> earth_weight;
    std::cout << "You said: " << earth_weight << '\n';
    std::cout << " ---- " << '\n';
    
    // Input number of planets (future feature)
    std::cout << "In how many planets do you want to fight? " << '\n';
    std::cin >> planets_number;
    std::cout << "You said: " << planets_number << '\n';
    std::cout << " ---- " << '\n';
    
    // Display available planets menu
    std::cout << "\nI have the following list:\n\n";
    std::cout << "1. Poppi  2. Alpha  3. Trinni\n";
    std::cout << "4. Canan  5. Gray  6. Boly\n";
    std::cout << " ---- " << '\n';
    
    // Planet selection
    std::cout << "Which one would you prefer? ";
    std::cin >> planet;
    
    // Weight calculation based on gravitational factors
    // Factors based on relative gravity compared to Earth
    if (planet == 1) {
        earth_weight = earth_weight * 0.78;  // Poppi - Reduced gravity
    } else if (planet == 2) {
        earth_weight = earth_weight * 0.39;  // Alpha - Very low gravity  
    } else if (planet == 3) {
        earth_weight = earth_weight * 2.65;  // Trinni - High gravity
    } else if (planet == 4) {
        earth_weight = earth_weight * 1.17;  // Canan - Earth-like gravity
    } else if (planet == 5) {
        earth_weight = earth_weight * 1.05;  // Gray - Slightly higher gravity
    } else if (planet == 6) {
        earth_weight = earth_weight * 1.23;  // Boly - Moderate gravity
    }
    
    // Output final result
    std::cout << "\nYour weight: " << earth_weight << '\n';
    
    return 0;
}
