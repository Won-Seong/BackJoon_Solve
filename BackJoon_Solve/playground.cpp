//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//#include <tuple>
//
//using namespace std;
//using Vector = vector< unsigned int >;
//using Matrix = vector< Vector >;
//
//string str;
//Vector vec;
//Matrix mat;
//unsigned int INI = 1000;
//
//static size_t FindPalindrome(size_t i, size_t j) {
//
//	size_t start{ i };
//	size_t l{ start };
//	size_t r{ j };
//
//	bool flag = false;
//
//	while (l < r) {
//
//		if (str[l] == str[r]) {
//
//			flag = true;
//			l++;
//			r--;
//
//		}
//		else {
//
//			/*if (flag) start = l;
//			else start = ++l;*/
//			start++;
//			l = start;
//			flag = false;
//			r = j;
//
//		}
//
//	}
//
//	return start;
//
//}
//
//int main() {
//
//	cin >> str;
//	//cout << str.size() << '\n';
//	mat.resize(str.size());
//	for (auto& itr : mat) itr.resize(str.size(), INI);
//	vec.resize(str.size());
//	vec[0] = 1;
//	// Subproblems --> i to j is ?
//
//	size_t idx;
//
//	for (size_t i = 1; i < str.size(); i++){
//		vec[i] = vec[i - 1] + 1;
//		for (size_t l = 0; l < i; l++) {
//			idx = FindPalindrome(l, i);
//			if (idx == 0) {
//				vec[i] = 1;
//				break;
//			}
//			else vec[i] = vec[i] < vec[idx - 1] + 1 ? vec[i] : vec[idx - 1] + 1;
//			l = idx;
//			//cout << i << ' ' << l << ' ' << idx << ' ' << vec[i] << '\n';
//		}
//		
//		
//	}
//
//	//for (const auto& itr : vec) cout << itr << ' ';
//	cout << vec[str.size() - 1] << '\n';
//
//}