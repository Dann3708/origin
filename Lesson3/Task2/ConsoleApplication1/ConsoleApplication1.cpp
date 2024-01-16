#include <fstream>
#include <iostream>
#include <string>

class Counter {
protected:
    int num;
public:
    Counter() {
        num = 1;
    };
    Counter(int A) {
        num = A;
    };

        int set_num_plus() {
            num = num++;
            return num;
        }
        int set_num_min() {
            num = num--;
            return num;
        }
        int get_num() {
            return num;
        }
};

int main()
{
    setlocale(LC_ALL, "Russian");
  
    std::string ou;
    int Num;
    std::cout << "Вы хотите указать начальное значение счётчика?";
    do {
        std::cout << " Введите Yes или No: ";
        std::cin >> ou;
        std::cout << "\n";
        if (ou == "Yes") 
            {
                std::cout << "Введите начальное значение счётчика: ";
                std::cin >> Num;
                Counter count(Num);
                break;
            }
        if (ou == "No") {
            {
                std::cout << "Начальное значение по умолчанию = 1 "<<std::endl;
                Counter count;
                Num = count.get_num();
                break;
            }
        }
    } while (true);
    char Simb;
    Counter count(Num);
    
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'х'): ";
        std::cin >> Simb;
        
        switch (Simb) {
          case('+'):
            count.set_num_plus();
            break;
          case('-'):
            count.set_num_min();
            break;
         case('='):
            count.get_num();
            std::cout<< count.get_num()<<std::endl;
            break;
         case('x'):
            std::cout << "До свидания!";
            break;
         default:
             break;
        } 
  
   
    }while (Simb != 'x');
    
}

