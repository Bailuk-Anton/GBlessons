#include "classforthirdlesson.h"

void ClassForThirdLesson::task1()
{
    int a,b;
    std::cin >> a;
    std::cin >> b;

    if(a>b){
        std::cout<<"Наименьшее число: "<<b;
    }
    else if(b>a){
        std::cout<<"Наименьшее число: "<<a;
    }
    else if(a==b){
        std::cout<<"Числа равны!";
    }

    divider();
}

void ClassForThirdLesson::task2()
{
    int a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout<<"---Проверяем---";

    (a+b == c)?std::cout<<"Верно!":std::cout<<"Не верно!";

    divider();
}

void ClassForThirdLesson::task3()
{
    int a;
    std::cin >> a;

    std::cout<<"---Проверяем---";

    (a % 2 == 0)?std::cout<<"Число "<< a <<" - четное":std::cout<<"Число "<< a <<" - нечетное";

    divider();
}

void ClassForThirdLesson::task4()
{
    int a;
    std::cin >> a;
    if(a>=5000)std::cout<<"Уровень 4";
    else if((a>=2500)&&(a<5000))std::cout<<"Уровень 3";
    else if((a>=1000)&&(a<2500))std::cout<<"Уровень 2";
    else if(a<1000)std::cout<<"Уровень 1";

    divider();
}

void ClassForThirdLesson::task5()
{
    int a,b;
    std::cin >> a;
    std::cin >> b;

    std::cout<<"---Проверяем---";

    (a % b == 0)?std::cout<<"Число "<< a <<" - кратно " << b:std::cout<<"Число "<< a <<" - не кратно" << b;

    divider();
}

void ClassForThirdLesson::task6()
{

}

void ClassForThirdLesson::task7()
{
    QList<std::string> lst;
    lst.append("Меню на сегодня(понедельник): \nСуп\nСалат\nМакароны\nКофе\n");
    lst.append("Меню на сегодня(вторник): \nСуп\nСалат\nМакароны\nКофе\n");
    lst.append("Меню на сегодня(среда): \nСуп\nСалат\nМакароны\nКофе\n");
    lst.append("Меню на сегодня(четверг): \nСуп\nСалат\nМакароны\nКофе\n");
    lst.append("Меню на сегодня(пятница): \nСуп\nСалат\nМакароны\nКофе\n");
    lst.append("Меню на сегодня(суббота): \nСуп\nСалат\nМакароны\nКофе\n");
    lst.append("Меню на сегодня(воскресенье): \nСуп\nСалат\nМакароны\nКофе\n");

    int a;
    std::cin >> a;

    std::cout<<lst[a-1];

    divider();
}

ClassForThirdLesson::ClassForThirdLesson()
{

}

void ClassForThirdLesson::divider()
{
    std::cout<<"\n\n======================================\n\n";
}

void ClassForThirdLesson::run()
{
    std::cout<<"\nУрок 4. Конструкция условия if.\n";
    task1();
    task2();
    task3();
    task4();
    std::string str = "";
    std::cin >> str;
}
