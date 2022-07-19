//
// Created by student on 19.07.2022.
//

#include "../headers/LoggingScreen.h"

int LoggingScreen::menu() {
    int a;
    interface.loggingMenu();
    std::cin>>a;
    return a;
}

bool LoggingScreen::loggingIn() {
    std::string log;
    std::string passwd;
    interface.typeLogin();
    std::cin>>log;
    interface.typePasswd();
    std::cin>>passwd;
    //tutaj szukanie w pliku json poprawnego konta!!!!!!!!!!!!!!!!!!!!
}

bool LoggingScreen::signUp() {
    std::string name;
    std::string secondName;
    std::string login;
    std::string passwd;
    std::string repasswd;
    interface.registration();
    interface.typeYourName();
    std::cin>>name;
    interface.typeYourSecondName();
    std::cin>>secondName;
    interface.createYourLogin();
    std::cin>>login;


}