#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert (const std::string& str);
};

#endif