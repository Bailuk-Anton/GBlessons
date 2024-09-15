#include "classforfirstlesson.h"
#include "classforsecondlesson.h"
#include <iostream>

int main(int argc, char *argv[])
{
    std::string str = "";
    while(true){
        system("clear");
        std::cin >> str;
        if(str == "1")ClassForFirstLesson::run();
        if(str == "2")ClassForSecondLesson::run();
        if(str == "exit")return 0;
    }

    return 0;
}
