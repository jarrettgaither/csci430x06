#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> animalFacts = {
        "A group of flamingos is called a 'flamboyance'.",
        "Octopuses have three hearts.",
        "A snail can sleep for three years.",
        "Elephants are the only animals that can't jump.",
        "A rhinoceros' horn is made of hair."
    };

    std::cout << "Fun Animal Facts:" << std::endl;
    for (const auto& fact : animalFacts) {
        std::cout << "- " << fact << std::endl;
    }

    return 0;
}