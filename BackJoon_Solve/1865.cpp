//#include <iostream>
//#include <vector>
//#include <tuple>
//
//using namespace std;
//using Pair = pair<size_t, int>;
//using Tuple = tuple<size_t, size_t, int>;
//using Vector = vector< Tuple >;
//using Matrix = vector< vector< int > >;
//
//int main() {
//
//	size_t TC;
//	cin >> TC;
//
//	for (size_t i = 0; i < TC; i++){
//		size_t N, M, W;
//		cin >> N >> M >> W;
//
//		//Matrix mat(N + 1);
//		Vector edge_list;
//		
//		size_t S, E;
//		int T;
//
//		bool flag{ false };
//
//		for (size_t j = 0; j < M; j++){
//
//			cin >> S >> E >> T;
//			if (S == E) continue;
//			
//			edge_list.push_back(make_tuple(S, E, T));
//			edge_list.push_back(make_tuple(E, S, T));
//			
//			//mat[S].push_back(make_pair(E, T));
//			//mat[E].push_back(make_pair(S, T));
//
//		}
//
//		for (size_t j = 0; j < W; j++) {
//
//			cin >> S >> E >> T;
//			if (S == E) flag = true;
//			edge_list.push_back(make_tuple(S, E, -T));
//			//mat[S].push_back(make_pair(E, -T));
//			
//		}
//
//		if (flag) { cout << "YES" << '\n'; continue; }
//
//		vector<int> memo(N + 1, 1 << 18);
//		vector<int> status(N + 1);
//
//		int status_num = 0;		
//	
//		//while (status_num < N) {
//
//			for (size_t i = 1; i < N + 1; i++) {
//
//				if (status[i] == 0) {
//					memo[i] = 0;
//					status[i] = 1;
//					status_num++;
//					break;
//				}
//
//			}
//
//			for (size_t i = 0; i < N - 1 ; i++) {
//				for (const auto& itr : edge_list) {
//					//if (status[get<0>(itr)] == 0) continue;
//					memo[get<1>(itr)] = get<2>(itr) + memo[get<0>(itr)] < memo[get<1>(itr)] ? get<2>(itr) + memo[get<0>(itr)] : memo[get<1>(itr)];
//					//if (status[get<1>(itr)] == 0) status[get<1>(itr)] = 1;
//				}
//
//			}
//
//		
//
//		
//
//		/*for (const auto& itr : memo) cout << itr << ' ';
//		cout << endl;*/
//
//		
//
//		for (const auto& itr : edge_list) {
//
//			if (get<2>(itr) + memo[get<0>(itr)] < memo[get<1>(itr)] ) {
//				flag = true;
//				break;
//			}
//
//		}
//		
//		if (flag) cout << "YES" << '\n';
//		else cout << "NO" << '\n';
//
//
//	}
//
//
//}