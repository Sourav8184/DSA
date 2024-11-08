#include <iostream>
using namespace std;

void pattern1(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern2(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= i)
            {
                cout << " * ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern3(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j >= (c + 1) - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern4(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= (r + 1) - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern5(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j >= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern6(int r = 5, int c = 9)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern7(int r = 5, int c = 9)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j >= i && j <= 10 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern8(int r = 5, int c = 9)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j >= i && j <= 10 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern9(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= (r + 1) - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern10(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= i)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern11(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= i)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern12(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= (r + 1) - i)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern13(int r, int c)
{
    int flag = 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= i)
            {
                if (flag == 1)
                {
                    cout << "1";
                    flag = 0;
                }
                else
                {
                    cout << "0";
                    flag = 1;
                }
            }
            else
            {
            }
        }
        cout << endl;
    }
}

void pattern14(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= i || j >= 8 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern15(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (j <= 6 - i || j >= 4 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern16(int r = 5, int c = 9)
{

    for (int i = 1; i <= r; i++)
    {
        int count = 1;
        for (int j = 1; j <= c; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                cout << count;
                j < 5 ? count++ : count--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern17(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= c; j++)
        {
            if (j <= 6 - i || j >= 4 + i)
            {
                cout << ch;
                j <= 4 ? ch++ : ch--;
            }
            else
            {
                cout << " ";
                if (j == 5)
                    ch--;
            }
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cout << "Enter How many Rows:" << endl;
    cin >> row;
    cout << "Enter How many Cols:" << endl;
    cin >> col;
    cout << endl;
    pattern17(row, col);
    return 0;
    // pattern6(); default parameter
}