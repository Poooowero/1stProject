//
// Created by student on 18.07.2022.
//

#ifndef INC_1STPROJECT_TYPEDEFS_H
#define INC_1STPROJECT_TYPEDEFS_H
#include <memory>
#include <iostream>
class Book;
class Shelf;
class BookShelf;

typedef std::shared_ptr<Book> bookPtr;
typedef std::shared_ptr<BookShelf> bookShelfPtr;
typedef std::shared_ptr<Shelf> shelfPtr;



#endif //INC_1STPROJECT_TYPEDEFS_H
