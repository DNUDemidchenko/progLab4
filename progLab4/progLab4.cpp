#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int input;
    cout << "1 - SUM\n2 - PRODUCT\n3 - COUNTODD\n4 - PARROT2\n5 - MENU2\n6 - MAX\n7 - Fibonacci.txt\n8 - HIT2\n9 - Factor.txt\n";
    cin >> input;

    int i, a, b, c;
    int res;
    char* str = new char[100];
    double x0 = 4, y0 = 3;
    double r = 4;
    double d, pd = 1000;

    switch (input)
    {
    case 1:
        i = 1;
        res = 0;
        cout << "a[1] = ";
        while (cin >> a)
        {
            if (a == 0) break;

            res += a;
            i++;
            cout << "a[" << i << "] = ";
        }
        cout << "SUM = " << res << endl;
        break;

    case 2:
        i = 1;
        res = 1;
        cout << "a[1] = ";
        while (cin >> a)
        {
            if (a == 0) break;

            if (a % 2 == 0) res *= a;
            i++;
            cout << "a[" << i << "] = ";
        }
        cout << "PRODUCT = " << res << endl;
        break;

    case 3:
        i = 1;
        res = 0;
        cout << "a[1] = ";
        while (cin >> a)
        {
            if (a == 0) break;

            if (a % 2 == 1) res++;
            i++;
            cout << "a[" << i << "] = ";
        }
        cout << res << " odd numbers\n";
        break;

    case 4:
        cout << "Input string\n";
        cin.ignore();
        while (cin.getline(str, 100))
        {
            if (str[0] == '\0') break;

            cout << str << "\nInput string\n";
        }
        break;

    case 5:
        cout << "������ i�������i��� ������� ���:\n1. ������ ���\n2. ������� �����\n3. ������!\n";
        cout << "0. ���i�\n����i�� �i����i���� ����� �� ������i�� ENTER.\n";
        while (cin >> a)
        {
            switch (a)
            {
            case 1:
                cout << "������\n";
                break;
            case 2:
                cout << "�������\n";
                break;
            case 3:
                cout << "A�����\n";
                break;
            case 0:
                return 0;
            }
            cout << "������ i�������i��� ������� ���:\n1. ������ ���\n2. ������� �����\n3. ������!\n";
            cout << "0. ���i�\n����i�� �i����i���� ����� �� ������i�� ENTER.\n";
        }
        break;

    case 6:
        i = 1;
        res = -1e6;
        cout << "a[1] = ";
        while (cin >> a)
        {
            if (a == 0) break;

            if (a > res) res = a;
            i++;
            cout << "a[" << i << "] = ";
        }
        cout << "MAX = " << res << endl;
        break;

    case 7:
        cout << "N = ";
        cin >> i;
        if (i < 2)
        {
            cout << "F(" << i << ") = " << i << endl;
            break;
        }
        a = 0;
        b = 1;
        c = 1;
        for (int j = 2; j < i; j++)
        {
            a = b;
            b = c;
            c = a + b;
        }
        cout << "F(" << i << ") = " << c << endl;
        break;

    case 8:
        cout << "X = ";
        cin >> a;
        cout << "Y = ";
        cin >> b;
        d = (x0 - a) * (x0 - a) + (y0 - b) * (y0 - b);
        while (d > r * r)
        {
            if (d > pd) cout << "������i��\n";
            else cout << "����i��\n";
            cout << "X = ";
            cin >> a;
            cout << "Y = ";
            cin >> b;
            pd = d;
            d = (x0 - a) * (x0 - a) + (y0 - b) * (y0 - b);
        }
        cout << "����� (" << a << ", " << b << ") ��������� � ���� � ������� � ����i (" << x0 << ", " << y0 << ") ���i��� " << r << endl;
        break;

    case 9:
        cout << "N = ";
        while (cin >> d)
        {
            if (!cin)
                cout << "Not a number\nN = ";
            else if (d < 0)
                cout << "Negative number\nN = ";
            else if (d != (int)d)
                cout << "Not a whole number\nN = ";
            else break;
        } 
        res = 1;
        for (int j = 1; j <= d; j++)
        {
            res *= j;
        }
        cout << d << "! = " << res << endl;
        break;
    }
}
