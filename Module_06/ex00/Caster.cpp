//
// Created by dmorty on 15.02.2022.
//

#include "Caster.hpp"

Caster::Caster(std::string value) : value(value) {
    type = findType();
    if (type == CHAR)
        c = value[0];
    if (type != SPECIAL)
        num = std::atof(value.c_str());
    std::cout << type << std::endl;
}

Caster::~Caster() {}

int Caster::findType() const {
    if (isChar())
        return (CHAR);
    else if (isInt())
        return (INT);
    else if (isFloat())
        return (FLOAT);
    else if (isDouble())
        return (DOUBLE);
    else if (isSpecial())
        return (SPECIAL);
    return (NONE);
}

bool Caster::isChar() const {
    return (value.length() == 1 && isprint(value[0]));
}

bool Caster::isInt() const {
    if (value.find('.') == std::string::npos)
        return (true);
    return (false);
}

bool Caster::isFloat() const {
    if (value.length() > 1 && value.back() == 'f')
        return (true);
    return (false);
}

bool Caster::isDouble() const {
    if (value.length() > 1 && value.find('.') != std::string::npos)
        return (true);
    return (false);
}

bool Caster::isSpecial() const {
    std::string temp[] = {"-inff", "+inff", "nanf",
                          "-inf", "+inf", "nan"};
    if (temp->find(value) != std::string::npos)
        return (true);
    return (false);
}

void Caster::printChar() const {
    std::cout << "char: ";
    if (type == CHAR)
        std::cout << c;
    else if (type == SPECIAL)
        std::cout << "impossible";
    else if (!isprint(static_cast<int>(num)))
        std::cout << "Non displayable";
    else if (type == NONE)
        std::cout << "Bad argument!";
    else
        std::cout << static_cast<char>(num);
    std::cout << std::endl;
}

void Caster::printInt() const {
    std::cout << "int: ";
    if (type == INT)
        std::cout << num << std::endl;
    else if (type == SPECIAL || num > INT32_MAX || num < INT32_MIN)
        std::cout << "impossible";
    else if (type == NONE)
        std::cout << "Bad argument!";
    else
        std::cout << static_cast<int>(num);
    std::cout << std::endl;
}

bool Caster::isFloatSpec() const {
    std::string temp[] = {"nanf", "+inff", "-inff"};
    for (int i = 0; i < 3; ++i) {
        if (!value.compare(temp[i]))
            return (true);
    }
    return (false);
}

void Caster::printFloat() const {
    std::cout << "float: ";
    if (type == FLOAT)
        std::cout << num << 'f' << std::endl;
    else if (type == SPECIAL) {
        if (isFloatSpec())
            std::cout << value;
        else
            std::cout << value << 'f';
    }
    else if (type == NONE)
        std::cout << "Bad argument!";
    else
        std::cout << static_cast<float>(num);
    std::cout << std::endl;
}

void Caster::printDouble() {
    std::cout << "double: ";
    if (type == DOUBLE)
        std::cout << num << std::endl;
    else if (type == SPECIAL) {
        if (isFloatSpec())
            value.erase(value.length() - 1);
        std::cout << value;
    }
    else if (type == NONE)
        std::cout << "Bad argument!";
    else
        std::cout << static_cast<double>(num);
    std::cout << std::endl;
}

