#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Rus");

    double length, width, perimeter, area, diagonal;

    cout << "������� ����� ��������������: ";
    cin >> length;
    cout << "������� ������ ��������������: ";
    cin >> width;

    if (length > 0 && width > 0)
    {
        perimeter = 2 * (length + width);
        area = length * width;
        diagonal = sqrt(pow(length, 2) + pow(width, 2));

        cout << "�������� ��������������: " << perimeter << endl;
        cout << "������� ��������������: " << area << endl;
        cout << "����� ��������� ��������������: " << diagonal << endl;

        cout << endl;
    }
    else
    {
        cout << "������� �������� ������";
    }

}
