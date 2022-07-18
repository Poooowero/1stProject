//
// Created by student on 18.07.2022.
//

#ifndef INC_1STPROJECT_SHELF_H
#define INC_1STPROJECT_SHELF_H
#include <iostream>
#include <vector>
#include <ctime>
#include "typedefs.h"
#include "BookTypes.h"
#include "Book.h"
class Shelf {
public:
    Shelf(unsigned int shelfCapacity, bookTypes booksType);

    int remainingSpace();

    bool addBook();

private:
    unsigned int shelfCapacity;
    unsigned int howMuchBooksOnShelf;
    bookTypes booksType;
    std::vector<bookPtr> booksOnTheShelf;
};


#endif //INC_1STPROJECT_SHELF_H
