//#include <iostream>
//#include <cmath>
//#include <bitset>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//using Vector = vector< unsigned long long >;
//using Matrix = vector< Vector >;
//unsigned long long MOD = 1000000007;
//
//Matrix mat_mul(const Matrix& l, const Matrix& r) {
//
//	Matrix t(2);
//	for (auto& itr : t) itr.resize(2);
//
//	t[0][0] = (l[0][0] * r[0][0] + l[0][1] * r[1][0]) % MOD;
//	t[1][0] = (l[0][0] * r[0][1] + l[0][1] * r[1][1]) % MOD;
//	t[0][1] = (l[1][0] * r[0][0] + l[1][1] * r[1][0]) % MOD;
//	t[1][1] = (l[1][0] * r[0][1] + l[1][1] * r[1][1]) % MOD;
//
//	return t;
//}
//
//Vector Fib(const Vector& vec) {
//
//	Matrix t(2);
//	for (auto& itr : t) itr.resize(2);
//
//	t[0][0] = 1;
//	t[0][1] = 1;
//	t[1][0] = 1;
//	t[1][1] = 0;
//
//	Vector temp(2);
//	
//	temp[0] = ((t[0][0] * vec[0]) + (t[0][1] * vec[1])) % MOD;
//	
//	temp[1] = ((t[1][0] * vec[0]) + (t[1][1] * vec[1])) % MOD;
//	
//	return temp;
//
//}
//
//Matrix foo(unsigned long long n) {
//
//	Matrix t(2);
//	for (auto& itr : t) itr.resize(2);
//
//	t[0][0] = 1;
//	t[0][1] = 1;
//	t[1][0] = 1;
//	t[1][1] = 0;
//
//	Matrix ans(2);
//	for (auto& itr : ans) itr.resize(2, 0);
//	ans[0][0] = 1;
//	ans[1][1] = 1;
//
//	string str = bitset<64>(n).to_string();
//
//	reverse(str.begin(), str.end());
//
//	for (size_t i = 0; i < str.size(); i++) {
//
//		if (i == 0);
//		else t = mat_mul(t, t);
//		if (str[i] == '1') ans = mat_mul(ans, t);
//
//	}
//
//	//bool flag = false;
//
//	/*if (n % 2 == 0) flag = false;
//	else flag = true;
//
//	while (n > 1) {
//
//		ans = mat_mul(ans, ans);
//		n /= 2;
//
//	}
//
//	if (flag) ans = mat_mul(ans, t);*/
//
//	return ans;
//
//}
//
//int main() {
//
//	unsigned long long n;
//	cin >> n;
//
//	Vector vec(2);
//	vec[0] = 1;
//	vec[1] = 0;
//
//	Matrix t = foo(n);
//	//cout << t[0][0] << ' ' << t[0][1] << '\n' << t[1][0] << ' ' << t[1][1] << endl;
//
//	cout << t[1][0] * vec[0] + t[1][1] * vec[1] << endl;
//
//	
//
//	
//
//	//double front{  pow(((1 + sqrt(5)) / 2), n) };
//	//front *= (1 / sqrt(5));
//	//double back{ (1 / sqrt(5)) * pow(((1 - sqrt(5)) / 2), n) };
//
//	//cout << front - back;
//
//
//}