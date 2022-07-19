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

void TextUserInterface::registration() {
    std::cout<<"------  REGISTRATION  ------"<<std::endl;
}

void TextUserInterface::typeYourName() {
    std::cout<<"Type your name: ";
}

void TextUserInterface::typeYourSecondName() {
    std::cout<<"Type your second name: ";
}

void TextUserInterface::createYourLogin() {
    std::cout<<"Create your login: ";
}

void TextUserInterface::createYourPasswd() {
    std::cout<<"Please, create new password: ";
}

void TextUserInterface::typeYourPasswdAgain() {
    std::cout<<"Please, type your password again: ";
}

TextUserInterface::TextUserInterface() {}

TextUserInterface::~TextUserInterface() {

}
