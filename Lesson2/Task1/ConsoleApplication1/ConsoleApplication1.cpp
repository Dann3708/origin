#include <fstream>
#include <iostream>


enum class Month {
    Январь = 1,
    Февраль = 2,
    Март = 3,
    Апрель = 4,
    Май = 5,
    Июнь = 6,
    Июль = 7,
    Август = 8,
    Сентябрь = 9,
    Октябрь = 10,
    Ноябрь = 11,
    Декабрь = 12
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;

    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> N;

        switch (N) {
        case static_cast<int>(Month::Январь):
            std::cout << "Январь" << std::endl;
            break;

        case static_cast<int>(Month::Февраль):
            std::cout << "Февраль" << std::endl;
            break;

        case static_cast<int>(Month::Март):
            std::cout << "Март" << std::endl;
            break;

        case static_cast<int>(Month::Апрель):
            std::cout << "Апрель" << std::endl;
            break;

        case static_cast<int>(Month::Май):
            std::cout << "Май" << std::endl;
            break;

        case static_cast<int>(Month::Июнь):
            std::cout << "Июнь" << std::endl;
            break;

        case static_cast<int>(Month::Июль):
            std::cout << "Июль" << std::endl;
            break;

        case static_cast<int>(Month::Август):
            std::cout << "Август" << std::endl;
            break;

        case static_cast<int>(Month::Сентябрь):
            std::cout << "Сентябрь" << std::endl;
            break;

        case static_cast<int>(Month::Октябрь):
            std::cout << "Октябрь" << std::endl;
            break;

        case static_cast<int>(Month::Ноябрь):
            std::cout << "Ноябрь" << std::endl;
            break;

        case static_cast<int>(Month::Декабрь):
            std::cout << "Декабрь" << std::endl;
            break;
        case 0:
            std::cout << "До свидания";
            break;

        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;

        }

    } while (N != 0);

}

