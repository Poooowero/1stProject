//
// Created by student on 19.07.2022.
//

#ifndef INC_1STPROJECT_TEXTUSERINTERFACE_H
#define INC_1STPROJECT_TEXTUSERINTERFACE_H

#include <iostream>
class TextUserInterface {
public:
    void loggingMenu();
    void typeLogin();
    void typePasswd();
    void registration();
    void typeYourName();
    void typeYourSecondName();
    void createYourLogin();
    void createYourPasswd();
    void typeYourPasswdAgain();
    TextUserInterface();

    virtual ~TextUserInterface();
};


#endif //INC_1STPROJECT_TEXTUSERINTERFACE_H
