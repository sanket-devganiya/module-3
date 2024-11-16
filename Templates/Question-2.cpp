//Write a program of to sort the array using templates 


#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) 

{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        
        
        {
            if (arr[i] > arr[j]) 
            
            {
                
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


template <typename T>
void printArray(T arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Before sorting (int array): ";
    printArray(intArray, intSize);
    
    sortArray(intArray, intSize);

    cout << "After sorting (int array): ";
    printArray(intArray, intSize);

    double doubleArray[] = {3.1, 2.2, 5.5, 1.0, 9.8};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "\nBefore sorting (double array): ";
    printArray(doubleArray, doubleSize);
    
    sortArray(doubleArray, doubleSize);

    cout << "After sorting (double array): ";
    printArray(doubleArray, doubleSize);

    return 0;
}
