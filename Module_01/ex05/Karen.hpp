//
// Created by Darkside Morty on 1/31/22.
//

#ifndef KAREN_HPP
#define KAREN_HPP

# include <iostream>
# include <string>

class Karen {
private:
    void (Karen::*ptrFnc[5])(void);

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Karen();
    ~Karen();
    void complain(std::string level);
};

#endif
