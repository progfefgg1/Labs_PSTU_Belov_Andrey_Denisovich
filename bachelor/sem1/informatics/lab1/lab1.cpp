#include <iostream>
#include <math.h>

using namespace std;

int task1float()
{
    cout << "TASK 1 FLOAT:" << "\n";

    float a;
    float b;

    cout << "insert a: "; cin >> a;
    cout << "insert b: "; cin >> b;

    float Chislitel = pow(a - b, 3) - (pow(a, 3) - 3 * a * pow(b, 2));
    float znamenatel = pow(b, 3) - 3 * pow(a, 2) * b;
    float znachenie = Chislitel / znamenatel;

    cout << "result: " << znachenie << "\n";

    return 0;
}

int task1double()
{
    cout << "TASK 1 DOUBLE:" << "\n";

    double a;
    double b;

    cout << "insert a: "; cin >> a;
    cout << "insert b: "; cin >> b;

    double Chislitel = pow(a - b, 3) - (pow(a, 3) - 3 * a * pow(b, 2));
    double znamenatel = pow(b, 3) - 3 * pow(a, 2) * b;
    double znachenie = Chislitel / znamenatel;

    cout << "result: " << znachenie << "\n";

    return 0;
}

int task2()
{
    cout << "TASK 2:" << "\n";

    int m;
    int n;

    cout << "insert m: ";
    cin >> m;
    cout << "insert n: ";
    cin >> n;

    int answer1 = m - ++n;
    int answer2 = ++m > --n;
    int answer3 = --n < ++m;

    cout << "answer 1: " << answer1 << "\n" << "answer 2: " << answer2 << "\n" << "answer 3: " << answer3 << "\n";

    return 0;
}   

int main()
{
    task1float();
    task1double();
    task2();
    return 0;
}