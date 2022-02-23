//
// Created by Darkside Morty on 24/02/2022.
//

#include "Span.hpp"
#include "vector"

int main()
//{
//    Span sp = Span(5);
//    sp.addNumber(6);
//    sp.addNumber(3);
//    sp.addNumber(11);
//    sp.addNumber(9);
//    sp.addNumber(17);
//    sp.addNumber(13);
//    std::cout << sp.shortestSpan() << std::endl;
//    std::cout << sp.longestSpan() << std::endl;
//    return 0;
//}

{
    Span				span(100);
    std::vector<int> vector;

    for (std::size_t i = 0; i < 100; i++) {
        vector.push_back(rand() % 1000);
    }
    span.addNumber< std::vector<int> >(vector.begin(), vector.end());
    std::cout << span.shortestSpan() << std::endl;
    std::cout << span.longestSpan() << std::endl;
}
