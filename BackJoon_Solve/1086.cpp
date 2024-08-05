//#include <iostream>
//#include <bitset>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//const unsigned long long M = 500000000000;
//
//int main() {
//
//	vector<unsigned long long> vec(39);
//	vec[0] = 1;
//	for (unsigned long long i = 1; i < vec.size(); i++) {
//
//		vec[i] = 3 * vec[i - 1];
//
//	}
//
//	unsigned long long N;
//	cin >> N;
//
//	bitset< 39 > bit(N);
//	string str = bit.to_string();
//	reverse(str.begin(), str.end());
//	//cout << str << endl;
//	
//	unsigned long long ans{ 0 };
//
//	for (size_t i = 0; i < str.size(); i++) {
//		if (str[i] == '1')
//			ans += vec[i];
//
//	}
//	
//	cout << ans << endl;
//
//}