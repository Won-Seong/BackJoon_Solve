//#include <iostream>
//#include <vector>
//
//using namespace std;
//using Vector = vector<int>;
//using Matrix = vector<Vector>;
//
//Matrix G;
//
//int N;
//
//Vector visited;
//
//static void print(const Matrix& mat) {
//	for (const auto& itr : mat) {
//		for (const auto& itr2 : itr)
//			cout << itr2 << ' ';
//		cout << endl;
//	}
//	return;
//}
//
//static void BFS(int index) {
//	if (visited[index] == 1) return;
//	else visited[index] = 1;
//	
//	for (size_t i = 0; i < N; i++) {
//		if (G[index][i] == 1) {
//				G[index][i] = 1;
//				BFS(i);
//				for (size_t j = 0; j < N; j++) {
//					G[index][j] = G[index][j] | G[i][j];
//				}
//			}
//	}
//	
//	for (size_t i = 0; i < N; i++) {
//		if (G[i][index] == 1) {
//			for (size_t j = 0; j < N; j++) {
//				G[i][j] = G[index][j] | G[i][j];
//			}
//		}
//	}
//	/*cout << index << endl;
//	cout << endl;
//	print(G);
//	cout << endl;*/
//	return;
//}
//
//int main() {
//	cin >> N;
//	G.resize(N);
//	for (auto& itr : G)
//		itr.resize(N);
//	G = G;
//		
//	for (auto& itr : G) {
//		for (auto& itr2 : itr) cin >> itr2;
//	}
//	
//	visited.resize(N);
//	for (size_t i = 0; i < N; i++) {
//		if(visited[i] == 0) BFS(i);
//	}
//	
//	print(G);
//}