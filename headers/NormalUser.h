//
// Created by student on 19.07.2022.
//

#ifndef INC_1STPROJECT_NORMALUSER_H
#define INC_1STPROJECT_NORMALUSER_H

#include <iostream>
#include "User.h"

class NormalUser: public User {
public:
    bool borrowBook(bookPtr);
private:
    int borrowLimit;
};


#endif //INC_1STPROJECT_NORMALUSER_H
