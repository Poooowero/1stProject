//
// Created by student on 19.07.2022.
//

#ifndef INC_1STPROJECT_LOGGINGSCREEN_H
#define INC_1STPROJECT_LOGGINGSCREEN_H

#include <iostream>
#include "TextUserInterface.h"
class LoggingScreen {

public:
    int menu();
    bool loggingIn();

private:
    TextUserInterface interface;
};


#endif //INC_1STPROJECT_LOGGINGSCREEN_H
