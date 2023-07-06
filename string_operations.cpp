#include <iostream>
#include "transformations.h"

int main() {
    std::string text = "hello, world!";

    std::string capitalizedText = Transformations::capitalize(text);
    std::cout << "Capitalized text: " << capitalizedText << std::endl;

    std::string reversedText = Transformations::reverse(text);
    std::cout << "Reversed text: " << reversedText << std::endl;

    return 0;
}
