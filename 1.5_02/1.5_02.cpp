#include<iostream>
#include<windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Массив: ";
    for (int i = 0; i < size; i++) //Вывод массива
    {

        if (i != size - 1)
        {
            std::cout << arr[i] << ", ";
        }
        else
        {
            std::cout << arr[i] << std::endl;
        }
    }
        int min_value = arr[0];   //Поиск минимального значения

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < min_value) 
        {
            min_value = arr[i];
        }
    }

    std::cout << "Минимальное значение в массиве: " << min_value << std:: endl;

    int max_value = arr[0];   //Поиск максимального значения

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_value) 
        {
           max_value = arr[i];
        }
    }

    std::cout << "Максимальное значение в массиве: " << max_value << std::endl;
          

return 0;
}