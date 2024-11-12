#include <iostream>
using namespace std;

int main() {
	int month = 1;
	string result = "";
	cout << "請輸入月份(1-12)";
	cin >> month;

	if (month < 1 || month > 12) {
		cout << "請輸入有效的月份" << endl;
	}
	else {
		if (month >= 3 && month <= 5) result = "春季";
		else if (month >= 6 && month <= 8) result = "夏季";
		else if (month >= 9 && month <= 11) result = "秋季";
		else result = "冬季";
		cout << month << "月是" << result << endl;
	}
}