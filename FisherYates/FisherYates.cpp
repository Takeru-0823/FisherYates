#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fisherYates(int* arr, int size);

int main()
{
    srand((unsigned int)time(NULL));

    int arr[] = { 34, 5, 18, 7, 3, 24, 61, 1, 99, 55 };

    int size = sizeof(arr) / sizeof(arr[0]);

    fisherYates(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
}

void fisherYates(int* arr, int size)
{
    int idx = 0;
    int swap = 0;

    for (int i = size - 1; i > 0; i--)
    {
        idx = rand() % (i + 1);

        swap = arr[idx];
        arr[idx] = arr[i];
        arr[i] = swap;

    }
}

