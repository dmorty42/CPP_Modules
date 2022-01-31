//
// Created by Darkside Morty on 1/31/22.
//

#include "Karen.hpp"

Karen::Karen() {
    ptrFnc[0] = &Karen::debug;
    ptrFnc[1] = &Karen::error;
    ptrFnc[2] = &Karen::info;
    ptrFnc[3] = &Karen::warning;
    std::cout << "Karen is online" << std::endl;
}

Karen::~Karen() {
    std::cout << "Karen is going offline" << std::endl;
}

void Karen::debug(void) {
    std::cout << "I love having extra bacon for my "
                 "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
                 << std::endl;
}

void Karen::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}

void Karen::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
                 "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
                 << std::endl;
}

void Karen::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                 "years whereas you started working here since last month."
                 << std::endl;
}

void Karen::complain(std::string level) {
    std::string array[4] = {"DEBUG", "ERROR",
                            "INFO", "WARNING"};
    for (int i = 0; i < 4; i++) {
        if (!array[i].compare(level)) {
            (this->*ptrFnc[i])();
            break;
        }
    }
}