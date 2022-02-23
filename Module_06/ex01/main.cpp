//
// Created by Darkside Morty on 23/02/2022.
//

#include "main.hpp"

uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

std::ostream& operator<<(std::ostream& out, const Data &a) {
    out << "Name is " << a.name << "! Age is " << a.age
        << "! Profession is " << a.profession << "!";
    return (out);
}

int main() {
    Data bob;
    bob.name = "Bob";
    bob.age = 33;
    bob.profession = "Manager";
    uintptr_t raw;
    Data *ptr;
    std::cout << bob << std::endl;
    raw = serialize(&bob);
    std::cout << "Raw = " << raw << std::endl;
    ptr = deserialize(raw);
    std::cout << *ptr << std::endl;
    std::cout << "Pointer of Bob = " << &bob << std::endl;
    std::cout << "Pointer of ptr = " << ptr << std::endl;
}
