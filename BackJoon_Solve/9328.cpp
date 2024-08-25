//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//using MAP = vector<string>;
//using Pair = pair< size_t, size_t >;
//using Vector = vector< int >;
//using Matrix = vector< vector < Pair > >;
//using Queue = queue< Pair >;
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	std::cin.tie(NULL);
//
//	size_t TC;
//	cin >> TC;
//
//	for (size_t i = 0; i < TC; i++){
//
//		size_t h, w;
//		cin >> h >> w;
//
//		MAP map(h);
//		for (auto& itr : map) cin >> itr;
//
//		Matrix doors(26);
//		Vector keys(26);
//
//		string str;
//		cin >> str;
//
//		if (str != "0") {
//			for (const auto& itr : str) keys[itr - 'a'] = 1;
//		}
//
//			
//
//		int ans{ 0 };
//		Queue que;
//
//		// edges
//		for (size_t j = 0; j < w; j++) {
//
//			if (map[0][j] == '*');
//			else if (map[0][j] == '.') que.push(make_pair(0, j));
//			else if (map[0][j] == '$') que.push(make_pair(0, j)), ans++;
//			else if (map[0][j] > 96) {
//				int idx{ map[0][j] - 'a' };
//				keys[idx] = 1;
//				que.push(make_pair(0, j));
//				while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//			}
//			else {
//				int idx{ map[0][j] - 'A' };
//				if (keys[idx] == 0) doors[idx].push_back(make_pair(0, j));
//				else que.push(make_pair(0, j));
//			}
//			map[0][j] = '*';
//		}
//		for (size_t j = 0; j < w; j++) {
//
//			if (map[h - 1][j] == '*');
//			else if (map[h - 1][j] == '.') que.push(make_pair(h - 1, j));
//			else if (map[h - 1][j] == '$') que.push(make_pair(h - 1, j)), ans++;
//			else if (map[h - 1][j] > 96) {
//				int idx{ map[h - 1][j] - 'a' };
//				keys[idx] = 1;
//				que.push(make_pair(h - 1, j));
//				while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//			}
//			else {
//				int idx{ map[h - 1][j] - 'A' };
//				if (keys[idx] == 0) doors[idx].push_back(make_pair(h - 1, j));
//				else que.push(make_pair(h - 1, j));
//			}
//			map[h - 1][j] = '*';
//		}
//		for (size_t j = 0; j < h; j++) {
//
//			if (map[j][0] == '*');
//			else if (map[j][0] == '.') que.push(make_pair(j, 0));
//			else if (map[j][0] == '$') que.push(make_pair(j, 0)), ans++;
//			else if (map[j][0] > 96) {
//				int idx{ map[j][0] - 'a' };
//				keys[idx] = 1;
//				que.push(make_pair(j, 0));
//				while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//			}
//			else {
//				int idx{ map[j][0] - 'A' };
//				if (keys[idx] == 0) doors[idx].push_back(make_pair(j, 0));
//				else que.push(make_pair(j, 0));
//			}
//			map[j][0] = '*';
//		}
//		for (size_t j = 0; j < h; j++) {
//			if (map[j][w - 1] == '*');
//			else if (map[j][w - 1] == '.') que.push(make_pair(j, w - 1));
//			else if (map[j][w - 1] == '$') que.push(make_pair(j, w - 1)), ans++;
//			else if (map[j][w - 1] > 96) {
//				int idx{ map[j][w - 1] - 'a' };
//				keys[idx] = 1;
//				que.push(make_pair(j, w - 1));
//				while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//			}
//			else {
//				int idx{ map[j][w - 1] - 'A' };
//				if (keys[idx] == 0) doors[idx].push_back(make_pair(j, w - 1));
//				else que.push(make_pair(j, w - 1));
//			}
//			map[j][w - 1] = '*';
//		}
//
//		// Find
//		Pair temp;
//
//		while (!que.empty()) {
//
//			temp = que.front();
//			//cout << temp.first << ' ' << temp.second << endl;
//			que.pop();
//			if (map[temp.first][temp.second] == '$') {
//				//cout << temp.first << ' ' << temp.second << '\n';
//				ans++;
//			}
//				
//				
//			map[temp.first][temp.second] = '*';
//
//			if (temp.first > 0) {
//
//				if (map[temp.first - 1][temp.second] == '*') ;
//				else if (map[temp.first - 1][temp.second] == '.') que.push(make_pair(temp.first - 1, temp.second));
//				else if (map[temp.first - 1][temp.second] == '$') que.push(make_pair(temp.first - 1, temp.second)), ans++;
//				else if (map[temp.first - 1][temp.second] > 96) {
//					int idx{ map[temp.first - 1][temp.second] - 'a' };
//					keys[idx] = 1;
//					que.push(make_pair(temp.first - 1, temp.second));
//					while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//				}
//				else {
//					int idx{ map[temp.first - 1][temp.second] - 'A' };
//					if (keys[idx] == 0) doors[idx].push_back(make_pair(temp.first - 1, temp.second));
//					else que.push(make_pair(temp.first - 1, temp.second));
//				}
//				map[temp.first - 1][temp.second] = '*';
//			}
//
//			
//
//			if (temp.first < h - 1) {
//
//				if (map[temp.first + 1][temp.second] == '*') ;
//				else if (map[temp.first + 1][temp.second] == '.') que.push(make_pair(temp.first + 1, temp.second));
//				else if (map[temp.first + 1][temp.second] == '$') que.push(make_pair(temp.first + 1, temp.second)), ans++;
//				else if (map[temp.first + 1][temp.second] > 96) {
//					int idx{ map[temp.first + 1][temp.second] - 'a' };
//					keys[idx] = 1;
//					que.push(make_pair(temp.first + 1, temp.second));
//					while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//				}
//				else {
//					int idx{ map[temp.first + 1][temp.second] - 'A' };
//					if (keys[idx] == 0) doors[idx].push_back(make_pair(temp.first + 1, temp.second));
//					else que.push(make_pair(temp.first + 1, temp.second));
//				}
//				map[temp.first + 1][temp.second] = '*';
//			}
//
//			
//
//			if (temp.second > 0) {
//
//				if (map[temp.first][temp.second - 1] == '*') ;
//				else if (map[temp.first][temp.second - 1] == '.') que.push(make_pair(temp.first, temp.second - 1));
//				else if (map[temp.first][temp.second - 1] == '$') que.push(make_pair(temp.first, temp.second - 1)), ans++;
//				else if (map[temp.first][temp.second - 1] > 96) {
//					int idx{ map[temp.first][temp.second - 1] - 'a' };
//					keys[idx] = 1;
//					que.push(make_pair(temp.first, temp.second - 1));
//					while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//				}
//				else {
//					int idx{ map[temp.first][temp.second - 1] - 'A' };
//					if (keys[idx] == 0) doors[idx].push_back(make_pair(temp.first, temp.second - 1));
//					else que.push(make_pair(temp.first, temp.second - 1));
//				}
//				map[temp.first][temp.second - 1] = '*';
//			}
//
//			
//			if (temp.second < w - 1) {
//				
//				if (map[temp.first][temp.second + 1] == '*') ;
//				else if (map[temp.first][temp.second + 1] == '.') que.push(make_pair(temp.first, temp.second + 1));
//				else if (map[temp.first][temp.second + 1] == '$') que.push(make_pair(temp.first, temp.second + 1)), ans++;
//				else if (map[temp.first][temp.second + 1] > 96) {
//					int idx{ map[temp.first][temp.second + 1] - 'a' };
//					keys[idx] = 1;
//					que.push(make_pair(temp.first, temp.second + 1));
//					while (!doors[idx].empty()) que.push(doors[idx].back()), doors[idx].pop_back();
//				}
//				else {
//					int idx{ map[temp.first][temp.second + 1] - 'A' };
//					if (keys[idx] == 0) doors[idx].push_back(make_pair(temp.first, temp.second + 1));
//					else que.push(make_pair(temp.first, temp.second + 1));
//				}
//				map[temp.first][temp.second + 1] = '*';
//			}
//
//		}
//
//		//for (const auto& itr : keys) cout << itr << ' ';
//
//		cout << ans << endl;
//
//
//	}
//
//
//}