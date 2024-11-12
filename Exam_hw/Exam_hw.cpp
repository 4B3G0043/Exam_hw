#include <iostream>
using namespace std;

int main() {
	int month = 1;
	string result = "";
	cout << "請輸入月份(1-12):";
	cin >> month;

	if (month < 1 || month > 12) {
		cout << "請輸入有效月份" << endl;
	}
	else {
		switch (month) {
		case 3:
		case 4:
		case 5:
			result = "春季";
			break;
		case 6:
		case 7:
		case 8:
			result = "夏季";
			break;
		case 9:
		case 10:
		case 11:
			result = "秋季";
			break;
		default:
			result = "冬季";
			break;
		}
		cout << month << "月是" << result << endl;
	}
}