//
// Created by student on 18.07.2022.
//

#include "../headers/Book.h"



Book::~Book() {

}

Book::Book(unsigned short releaseYear, unsigned short numberOfPages, unsigned int basePrice, float usersRating,
           bool paperback, bool isBorrowed, bool reservation, const std::string &borrowedBy, const std::string &author,
           const std::string &publishingHouse, const std::string &addDate, const std::string &addedBy,
           const std::string &reservedBy, unsigned int bookId, const std::string &title) : releaseYear(releaseYear), numberOfPages(numberOfPages),
                                            basePrice(basePrice), usersRating(usersRating), paperback(paperback),
                                            isBorrowed(isBorrowed), reservation(reservation), borrowedBy(borrowedBy),
                                            author(author), publishingHouse(publishingHouse), addDate(addDate),
                                            addedBy(addedBy), reservedBy(reservedBy), bookId(bookId), title(title) {}
