#include <iostream>

//void Func(int array[])
//{
//    array[0] = 100;
//}

void ArrayPrint(int array[], int size)
{
    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}

void ArrayInit(int array[], int size, int begin, int end);

void ArrayInit(int array[], int size, int end)
{
    for (int i{}; i < size; i++)
        array[i] = rand() % (end + 1);
}


int main()
{
    //std::cout << time(nullptr) << "\n";
    srand(time(nullptr));

    const int size{ 5 };
    int students[size];

    ArrayInit(students, size, 12);

    ArrayPrint(students, size);

    int summa{};
    for (int i{}; i < size; i++)
        summa += (students[i] + 1);

    std::cout << (double)summa / size << "\n";
}
