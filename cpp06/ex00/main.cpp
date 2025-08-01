#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Please enter a string" << std::endl;
        return 1;
    }

    ScalarConverter::convert(argv[1]);
    return 0;
}