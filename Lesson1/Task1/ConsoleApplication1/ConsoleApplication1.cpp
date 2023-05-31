#include <fstream>
#include <iostream>


int* Mass1(int x) {
    return new int[x];
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream start("in.txt");
    std::ofstream fin("out.txt");


    int N1 = 0, N2 = 0, m = 0;

    if (start.is_open()) {

        start >> N1;
        int* MassF = Mass1(N1);
        //о1 - Размер первого массива
        int o1 = N1;
        //Заполнение первого массива числами из файла
        for (int i = 0; i < o1; i++) {
            start >> m;
            MassF[i] = m;

        }


        start >> N2;
        int* MassS = Mass1(N2);
        //о2 - Размер второго массива
        int o2 = N2;
        //Заполнение второго массива числами из файла
        for (int i = 0; i < o2; i++) {
            start >> m;
            MassS[i] = m;

        }

        int tmp;
        tmp = MassS[N2 - 1];
        fin << N2 << std::endl;
        fin << tmp << " ";
        for (int i = 0; i < N2 - 1; i++) {
            fin << MassS[i] << " ";
        }
        fin << std::endl;

        tmp = MassF[0];
        fin << N1 << std::endl;

        for (int i = 1; i < N1; i++) {
            fin << MassF[i] << " ";
        }
        fin << tmp << " ";


        std::cout << "Операция успешно проведена";
    }



    else
    {
        std::cout << "Нет файла in или out " << std::endl;
    }


    start.close();
    fin.close();

}
