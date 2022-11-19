#include <iostream>

using namespace std;

float power(float m, float n)
{
    float answer = 1;
    for (int i = 0; i < n; i++)
    {
        answer = answer * m;
    }

    return answer;
}

long factorial(int m)
{
    long answer = 1;
    for (int i = m; i > 0; i--)
    {
        answer = answer * i;
    }

    return answer;
}

double sin(double angel)
{
    double answer = 0;
    for (int i = 0; i < 12; i++)
    {
        answer = answer + ((power(-1, i)) * (power(angel, 2 * i + 1))) / (factorial(2 * i + 1));
    }

    return answer;
}

double cos(double angel)
{
    double answer = 0;
    for (int i = 0; i < 12; i++)
    {
        answer = answer + ((power(-1, i)) * (power(angel, 2 * i))) / (factorial(2 * i));
    }

    return answer;
}

double naturalexponent()
{
    double naturalbase = 0;
    for (int i = 0; i < 20; i++)
    {
        naturalbase = naturalbase + (power(1, i)) / factorial(i);
    }
    return naturalbase;
}

double lograthm(double input)
{
    double naturalbase = 0;
    for (int i = 1; i < 20; i++)
    {
        naturalbase = naturalbase + (power(input - 1, i)) / i;
    }
    return naturalbase;
}

int main()
{
    float m, n;
    int choice;
label:
    cout << "[1] Addition" << endl;
    cout << "[2] Subtraction" << endl;
    cout << "[3] Multiplication" << endl;
    cout << "[4] Division" << endl;
    cout << "[5] Exponent" << endl;
    cout << "[6] Exponent(with natural base)" << endl;
    cout << "[7] Logarithmic function" << endl;
    cout << "[8] Sin" << endl;
    cout << "[9] Cos" << endl;
    cout << "[10] Tan" << endl;
    cout << "[11] Cot" << endl;
    cout << "[12] Cosec" << endl;
    cout << "[13] Sec" << endl;
    cout << "NOTE : The angle are in radians and for the trignometric functions are in between 0 to 1.57 ." << endl;
    cout << "Enter the operation that you want to preform" << endl;
    cin >> choice;
    if (choice < 6)
    {
        cout << "Enter the numberes" << endl;
        cin >> m;
        cin >> n;
    }
    else if (choice >= 6 && choice < 8)
    {
        cout << "Enter the number" << endl;
        cin >> m;
    }
    else
    {
        cout << "Enter the angle" << endl;
        cin >> m;
    }
    cout << "The answer is ";
    switch (choice)
    {
    case 1:
        cout << m + n << endl;
        break;
    case 2:
        cout << m - n << endl;
        break;
    case 3:
        cout << m * n << endl;
        break;
    case 4:
        cout << m / n << endl;
        break;
    case 5:
        cout << power(m, n) << endl;
        break;
    case 6:
        cout << power(naturalexponent(), m) << endl;
        break;
    case 7:
        cout << lograthm(m) << endl;
        break;
    case 8:
        cout << sin(m) << endl;
        break;
    case 9:
        cout << cos(m) << endl;
        break;
    case 10:
        cout << sin(m) / cos(m) << endl;
        break;
    case 11:
        cout << cos(m) / sin(m) << endl;
        break;
    case 12:
        cout << 1 / sin(m);
        break;
    case 13:
        cout << 1 / cos(m);
        break;
    default:
        cout << "Invalid operator" << endl;
        break;
    }
    char preference;
    cout << "Do you want to continue(y/n)" << endl;
    cin >> preference;
    if (preference == 'y')
    {
        goto label;
    }
    else
    {
        cout << "The calculations are done. :)" << endl;
    }
    return 0;
}
