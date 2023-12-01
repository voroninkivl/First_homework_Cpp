//
//  main.cpp
//  First_homework
//
//  Created by Кирилл Воронин и Эдгар Ахтямов on 22.11.2023.
//

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <map>
#include <string>

//1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.

int task1() {
    float b1 = 0, b2 = 0, h = 0;
    std::cout << "Enter lower trapezoid base" << std::endl;
    std::cin >> b1;
    std::cout << "Enter higher trapezoid base" << std::endl;
    std::cin >> b2;
    std::cout << "Enter trapezoid height" << std::endl;
    std::cin >> h;
    std::cout << "Result for Task 1: " << ((b1 + b2) / 2) * h << std::endl;
    return 0;
    
}

//2. Вычислить длину окружности и площадь круга радиуса г.
int task2() {
    float radius = 0;
    float pi = 3.14;
    std::cout << "Введите радиус: " << std::endl;
    std::cin >> radius;
    float L = 2 * pi * radius;
    float S = pi * radius * radius;
    std::cout << "Длина окружности равна: " << L << std::endl;
    std::cout << "Площадь окружности равна: " << S << std::endl;
    return 0;
}

//3. Вычислить площадь прямоугольного треугольника и гипотенузу
int task3() {
    float leg1 = 0, leg2 = 0;
    std::cout << "Enter the first leg of triangle" << std::endl;
    std::cin >> leg1;
    std::cout << "Enter the second leg of triangle" << std::endl;
    std::cin >> leg2;
    std::cout << "Square: " << 0.5 * leg1 * leg2 << " " << "Hypotenuse: " << sqrt(pow(leg1, 2) + pow(leg2, 2)) << std::endl;
    return 0;
}

//4.Дано десятичное четырехзначное число. Найти сумму его цифр
int task4()
{
    int number = 0, a = 0, b = 0, c = 0, d = 0;
    std::cout << "Введите четырехзначное число: " << std::endl;
    std::cin >> number;
    a = number % 10;
    number = number / 10;
    b = number % 10;
    number /= 10;
    c = number % 10;
    number /= 10;
    d = number % 10;
    std::cout << "Сумма цифр введенного числа: " << a + b + c + d << std::endl;
    return 0;
}

//5. Выполнить переход от декартовых координат к полярным
float task5() {
    std::cout << "Enter x: ";
    float x = 0;
    std::cin >> x;
    std::cout << "Enter y: ";
    float y = 0;
    std::cin >> y;
    float koor_r = sqrt(x * x + y * y);
    float koor_fi = atan(y / x);
    std::cout << "Result for Task 5: " << koor_r << " " << koor_fi << " radian" << std::endl;
    return 0;
}

//6. Выполнить переход от полярных координат к декартовым.
int task6()
{
    float r = 0, fi = 0;
    std::cout << "Введите полярную координату 1: " << std::endl;
    std::cin >> r;
    std::cout << "Введите полярную координату 2: " << std::endl;
    std::cin >> fi;
    float x = r * cos(fi);
    float y = r * sin(fi);
    std::cout << "Декартова координата 1: " << x << "  " << "Декартова координата 2: " << y << std::endl;
    return 0;
}
//7. Найти корни квадратного уравнения.
int task7() {
    int a = 0, b = 0, c = 0, D = 0;
    std::cout << "Enter the coefficient a" << std::endl;
    std::cin >> a;
    std::cout << "Enter the coefficient b" << std::endl;
    std::cin >> b;
    std::cout << "Enter the coefficient c" << std::endl;
    std::cin >> c;
    D = pow(b, 2) - 4 * a * c;
    if (D > 0) {
        std::cout << "Result for Task 7: " << (-b + D) / (2 * a) << " " << (-b - D) / (2 * a) << std::endl;
    }
    else if (D == 0)
        std::cout << "Result for Task 7: " << -b / (2 * a) << std::endl;

    else 
        std::cout << "Result for Task 7: There is no solves" << std::endl;
    return 0;
}

//8. Имеется треугольник со сторонами а, b, с. Найти медианы треугольника, сторонами которого
//являются медианы исходного треугольника.
int task8()
{
    float a = 0, b = 0, c = 0;
    std::cout << "Введите стороны треугольника: " << std::endl << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        float AM = sqrt((2 * a * a + 2 * c * c - b * b) / 4);//большие медианы
        float BM = sqrt((2 * a * a + 2 * b * b - c * c) / 4);

        float a1 = AM / 3;//стороны мал треуг
        float b1 = b / 2;
        float c1 = (2 * BM) / 3;

        float a1m = sqrt((2 * a1 * a1 + 2 * c1 * c1 - b1 * b1) / 4);//медианы мал треуг
        float b1m = sqrt((2 * b1 * b1 + 2 * c1 * c1 - a1 * a1) / 4);
        float c1m = sqrt((2 * a1 * a1 + 2 * b1 * b1 - c1 * c1) / 4);
        std::cout << "Медиана1: " << a1m << std::endl << "Медиана2: " << b1m << std::endl << "Медиана3: " << c1m << std::endl;
    }
    else
        std::cout << "Такого треугольника не существует!" << std::endl;

    return 0;
}
//9. Идет k-я секунда суток. Определить, сколько целых часов и целых минут
//прошло с начала суток.
int task9()
{
    int x = 0;
    std::cout << "Введите количество секунд: ";
    std::cin >> x;
    while (x >= 86400)
    {
      x -= 86400;
    }
    x /= 60; //минуты
    int y = x % 60;
    x /= 60; //часы
    std::cout << x << " ч. " << y << " мин. " <<std::endl;
    return 0;
}

//10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.
int task10()
{
    float a = 0, b = 0, c = 0;
    std::cout << "Введите стороны треугольника: " << std::endl << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        if ((a == b) || (b == c) || (a == c))
            std::cout << "Этот треугольник равнобедренный!" << std::endl;
        else
            std::cout << "Этот треугольник неравнобедренный!" << std::endl;
    }
    else
        std::cout << "Такого треугольника не существует!" << std::endl;
    return 0;
}

//11. Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется,
//если сумма покупки превышает 1000 рублей
int task11() {
    float cost = 0;
    std::cout << "Enter the cost" << std::endl;
    std::cin >> cost;
    if (cost > 1000)
        std::cout << "Result for Task 11: " << cost * 0.9 << std::endl;
    else
        std::cout << "Result for Task 11: " << cost << std::endl;
    return 0;
}

//12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
//идеальный вес определяется формулой(рост - 100 = идеальный вес).
int task12()
{
    float weight = 0, height = 0;
    std::cout << "Введите рост человека: " << std::endl;
    std::cin >> height;
    std::cout << "Введите вес человека: " << std::endl;
    std::cin >> weight;
    if (height - 100 < weight)
        std::cout << "Нужно похудеть!" << std::endl;
    else if (height - 100 == weight)
        std::cout << "Так держать, давай в том же духе!" << std::endl;
    else if (height - 100 > weight)
        std::cout << "Нужно срочно набирать массу!" << std::endl;
    else
        std::cout << "Вы ввели что-то странное, оно существует?" << std::endl;
    return 0;
}

//13. Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат произведения этих чисел.
//Программа сообщает тестируемому ошибся он или нет.
int task13(){
    int composition = 0, first = 0, second = 0;
    std::cout << "Enter the compositions of numbers" << std::endl;
    std::cin >> composition;
    first = rand() % 9 + 1;
    second = rand() % 9 + 1;
    if (first * second == composition)
        std::cout << "Result for Task 13: It's correct" << std::endl;
    else
        std::cout << "Result for Task 13: It's not correct answer. Try again" << std::endl;
    return 0;
}

//14. Написать программу вычисления стоимости переговоров, если по субботам и
//воскресеньям предоставляется скидка 20%.
//Ввести продолжительность разговора и день недели(число от 1 до 7).
int task14()
{
    float price = 0, amount = 0, day = 0;
    std::cout << "Введите стоимость за минуту (руб.): " << std::endl;
    std::cin >> price;
    std::cout << "Введите количество минут: " << std::endl;
    std::cin >> amount;
    std::cout << "Введите день недели от 1 до 7: " << std::endl;
    std::cin >> day;
    if (day == 6 || day == 7)
        std::cout << "Стоимость переговоров: " << price * 0.8 * amount << "pуб." << std::endl;
    else
        std::cout << "Стоимость переговоров: " << price * amount << "pуб." << std::endl;
    return 0;
}

//15. Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года.
int task15()
{
    std::map<std::string, std::string> months;
    months["1"] = "January, Winter";
    months["2"] = "February, Winter";
    months["3"] = "March, Spring";
    months["4"] = "April, Spring";
    months["5"] = "May, Spring";
    months["6"] = "June, Summer";
    months["7"] = "July, Summer";
    months["8"] = "August, Summer";
    months["9"] = "September, Autumn";
    months["10"] = "October, Autumn";
    months["11"] = "November, Autumn";
    months["12"] = "December, Winter";
    std::string month;
    std::cout << "Enter the number of month" << std::endl;
    std::cin >> month;
    std::cout << "Result for Task 15: " << months[month] << std::endl;
    return 0;
}

//16. Определить, является ли шестизначное число "счастливым".
int task16()
{
    int number = 0, sum_1 = 0, sum_2 = 0, number_1 = 0, number_2 = 0;
    std::cout << "Введите шестизначное число: " << std::endl;
    std::cin >> number;
    number_1 = number / 1000;
    number_2 = number % 1000;
    for (int i = 0; i < 3; i++)
    {
        sum_1 += number_1 % 10;
        number_1 /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        sum_2 += number_2 % 10;
        number_2 /= 10;
    }
    if (sum_1 == sum_2)
        std::cout << "Да, число счастливое!" << std::endl;
    else
        std::cout << "Нет, число не счастливое!" << std::endl;
    return 0;
}

//17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово
//"копейка" в правильной форме.
int task17()
{
  int a = 0;
  std::cout << "Введите число от 1 до 99: ";
  std::cin >> a;
  if (a == 1 || a == 21 || a == 31 || a == 41 || a == 51 || a == 61 || a == 71 || a == 81 || a == 91)
    std::cout << a << " копейкa" << std::endl;
  else if ((a >= 2 && a < 5) || (a >= 22 && a < 25) || (a >= 32 && a < 35) || (a >= 42 && a < 45) || (a >= 52 && a < 55) || (a >= 62 && a < 65) || (a >= 72 && a < 75) || (a >= 82 && a < 85) || (a >= 92 && a < 95))
    std::cout << a << " копейки" << std::endl;
  else if (a<1 || a>99)
    std::cout << "Ошибка!" << std::endl;
  else
    std::cout << a << " копеек" << std::endl;
  return 0;
}

//18. Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом.
int task18()
{
    int number = 0, sum = 0, number_1 = 0, number_2 = 0;
    std::cout << "Введите четырехзначное число: " << std::endl;
    std::cin >> number;
    number_1 = number / 100;
    number_2 = number % 100;
    while (number_2 != 0)
    {
        sum *= 10;
        sum += number_2 % 10;
        number_2 /= 10;
    }
    if (number_1 == sum)
        std::cout << "Да, число - палиндром." << std::endl;
    else
        std::cout << "Нет, число - не палиндром." << std::endl;
    return 0;
}

//19.Дано трёхзначное число. Определить: 19.1 является ли произведение
//его цифр больше числа b 19.2 кратна ли 7 сумма его цифр.
int task19() {
    int number = 0, b = 0;
    std::cout << "Enter the three-digit number" << std::endl;
    std::cin >> number;
    std::cout << "Enter the b" << std::endl;
    std::cin >> b;
    int comparenumber = number % 10 * number % 100 * number % 1000;
    if (comparenumber > b)
        std::cout << "Result for task 19.1: Composition of digits is higher than b" << std::endl;
    else
        std::cout << "Result for task 19.1: Composition of digits is lower than b" << std::endl;
    if (comparenumber % 7 == 0)
        std::cout << "Result for task 19.2: Composition of digits is multiply 7" << std::endl;
    else
        std::cout << "Result for task 19.2: Composition of digits is not multiply 7" << std::endl;
    return 0;
}
//20. Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со
//сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного
//прямоугольника были параллельны сторонам другого.
int task20()
{
    float a1 = 0, b1 = 0, a2 = 0, b2 = 0;
    std::cout << "Введите стороны первого прямоугольника: " << std::endl << "a1: ";
    std::cin >> a1;
    std::cout << "b1: ";
    std::cin >> b1;
    std::cout << "Введите стороны второго прямоугольника: " << std::endl << "a2: ";
    std::cin >> a2;
    std::cout << "b2: ";
    std::cin >> b2;
    if (a1 <= 0 || b1 <= 0 || a2 <= 0 || b2 <= 0)
        std::cout << "Ошибка!" << std::endl;
    else
        if (((a1 < a2) && (b1 < b2)) || ((a1 < b2) && (b1 < a2)))
            std::cout << "Да, можно поместить." << std::endl;
        else
            std::cout << "Нет, нельзя поместить." << std::endl;
    return 0;
}


//21.(По желанию) Написать программу, в которой выводятся размеры основных типов данных. Сделать
//выводы.
int task21()
{
    std::cout << "bool: " << sizeof(bool) << " byte" << std::endl;
    std::cout << "char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t: " << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes" << std::endl;
    return 0;
}


int main()
{
    int number;
    std::cout << "Введите номер задания: ";
    std::cin >> number;
    if (number == 1)
      std::cout << task1();
    else if (number == 2)
      std::cout << task2();
    else if (number == 3)
      std::cout << task3();
    else if (number == 4)
      std::cout << task4();
    else if (number == 5)
      std::cout << task5();
    else if (number == 6)
      std::cout << task6();
    else if (number == 7)
      std::cout << task7();
    else if (number == 8)
      std::cout << task8();
    else if (number == 9)
      std::cout << task9();
    else if (number == 10)
      std::cout << task10();
    else if (number == 11)
      std::cout << task11();
    else if (number == 12)
      std::cout << task12();
    else if (number == 13)
      std::cout << task13();
    else if (number == 14)
      std::cout << task14();
    else if (number == 15)
      std::cout << task15();
    else if (number == 16)
      std::cout << task16();
    else if (number == 17)
      std::cout << task17();
    else if (number == 18)
      std::cout << task18();
    else if (number == 19)
      std::cout << task19();
    else if (number == 20)
      std::cout << task20();
    else if (number == 21)
      std::cout << task21();
    else
      std::cout << "Такого задания не существует!";
    return 0;
}
