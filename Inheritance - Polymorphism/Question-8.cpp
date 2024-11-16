//Write a Program of Two 1D Matrix Addition using Operator Overloading



#include <iostream>
using namespace std;

class Matrix 

{
    int arr[5];

public:
    Matrix() 
    {
        for (int i = 0; i < 5; i++) 
        {
            arr[i] = 0;
        }
    }

    friend istream& operator>>(istream &input, Matrix &m) 
    
    {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) 
        
        {
            input >> m.arr[i];
        }
        return input;
    }

    friend ostream& operator<<(ostream &output, const Matrix &m) 
    {
        for (int i = 0; i < 5; i++) 
        
        {
            output << m.arr[i] << " ";
        }
        output << endl;
        return output;
    }


    Matrix operator+(const Matrix &m) 
    {
        Matrix temp;
        for (int i = 0; i < 5; i++) 
        {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }
};

int main() 
{
    Matrix mat1, mat2, result;

    cout << "Matrix 1:" << endl;
    cin >> mat1;

    cout << "Matrix 2:" << endl;
    cin >> mat2;

result = mat1 + mat2;
cout << "Result of Matrix Addition:" << endl;
    cout << result;

    return 0;
}
