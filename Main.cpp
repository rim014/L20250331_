#include <iostream>

using namespace std;

int main()
{
	int Number1 = 5;
	int Number2 = 4;


	//형변환 ,Casting
	float A = ((float)5.0000000f;//f 붙이는 이유는 플롯쓰려고
	int B = (int)A;
	int Number3 = Number1 + Number2;
	
	cout << Number3 << endl;

	int Number3 = Number1 + Number2;

	cout << Number3 << endl;

	int Number4 = Number1 - Number2;

	cout << Number4 << endl;

	int Number5 = Number1 * Number2;

	cout << Number5 << endl;

	float Number6 = (float)Number1 / (float)Number2;

	cout << Number6 << endl;

	int Number7 = Number1 % Number2;

	cout << Number7 << endl;


	return 0;
}