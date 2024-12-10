//#include <iostream>
//#include <cmath>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	string str;
//	string num;
//	size_t idx = 0;
//
//	for (size_t i = 0; i < 3; i++) {
//
//		cin >> str;
//		if (str[0] - '0' < 10) num = str, idx = i;
//
//	}
//
//	unsigned long long a = stoi(num);
//
//	for (; idx < 3; idx++) {
//
//		a++;
//
//	}
//	
//
//	if ( (a % 3 == 0) && (a % 5 == 0)) cout << "FizzBuzz";
//	else if (a % 3 == 0) cout << "Fizz";
//	else if (a % 5 == 0) cout << "Buzz";
//	else cout << a;
//}