//
// Created by Darkside Morty on 24/02/2022.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"
#include "set"
#include "limits"

class Span {
private:
    std::multiset<int> data;
    unsigned int capacity;
public:
    Span();
    Span(unsigned int cap);
    Span(const Span& a);
    ~Span();
    Span& operator=(const Span& a);
    void addNumber(int a);
    int shortestSpan() const;
    int longestSpan() const;
class SpanIsFull : public std::exception {
    virtual const char * what() const throw();
};
class SizeIsSmall : public std::exception {
    virtual const char * what() const throw();
};
    template<typename T>
    void addNumber(const typename T::iterator it, const typename T::iterator ite) {
        typename T::iterator it1 = it;
        typename T::iterator ite1 = ite;
        for (unsigned int i = 0; i < capacity; ++i) {
            if (it1 != ite1)
                data.insert(*it1);
            else
                break;
            it1++;
        }
    }
};


#endif
