#include <iostream>
#include <fstream>

struct person {
    std::string Num;
    std::string Name;
    int summ;

};

void change_summ(person* p, int x) {
    p->summ = x;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int summ2;
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

