#include <fstream>
#include <iostream>



class Calculator 
{
    public:
        double num1;
        double num2;
     bool set_num1(double num1) {
            if (num1 != 0) {
                this->num1 = num1;
                return true;
            }
            else {
                return false;
            }
        }
        bool set_num2(double num2) {
            if (num2 != 0) {
                this->num2 = num2;
                return true;
            }
            else {
                return false;
            }
        }
        double add() {
            std::cout << "num1 + num2 = "<<num1 + num2<<std::endl;
            return 0;
        
        }
        double substract_1_2() {
            std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
            return 0;
        
        }
        double substract_2_1() {
            std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
            return 0;
        
        }
        double multiply() {
            std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
            return 0;
         
        }
        double divide_1_2() {
            std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
            return 0;
          
        }
        double divide_2_1() {
            std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
            return 0;
          
        }
   

};


int main()
{
    double x, y;
    setlocale(LC_ALL, "Russian");
    Calculator Calc{};
    
    do {
     
        std::cout << "Введите num1: ";
        std::cin >>x;
      
        if (Calc.set_num1(x) == true) {
            std::cout << "Введите num2: ";
            std::cin >> y;
            if (Calc.set_num2(y) == true) {
                
                Calc.add();
                Calc.substract_1_2();
                Calc.substract_2_1();
                Calc.multiply();
                Calc.divide_1_2();
                Calc.divide_2_1();
            }
            else {
                do {
                    std::cout << "Неверный ввод! " << std::endl;
                   // y = 0;
                    std::cout << "Введите num2: ";
                    std::cin >> y;
                } while (y==0);
                Calc.num2 = y;
                Calc.add();
                Calc.substract_1_2();
                Calc.substract_2_1();
                Calc.multiply();
                Calc.divide_1_2();
                Calc.divide_2_1(); 
            }
            
        }
        else {
            std::cout << "Неверный ввод num1! "<<std::endl;
            continue;
        }
    } while (true);
       
   
}

