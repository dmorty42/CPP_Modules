//
// Created by Darkside Morty on 23/02/2022.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "iostream"
#include "string"

template<typename T>
class Array {
private:
    T* data;
    std::size_t len;
public:
    Array() {
        data = nullptr;
        len = 0;
    }
    Array(unsigned int i) {
        data = new T[i];
        len = i;
    }
    Array(const Array &a) {
        data = new T[a.len];
        for (unsigned int i = 0; i < a.len; ++i) {
            data[i] = a.data[i];
            len = a.len;
        }
    }
    Array& operator=(const Array &a) {
        data = new T[a.len];
        for (unsigned int i = 0; i < a.len; ++i) {
            data[i] = a.data[i];
            len = a.len;
        }
        return (*this);
    }
    T& operator[](int i) const {
        if ((std::size_t)i >= len || i < 0) {
            std::cout << "Size is " << len << "! Index " << i
            << " is out of range";
            throw std::out_of_range("!");
        }
        return (data[i]);
    }
    std::size_t size() const {
        return (len);
    }
    void displayData(std::size_t i) const {
        std::cout << data[i] << std::endl;
    }
};


#endif
