// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;
/*int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


   
    cout << "вычисление стоймости покупки\n";
    cout << "выведите исходную\n";
    cout << "цена тетради (руб) ->\n";
    cout << "количество тетрадей";
    cout << "цена карандаша ->\n";
    cout << "количество карандашей ->\n";
    float price_notebook, price_pincil, summa;
    int count_notebook, count_pencil;
    cout << "цена тетради (руб) ->";
    cin >> price_notebook;
    cout << "количество тетрадей ->";
    cin >> count_notebook;
    cout << "цена карандаша ->";
    cin >> price_pincil;
    cout << "количество карандашей ->";
    cin >> count_pencil;
    summa = price_notebook * count_notebook + price_pincil * count_pencil;
    cout << "стоймость покупки: \n"
    << summa;

   
}
*/

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float widh, height;
    cout << "вычисление площади треугольника. \n"
      << "введите длинну основания треугольника ->\n";
    cin >> widh;
    cout << "вывести длинну высоты треугольника ->\n";
    cin >> height;
    cout << "площадь треугольника: "
        << 0.5 * widh * height << "кв. см.";
     
}

/*
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    int start_sec = 75498;
    // cin >> sec;
    int sec = start_sec % 60;
    int min = start_sec / 60 % 60;
    int hour = start_sec / 60 / 60; // start_sec / 3600

    cout << "h: " << hour << "m: " << min << "s: " << sec;

}
*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
