//
// Created by dmorty on 15.02.2022.
//

#ifndef CASTER_HPP
#define CASTER_HPP

#include "iostream"
#include "string"

enum types{
    INVALID,
    CHAR,
    INT,
    FLOAT,
    DOUBLE
};

class Caster {
private:
    std::string value;
    int type;
    char c;
    int i;
    float f;
    double d;
public:
    Caster(std::string value);
    Caster(const Caster &a);
    Caster& operator=(const Caster& a);
    ~Caster();
    int findType() const;
};


#endif
