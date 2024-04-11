#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const double Pi = 3.14; // ����� ��

    double radius, angle, circumference, area, sector_area;

    cout << "������� ������ ����������: ";
    cin >> radius;
    cout << "������� ���� ��������� �������: ";
    cin >> angle;

    if ((radius >= 1) and (angle > 0 and angle <= 360))
    {
        circumference = 2 * Pi * radius; // ����� ����������
        area = Pi * (radius * radius); // ������� �����
        sector_area = (area / 360) * angle ;// ������� ��������� ������� (� ��������)

        cout << "����� ����������: " << circumference << endl;
        cout << "������� �����: " << area << endl;
        cout << "������� ��������� �������: " << sector_area << endl;
    }
    else
    {
        cout << "����� ���������� �� ����������!" << endl;
    }

    return 0;
}
