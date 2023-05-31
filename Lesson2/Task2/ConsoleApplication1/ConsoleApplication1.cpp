#include <iostream>
#include <fstream>

struct person {
    int Num;
    std::string Name;
    float summ;

};

void change_summ(person* p, float x) {
    p->summ = x;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    float summ2;
    person pers;
    std::cout << "Введите номер счёта: ";
    std::cin >> pers.Num;
    std::cout << "Введите имя владельца: ";
    std::cin >> pers.Name;
    std::cout <<"Введите баланс: ";
    std::cin >> pers.summ;
    std::cout << "Введите новый баланс: ";
    std::cin >> summ2;
    change_summ(&pers, summ2);
    std::cout << "Ваш счёт: "<<pers.Name<<", "<<pers.Num<<", "<< pers.summ;
}

