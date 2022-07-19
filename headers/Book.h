//
// Created by student on 18.07.2022.
//

#ifndef INC_1STPROJECT_BOOK_H
#define INC_1STPROJECT_BOOK_H
#include <iostream>
class Book {
public:
    Book(unsigned short releaseYear, unsigned short numberOfPages, unsigned int basePrice, float usersRating,
         bool paperback, bool isBorrowed, bool reservation, const std::string &borrowedBy, const std::string &author,
         const std::string &publishingHouse, const std::string &addDate, const std::string &addedBy,
         const std::string &reservedBy,unsigned int bookId, const std::string &title);

    ~Book();

private:
    unsigned short int releaseYear;
    unsigned short int numberOfPages;
    unsigned int basePrice;
    unsigned int bookId;
    float usersRating;
    bool paperback;
    bool isBorrowed;
    bool reservation;
    std::string borrowedBy;
    std::string author;
    std::string publishingHouse;
    std::string addDate;
    std::string addedBy;
    std::string reservedBy;
    std::string title;
};


#endif //INC_1STPROJECT_BOOK_H
