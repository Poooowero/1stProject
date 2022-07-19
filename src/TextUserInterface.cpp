//
// Created by student on 19.07.2022.
//

#include "../headers/TextUserInterface.h"

void TextUserInterface::loggingMenu() {
    std::cout << "------ WELCOME IN LIBRARY ------" << std::endl;
    std::cout << "1.Log in" << std::endl;
    std::cout << "2.Sign up" << std::endl;
    std::cout << "3.Exit" << std::endl;
}

void TextUserInterface::typeLogin() {
    std::cout<<"Type your login: ";
}

void TextUserInterface::typePasswd() {
    std::cout<<"Type your password: ";
}

TextUserInterface::TextUserInterface() {}

TextUserInterface::~TextUserInterface() {

}
