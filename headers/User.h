//
// Created by student on 19.07.2022.
//

#ifndef INC_1STPROJECT_USER_H
#define INC_1STPROJECT_USER_H

#include <iostream>
#include "typedefs.h"
#include "Library.h"
class User {
public:
    virtual bool borrwoBook(bookPtr)=0;


private:
    unsigned int userId;
    std::string firstName;
    std::string secondName;
    int borrowedBooksCounter;
};


#endif //INC_1STPROJECT_USER_H
