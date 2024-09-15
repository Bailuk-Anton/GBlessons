#include <iostream>
#include "classforsecondlesson.h"

ClassForSecondLesson::ClassForSecondLesson()
{

}

void ClassForSecondLesson::task1()
{
    //Задача 1. Симулятор маршрутки

    unsigned int passangerCounter = 0, price = 20;

    for(int i = 0; i < 4; i++){
        int passanger = 0, in, out;
        std::cout<<"Прибываем на остановку «Улица программистов». В салоне пассажиров:";
        std::cin >> passanger;

        std::cout<<"Сколько пассажиров вышло на остановке? ";
        std::cin >> out;
        if(out<0)out = 0;

        if(out>passanger){
            std::cout<<"Вышло больше людей, чем находится в салоне.\n";
            passanger = 0;
        }

        std::cout<<"Сколько пассажиров зашло на остановке? ";
        std::cin >> in;
        if(in<0)in = 0;

        passanger = passanger - out;
        if(passanger<0)passanger = 0;

        passanger += in;

        std::cout<<"Отправляемся с остановки «Улица программистов». В салоне пассажиров: "<< passanger << "\n";
        std::cout<<"-----------Едем---------\n";
        std::cout<<"Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: "<< passanger << "\n";

        divider();

        passangerCounter += in;
    }

    std::cout<<"Всего заработали: "<< passangerCounter * price <<"\n";
    std::cout<<"Зарплата водителя: "<< passangerCounter * price * 0.25<<"\n";
    std::cout<<"Топливо: "<< passangerCounter * price * 0.2<<"\n";
    std::cout<<"Налоги: "<< passangerCounter * price * 0.2<<"\n";
    std::cout<<"Ремонт машины: "<< passangerCounter * price * 0.2<<"\n";
    std::cout<<"Доход: "<< passangerCounter * price * ( 1 - 0.85 )<<"\n";


}

void ClassForSecondLesson::task2()
{
    int a = 42;
    int b = 153;

    std::cout<<"a = " << a << ", b = " << b <<"\n";

    int tmp = a;
    a=b;
    b=a;

    std::cout<<"a = " << a << ", b = " << b <<"\n";
    divider();
}

void ClassForSecondLesson::task3()
{
    std::cout<<"Ответ в см : "<< 100 +  50 * 2.5 - 20 * 2<<'\n';
    divider();
}

void ClassForSecondLesson::task4()
{
    int a = 42;
    int b = 153;

    std::cout<<"a = " << a << ", b = " << b <<"\n";

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout<<"a = " << a << ", b = " << b <<"\n";
    divider();
}

void ClassForSecondLesson::divider()
{
    std::cout<<"\n\n======================================\n\n";
}

void ClassForSecondLesson::run()
{
    task1();
    task2();
    task3();
    task4();
}
