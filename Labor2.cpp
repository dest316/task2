// Labor2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>


class Function
{
private:
    const double a = 11.2;
    const double b = 10.83;
    const double c = 9.31;
    double y = 0;
    double x = 0;
    double result;
public:
    Function()
    {
        std::cin>>x;
        if (x < 0) { x = abs(x); }
        this->x = x;
        y = (c - log(x)) / b;
        ((x >= 0) || (abs(x) + abs(y) <= 1)) ? (result = 1) : result = 2;
    }
    void printResult()
    {
        std::cout << "result = " << result << std::endl;
    }
};

int main()
{
    Function fun;
    fun.printResult();
    return 0;
}
