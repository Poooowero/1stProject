//
// Created by student on 18.07.2022.
//

#include "../headers/Shelf.h"

int Shelf::remainingSpace() {
    return shelfCapacity-howMuchBooksOnShelf;
}

Shelf::Shelf(unsigned int shelfCapacity, bookTypes booksType) : shelfCapacity(shelfCapacity), booksType(booksType) {}

bool Shelf::addBook() {
    if(this->remainingSpace()==0)
        return 0;
    unsigned short rY;
    unsigned short nOP;
    unsigned int bP;
    bool pb;
    std::string auth;
    std::string pubH;
    std::string bId;

    std::cout<<"Rok wydania: ";
    std::cin>>rY;
    std::cout<<"Liczba stron:";
    std::cin>>nOP;
    std::cout<<"Cena bazowa:";
    std::cin>>bP;
    std::cout<<"Miekka oprawa: (1.Tak/0.Nie)";
    std::cin>>pb;
    std::cout<<"Autor: ";
    std::cin>>auth;
    std::cout<<"Wydawca: ";
    std::cin>>pubH;
    std::time_t timeForId = std::time(nullptr);
    bId= std::to_string(timeForId)+ std::to_string(rY)+ std::to_string(nOP)+ std::to_string(pb);

    return 1;
}
