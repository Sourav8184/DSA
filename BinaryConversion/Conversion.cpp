#include <iostream>
using namespace std;

int decimalToBinary(int decimal)
{
    int result = 0;
    int base = 1;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        result += rem * base;
        decimal /= 2;
        base *= 10;
    }
    return result;
}

int BinaryToDecimal(int binary)
{
    int result = 0;
    int base = 1;
    while (binary > 0)
    {
        int rem = binary % 10;
        result += rem * base;
        binary /= 10;
        base *= 2;
    }
    return result;
}

void decimalToHexa(int decimal)
{
    char hexa[20] = {-1};
    int index = 0;
    while (decimal > 0)
    {
        int rem = decimal % 16;
        if (rem < 10)
        {
            hexa[index] = rem + '0';
        }
        else
        {
            hexa[index] = rem - 10 + 'A';
        }
        decimal /= 16;
        index++;
    }

    for (int i = 20; i >= 0; i--)
    {
        cout << hexa[i];
    }
}
int main()
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary: " << decimalToBinary(decimal) << endl;
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "decimal: " << BinaryToDecimal(binary) << endl;
    int d;
    cout << "Enter a decimal number: ";
    cin >> d;
    decimalToHexa(d);
    return 0;
}
