#include <iostream>
using namespace std;
int main1() {
	cout << boolalpha;
	cout << "====== 双路比较 ======" << endl;
	cout << "1 == 2: " << (1 == 2) << endl;
	cout << "1 != 2: " << (1 != 2) << endl;
	cout << "1 < 2:  " << (1 < 2) << endl;
	cout << "1 > 2:  " << (1 > 2) << endl;
	cout << "1 <= 2: " << (1 <= 2) << endl;
	cout << "1 >= 2: " << (1 >= 2) << endl;

	auto order = 1 <=> 2;
	cout << "====== 三路比较 ======" << endl;
	cout << "(1 <=> 2) == 0: " << (order == 0) << endl;
	cout << "(1 <=> 2) != 0: " << (order != 0) << endl;
	cout << "(1 <=> 2) < 0:  " << (order < 0) << endl;
	cout << "(1 <=> 2) > 0:  " << (order > 0) << endl;
	cout << "(1 <=> 2) <= 0: " << (order <= 0) << endl;
	cout << "(1 <=> 2) >= 0: " << (order >= 0) << endl;
}