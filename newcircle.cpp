//new circle
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const double Pi = 3.14; // ��᫮ ��

    double radius, angle, circumference, area, sector_area;

    cout << "������ ࠤ��� ���㦭���: ";
    cin >> radius;
    cout << "������ 㣮� ��㣮���� ᥪ��: ";
    cin >> angle;

    if ((radius >= 1) and (angle > 0 and angle <= 360))
    {
        circumference = 2 * Pi * radius; // ����� ���㦭���
        area = Pi * (radius * radius); // ���頤� ��㣠
        sector_area = (area / 360) * angle ;// ���頤� ��㣮���� ᥪ�� (� �ࠤ���)

        cout << "����� ���㦭���: " << circumference << endl;
        cout << "���頤� ��㣠: " << area << endl;
        cout << "���頤� ��㣮���� ᥪ��: " << sector_area << endl;
    }
    else
    {
        cout << "����� ���㦭��� �� �������!" << endl;
    }

    return 0;
}
