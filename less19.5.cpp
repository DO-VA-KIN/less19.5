// less19.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <functional>
using namespace std;


class Animals
{
protected:
    string s = "sound of silence";
public:
    void Voice()
    {
        cout << s << "\n";
    }
};

class Dog : public Animals
{
public:
    Dog() :Animals()
    {
        s = "Woof!";
    }
};

class Cat : public Animals
{
public:
    Cat() :Animals()
    {
        s = "Meow";
    }
};

class Duck : public Animals
{
public:
    Duck() :Animals()
    {
        s = "Quack-Quack";
    }
};



int main()
{
    //vector<function<void()>> *animalsVoises;
    Animals* reff[3];
    reff[0] = new Dog;
    reff[1] = new Cat;
    reff[2] = new Duck;

    for (int i = 0; i < 3; i++)
    {
        reff[i]->Voice();
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
