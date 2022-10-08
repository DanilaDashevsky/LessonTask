// LessonTask.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
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
        const int size_group = 2;
        int k = 0;
        int error_num = 1;
        Student main_group[size_group] = {}; // основная группа студентов
        Student bad_student[size_group] = {}; // плохая группа студентов
        std::cout << "Здравствуйте, введите данные студентов:\n";
        for (char i = 0; i < size_group; i++)
        {
            std::cout << "Введите имя с инициалами:";
            std::cin >> main_group[i].Name;
            if (main_group[i].Name.find('.') == -1)
                throw (5);
            std::cout << "Введите номер группы студента:";
            std::cin >> main_group[i].number;
            if (main_group[i].number == 0)
                throw (5);
            std::cout << "Введите первую оценку:";
            std::cin >> main_group[i].education[0];
            if (main_group[i].education[0] == 0 || main_group[i].education[0] > 5 || main_group[i].education[0] < 2)
                throw (5);
            std::cout << "Введите вторую оценку:";
            std::cin >> main_group[i].education[1];
            if (main_group[i].education[1] == 0 || main_group[i].education[1] > 5 || main_group[i].education[1] < 2)
                throw (5);
            std::cout << "Введите 3-ю оценку:";
            std::cin >> main_group[i].education[2];
            if (main_group[i].education[2] == 0 || main_group[i].education[2] > 5 || main_group[i].education[2] < 2)
                throw (5);
            std::cout << "Введите 4-ю оценку:";
            std::cin >> main_group[i].education[3];
            if (main_group[i].education[3] == 0 || main_group[i].education[3] > 5 || main_group[i].education[3] < 2)
                throw (5);
            std::cout << "Введиет 5-ю оценку:";
            std::cin >> main_group[i].education[4];
            if (main_group[i].education[4] == 0 || main_group[i].education[4] > 5 || main_group[i].education[4] < 2)
                throw (5);
            if (main_group[i].education[0] == 2 || main_group[i].education[1] == 2 || main_group[i].education[2] == 2 || main_group[i].education[3] == 2 || main_group[i].education[4] == 2)
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
            std::cout << "Призренные мира сего:\n";
            for (int i = 0; i < k; i++)
                std::cout << bad_student[i].Name << " " << bad_student[i].number;
        }
        else
            std::cout << "Двоячников нет!";
    }
    catch (int Mistake)
    {
        std::cout << "Введено некорректное значение!";
        //break;
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
