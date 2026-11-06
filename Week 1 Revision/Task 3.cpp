
#include <iostream>
#include <string>
using namespace std;

template <typename T>
int linearSearch(T arr[], T key)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

void printSearchResult(int index, int key)
{
    if (index == -1)
    {
        cout << key << " not found." << endl;
    }
    else
    {
        cout << key << " found at index " << index << endl;
    }
}

void printSearchResult(int index, float key)
{
    if (index == -1)
    {
        cout << key << " not found." << endl;
    }
    else
    {
        cout << key << " found at index " << index << endl;
    }
}

void printSearchResult(int index, string key)
{
    if (index == -1)
    {
        cout << key << " not found." << endl;
    }
    else
    {
        cout << key << " found at index " << index << endl;
    }
}

int main()
{
    // Integer array
    int intArray[5] = {64, 25, 12, 22, 11};
    int intKey = 12;

    int intIndex = linearSearch(intArray, intKey);

    printSearchResult(intIndex, intKey);


    // Float array
    float floatArray[4] = {3.14, 2.71, 1.62, 0.57};
    float floatKey = 1.62;

    int floatIndex = linearSearch(floatArray, floatKey);

    printSearchResult(floatIndex, floatKey);


    // String array
    string stringArray[4] = {"apple", "orange", "banana", "grape"};
    string stringKey = "banana";

    int stringIndex = linearSearch(stringArray, stringKey);

    printSearchResult(stringIndex, stringKey);

    return 0;
}
