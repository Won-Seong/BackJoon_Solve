//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <bitset>
//
//using namespace std;
//using Pair = pair<size_t, size_t>;
//size_t timet = 0;
//
//
//void foo(Pair l, Pair r, const Pair& ans) {
//
//	if (r.second - l.second <= 0 && r.first - l.first <= 0) {
//		if (ans.first == l.first && ans.second == l.second) cout << timet << endl;
//		timet++;
//		return;
//	}
//	else {
//		//cout << l.first << ' ' << l.second << ' ' << timet << endl;
//		size_t dif = ((r.first - l.first) + 1) / 2;
//		if (dif <= 1) {
//			foo(make_pair(l.first, l.second), make_pair(r.first - dif, r.second - dif), ans);
//			foo(make_pair(l.first, r.second - dif + 1), make_pair(r.first - dif, r.second), ans);
//			foo(make_pair(r.first - dif + 1, l.second), make_pair(r.first, r.second - dif), ans);
//			foo(make_pair(r.first - dif + 1, r.second - dif + 1), make_pair(r.first, r.second), ans);
//			return;
//		}
//		
//		if ((l.first <= ans.first && ans.first <= r.first - dif) && (l.second <= ans.second && ans.second <= r.second - dif))  foo(make_pair(l.first, l.second), make_pair(r.first - dif, r.second - dif), ans);
//		else timet += pow(((r.first - dif - l.first) + 1), 2) ;
//		
//		if ((l.first <= ans.first && ans.first <= r.first - dif) && (r.second - dif + 1 <= ans.second && ans.second <= r.second)) foo(make_pair(l.first, r.second - dif + 1), make_pair( r.first - dif , r.second), ans);
//		else timet += pow(((r.first - dif - l.first) + 1), 2) ;
//		
//		if ((r.first - dif + 1 <= ans.first && ans.first <= r.first) && (l.second <= ans.second && ans.second <= r.second - dif)) foo( make_pair(r.first - dif + 1  , l.second), make_pair(r.first , r.second - dif), ans);
//		else timet += pow(((r.first - (r.first - dif + 1)) + 1), 2) ;
//		
//		if ((r.first - dif + 1 <= ans.first && ans.first <= r.first) && (r.second - dif + 1 <= ans.second && ans.second <= r.second)) foo( make_pair(r.first - dif + 1, r.second - dif + 1), make_pair(r.first, r.second), ans);
//		else timet += pow(((r.first - (r.first - dif + 1) ) + 1), 2) ;
//		
//	}
//	return;
//}
//
//int main() {
//
//	size_t N, r, c;
//	cin >> N >> r >> c;
//	bitset<5> bit(N);
//	size_t power{ 1 };
//	string str = bit.to_string();
//	reverse(str.begin(), str.end());
//	size_t temp = 1;
//
//	for (size_t i = 0; i < str.size(); i++) {
//		if (temp == 1) temp *= 2;
//		else temp *= temp;
//		if (str[i] == '1') power *= temp;
//	}
//
//	foo(make_pair(0, 0), make_pair( power - 1, power - 1), make_pair(r, c) );
//
//}