#include <iostream>
using namespace std;
int main() {
	cout << boolalpha;
	cout << "true && true -> " << (true && true) << endl;
	cout << "true && false -> " << (true && false) << endl;
	cout << "false && true -> " << (false && true) << endl;
	cout << "false && false -> " << (false && false) << endl;
	
	cout << "true || true -> " << (true || true) << endl;
	cout << "true || false -> " << (true || false) << endl;
	cout << "false || true -> " << (false || true) << endl;
	cout << "false || false -> " << (false || false) << endl;
	
	cout << "!true -> " << !true << endl;
	cout << "!false -> " << !false << endl;

	int a = 0;
	bool b = false && a++;
	cout << "逻辑且，如果左边是 false，则右边不计算: " << a << endl;
	b = true && a ++;
	cout << a << endl;
	b = true || a ++;
	cout << "逻辑或，如果左边是 true，则右边不计算: " << a << endl;
	b = false || a ++;
	cout << a << endl;
}