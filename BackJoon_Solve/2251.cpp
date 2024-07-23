//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <algorithm>
//
//using namespace std;
//using Vector = vector< int >;
//using Matrix = vector< vector < int > >;
//using Cube = vector< Matrix >;
//using Tuple = tuple< size_t, size_t, size_t >;
//
//void Move(const Tuple& tp, Cube& cube, const Vector& bottle, vector< Tuple >& vec) {
//
//	size_t a{ get<0>(tp) };
//	size_t b{ get<1>(tp) };
//	size_t c{ get<2>(tp) };
//
//	//cout << a << ' ' << b << ' ' << c << endl;
//
//	size_t temp = a + b <= bottle[1] ? a : bottle[1] - b;
//	if (cube[a - temp][b + temp][c] == 0) cube[a - temp][b + temp][c] = 1, vec.push_back(make_tuple(a - temp, b + temp, c));
//
//	temp = a + c <= bottle[2] ? a : bottle[2] - c;
//	if (cube[a - temp][b][c + temp] == 0) cube[a - temp][b ][c + temp] = 1, vec.push_back(make_tuple(a - temp, b, c + temp));
//
//	temp = b + a <= bottle[0] ? b : bottle[0] - a;
//	if (cube[a + temp][b - temp][c] == 0) cube[a + temp][b - temp][c] = 1, vec.push_back(make_tuple(a + temp, b - temp, c));
//
//	temp = b + c <= bottle[2] ? b : bottle[2] - c;
//	if (cube[a][b - temp][c + temp] == 0) cube[a][b - temp][c + temp] = 1, vec.push_back(make_tuple(a, b - temp, c + temp));
//
//	temp = c + b <= bottle[1] ? c : bottle[1] - b;
//	if (cube[a][b + temp][c - temp] == 0) cube[a][b + temp][c - temp] = 1, vec.push_back(make_tuple(a, b + temp, c - temp));
//
//	temp = c + a <= bottle[0] ? c : bottle[0] - a;
//	if (cube[a + temp][b][c - temp] == 0) cube[a + temp][b][c - temp] = 1, vec.push_back(make_tuple(a + temp, b, c - temp));
//
//
//}
//
//int main() {
//
//	Vector bottle(3);
//	for (int i = 0; i < bottle.size(); i++) cin >> bottle[i];
//
//	Vector table(201);
//	
//	Cube cube(201);
//	for (auto& itr : cube) itr.resize(201);
//
//	for (auto& itr : cube) {
//		for (auto& itr_2 : itr) itr_2.resize(201);
//	}
//
//	vector< Tuple > vec;
//
//	vec.push_back(make_tuple(0, 0, bottle[2]));
//	cube[0][0][bottle[2]] = 1;
//
//	while (!vec.empty()) {
//
//		Tuple temp{ vec.back() };
//		vec.pop_back();
//
//		Move(temp, cube, bottle, vec);
//
//	}
//
//	Vector ans;
//	
//	for (size_t i = 0; i < 201; i++) {
//
//		for (size_t j = 0; j < 201; j++) {
//
//			if (cube[0][i][j] == 1) ans.push_back(j);
//
//		}
//
//	}
//
//	sort(ans.begin(), ans.end());
//
//	for (const auto& itr : ans) cout << itr << ' ';
//
//
//}