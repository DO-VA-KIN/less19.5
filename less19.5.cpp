// less19.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <functional>
using namespace std;


class Animals
{
protected:
    string s;
public:
    Animals() {}
    Animals(string _s) : s(_s)
    {}
    void Voice()
    {
        cout << s << "\n";
    }
};

class Dog : public Animals
{
public:
    Dog() :Animals("Woof!")
    {}
};

class Cat : public Animals
{
public:
    Cat() :Animals("Meow")
    {}
};

class Duck : public Animals
{
public:
    Duck() :Animals("Quack-Quack")
    {}
};

void b()
{

}
int main()
{
    vector<std::function<void()>> animalsVoises;

    //Animals* Animals1 = new Animals("rustling grass");
    //animalsVoises.push_back(Animals1->Voice());

    Animals* Animals1 = new Animals("*rustling grass*");
    Animals1->Voice();

    Dog* Dog1 = new Dog();
    Dog1->Voice();

    Cat* Cat1 = new Cat();
    Cat1->Voice();

    Duck* Duck1 = new Duck();
    Duck1->Voice();
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
