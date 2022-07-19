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
    using namespace std;
    string log;
    std::string passwd;
    interface.typeLogin();
    cin>>log;
    interface.typePasswd();
    cin>>passwd;
    //tutaj szukanie w pliku json poprawnego konta!!!!!!!!!!!!!!!!!!!!
}