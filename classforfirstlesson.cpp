#include "classforfirstlesson.h"

ClassForFirstLesson::ClassForFirstLesson()
{

}

void ClassForFirstLesson::task1()
{
    //Улучшаем гонщика
    int lap = 4;
    int engine = 254;
    int wheels = 93;
    int steerinWheel = 49;
    int wind = 21;
    int rain = 17;
    int speed = engine + wheels + steerinWheel - wind - rain;
    std::cout << "=================\n";
    std::cout << "Супер гонки. Круг " << lap << "\n";
    std::cout << "===============\n";
    std::cout << "Шумахер (" << speed << ")\n";
    std::cout << "=================\n";
    std::cout << "Водитель: Шумахер\n";
    std::cout << "Скорость: " << speed << "\n";
    std::cout << "-------------------\n";
    std::cout << "Оснащение\n";
    std::cout << "Двигатель: +" << engine << "\n";
    std::cout << "Колеса: +" << wheels << "\n";
    std::cout << "Руль: +" << steerinWheel << "\n";
    std::cout << "-------------------\n";
    std::cout << "Действия плохой погоды\n";
    std::cout << "Ветер: -" << wind << "\n";
    std::cout << "Дождь: -" << rain << "\n";

    divider();
}

void ClassForFirstLesson::task2()
{
    //Калькулятор стоимости товара
    unsigned int value = 400, delivery = 50, sale = 70;
    std::cout << "Стоимость товара: "<< value <<"\n";
    std::cout << "Стоимость доставки: "<< delivery <<"\n";
    std::cout << "Скидка: "<< sale <<"\n";
    std::cout << "Стоимость товара с учетом доставки и скидки : " << value + delivery - sale << "\n";
    divider();
}

void ClassForFirstLesson::task3()
{
    unsigned int stuffWork = 480, clientTime = 2, execTime = 4;
    std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
    std::cout << "Введите длительность смены в минутах: "<< stuffWork <<"\n";
    std::cout << "Сколько минут клиент делает заказ? 2"<< clientTime <<"\n";
    std::cout << "Сколько минут кассир собирает заказ? 4 "<< execTime <<"\n";
    if(stuffWork/(clientTime*execTime) > 1){
        std::cout << "За смену длиной "<< stuffWork <<"минут кассир успеет обслужить"<< stuffWork/(clientTime*execTime) <<"клиентов" << "\n";
    }
    else{
        std::cout << "За смену длиной "<< stuffWork <<"минут кассир успеет обслужить"<< stuffWork/(clientTime*execTime) <<"клиентa" << "\n";

    }
    divider();
}

void ClassForFirstLesson::task4()
{
    //
    std::cout << "Приветствуем вас в калькуляторе квартплаты!\n";
    unsigned int value = 4000000, entrance = 10, apartment = 40;
    std::cout << "Введите сумму, указанную в квитанции:"<< value <<"\n";
    std::cout << "Сколько подъездов в вашем доме?"<< entrance <<"\n";
    std::cout << "Сколько квартир в каждом подъезде?"<< apartment <<"\n";
    std::cout << "----Считаем-----\n";
    std::cout << "Каждая квартира должна платить по " << value/(entrance*apartment) <<"\n";
}

void ClassForFirstLesson::divider()
{
    std::cout<<"\n\n======================================\n\n";
}

void ClassForFirstLesson::run()
{
    std::cout<<"\nУрок 2. Целочисленные переменные. Данные и вычисления.\n";
    task1();
    task2();
    task3();
    task4();
    std::string str = "";
    std::cin >> str;
}
