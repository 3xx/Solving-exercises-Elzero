
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
   


	cout << " Enter Your Ascii-Value : "; // ادخل الأسكي فاليو 
	int x;
	cin >> x;
	cout << "[>] " << char(x) << endl;
	cout << " Enter Your charctor : "; // أدخل الحرف
	char y;
	cin >> y;
	cout << "[>] " << int(y) << endl;

	return 0;
}

