
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
void selectionSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int small = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
}

int main()
{
    // Integer array
    int intArray[5] = {64, 25, 12, 22, 11};

    cout << "Original integer array: ";
    printArray(intArray, 5);

    selectionSort(intArray, 5);

    cout << "Sorted integer array: ";
    printArray(intArray, 5);


    // String array
    string strArray[4] = {"apple", "orange", "banana", "grape"};

    cout << "\nOriginal string array: ";
    printArray(strArray, 4);

    selectionSort(strArray, 4);

    cout << "Sorted string array: ";
    printArray(strArray, 4);

    return 0;
}
