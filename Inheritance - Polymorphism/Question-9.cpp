//Write a program to concatenate the two strings using Operator Overloading


#include <iostream>
#include <cstring>

using namespace std;
class String 
{
    char str[100];

public:

    String() 
    {
        str[0] = '\0';
    }

    String(const char s[]) 
    
    {
        strcpy(str, s);
    }


    String operator+(const String &s)
 {
        String temp;
        strcpy(temp.str, str);  
        strcat(temp.str, s.str); 
        return temp;
    }


    friend ostream& operator<<(ostream &output, const String &s) 
    
    {
        output << s.str;
        return output;
    }
};

int main() 

{
    String str1("SANKET, "), str2("DEVGANIYA!");


    String result = str1 + str2;

    cout << "Concatenated String: " << result << endl;

    return 0;
}
