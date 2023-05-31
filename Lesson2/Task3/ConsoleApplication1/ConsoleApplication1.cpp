
#include <fstream>
#include <iostream>


struct info {
    std::string city;
    std::string street;
    int House;
    int Num;
    std::string Ind;
};

void Console(info a) {
    std::cout << std::endl << "Город: "<< a.city << std::endl << "Улица: " << a.street << std::endl << "Номер дома: " << a.House << std::endl << "Номер квартиры: " << a.Num << std::endl << "Индекс: " << a.Ind << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    info Inf;

    info P = { "gorod","street",'2','1',"232090" };
    Console(P);
   
    std::string G;
    std::string U;
    std::string I;
    int H,K;
    std::cout<<std::endl;
    std::cout << "Введите город: ";
    std::cin >> G;
    std::cout << "Введите улицу: ";
    std::cin >> U;
    std::cout << "Введите номер дома: ";
    std::cin >> H;
    std::cout << "Введите номер квартиры: ";
    std::cin >> K;
    std::cout << "Введите индекс: ";
    std::cin >> I;

    info L = { G,U,H,K,I };
    Console(L);
  
}

