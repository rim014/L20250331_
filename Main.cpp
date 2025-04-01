#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "µÎ °³ÀÇ ¼ıÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ";
    cin >> num1 >> num2;

    bool isInteger = (num1 == (int)num1) && (num2 == (int)num2);

    cout << "µ¡¼À: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "»¬¼À: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "°ö¼À: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    if (num2 != 0) {
        double divResult = num1 / num2;
        if (isInteger)
            cout << "³ª´°¼À: " << num1 << " / " << num2 << " = " << (int)divResult << endl; 
        else
            cout << "³ª´°¼À: " << num1 << " / " << num2 << " = " << divResult << endl; 
    }
    else {
        cout << "³ª´°¼À: 0À¸·Î ³ª´­ ¼ö ¾ø½À´Ï´Ù!" << endl;
    }

    return 0;
}