#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "�� ���� ���ڸ� �Է��ϼ���: ";
    cin >> num1 >> num2;

    bool isInteger = (num1 == (int)num1) && (num2 == (int)num2);

    cout << "����: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "����: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "����: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    if (num2 != 0) {
        double divResult = num1 / num2;
        if (isInteger)
            cout << "������: " << num1 << " / " << num2 << " = " << (int)divResult << endl; 
        else
            cout << "������: " << num1 << " / " << num2 << " = " << divResult << endl; 
    }
    else {
        cout << "������: 0���� ���� �� �����ϴ�!" << endl;
    }

    return 0;
}