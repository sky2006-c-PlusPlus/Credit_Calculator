#include <iostream>

int main() {
    int credit;
    std::cout << "Enter your current Credit: ";
    std::cin >> credit; // Read user input for current credit

    int neg_credit;
    std::cout << "Enter the amount of Credit to subtract: ";
    std::cin >> neg_credit; // Read user input for credit to subtract

    int new_credit = credit - neg_credit; // Calculate the new credit value

    std::cout << "Your new Credit is: " << new_credit << std::endl; // Display the new credit value

    return 0;
}