// LessonTask.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <Windows.h>
using namespace std;
struct Student
{
    string Name;
    int number;
    int education[5];
};

int main()
{
    try {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        const int size_group = 3; // объём массива
        int k = 0;
        int depend=0;
        Student main_group[size_group] = {}; // основная группа студентов
        Student bad_student[size_group] = {}; // плохая группа студентов
        std::cout << "Здравствуйте, введите данные студентов:\n";
        std::cout << "Предупреждение:При вводе данных не используйте пробелы!\n";
        for (char i = 0; i < size_group; i++) // заполнение массива объектов структур
        {
            do {
                if (depend >= 1)
                    cout << "Введено некорректное значение! Добавьте точки или уберите пробелы.\n";
            std::cout << "Введите имя с инициалами(Петров.А.А):";
                std::cin >> main_group[i].Name;
                depend += 1;
            } while (main_group[i].Name.find('.') == -1);
            depend = 0;
            do{
                if (depend >= 1)
                    cout << "Введено некорректное значение!\n";
            std::cout << "Введите номер группы студента:";
            std::cin >> main_group[i].number;
            depend += 1;
            } while (main_group[i].number == 0);
            depend = 0;
            do {
                if (depend >= 1)
                    cout << "Введено некорректное значение! Оценка не должна быть больше 5 и меньше 2\n";
                std::cout << "Введите 1-ю оценку:";
                std::cin >> main_group[i].education[0];
                depend += 1;
            } while (main_group[i].education[0] > 5 || main_group[i].education[0] < 2);
            depend = 0;
            do {
                if (depend >= 1)
                    cout << "Введено некорректное значение! Оценка не должна быть больше 5 и меньше 2\n";
                std::cout << "Введите 2-ю оценку:";
                std::cin >> main_group[i].education[1];
                depend += 1;
            } while (main_group[i].education[1] > 5 || main_group[i].education[1] < 2);
            depend = 0;
            do {
                if (depend >= 1)
                    cout << "Введено некорректное значение! Оценка не должна быть больше 5 и меньше 2\n";
                std::cout << "Введите 3-ю оценку:";
                std::cin >> main_group[i].education[2];
                depend += 1;
            } while ( main_group[i].education[2] > 5 || main_group[i].education[2] < 2);
            depend = 0;
            do {
                if (depend >= 1)
                    cout << "Введено некорректное значение! Оценка не должна быть больше 5 и меньше 2\n";
                std::cout << "Введите 4-ю оценку:";
                std::cin >> main_group[i].education[3];
                depend += 1;
            } while (main_group[i].education[3] > 5 || main_group[i].education[3] < 2);
            depend = 0;
            do {
                if (depend >= 1)
                    cout << "Введено некорректное значение! Оценка не должна быть больше 5 и меньше 2\n";
                std::cout << "Введиет 5-ю оценку:";
                std::cin >> main_group[i].education[4];
                depend += 1;
            } while (main_group[i].education[4] > 5 || main_group[i].education[4] < 2);
            depend = 0;
            if (main_group[i].education[0] == 2 || main_group[i].education[1] == 2 || main_group[i].education[2] == 2 || main_group[i].education[3] == 2 || main_group[i].education[4] == 2) // отделение нормальных от плохих
            {
                bad_student[k].Name = main_group[i].Name;
                bad_student[k].number = main_group[i].number;
                bad_student[k].education[0] = main_group[i].education[0];
                bad_student[k].education[1] = main_group[i].education[1];
                bad_student[k].education[2] = main_group[i].education[2];
                bad_student[k].education[3] = main_group[i].education[3];
                bad_student[k].education[4] = main_group[i].education[4];
                bad_student[k].education[4] = main_group[i].education[4];
                ++k;
            }
        }
        if (k > 0)
        {
            std::cout << "Призренные мира сего:\n"; // вывод плохих студентов
            for (int i = 0; i < k; i++)
            {
                std::cout << bad_student[i].Name << " " << bad_student[i].number << "\n";
            }
        }
        else
            cout << "Двоячников нет!";
    }
    catch (int Mistake) // защита на некорректный ввод
    {
        std::cout << "Введено некорректное значение!";
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
