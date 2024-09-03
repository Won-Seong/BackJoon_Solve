//#include <iostream>
//#include <vector>
//#include <stack>
//#include <algorithm>
//
//using namespace std;
//using Vector = vector< size_t >;
//using Matrix = vector< Vector >;
//
///*
//5 5
//1 2
//1 3
//2 4
//3 4
//4 5
//*/
//
//void DFS(size_t idx, vector<size_t>& L, vector< int >& flags, const Matrix& edges) {
//
//	flags[idx] = 1;
//	
//	if (!edges[idx].empty()) {
//
//		for(const auto& itr : edges[idx]) 
//			if (flags[itr] == 0) DFS(itr, L, flags, edges);
//
//	}
//	
//	L.push_back(idx);
//	return;
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t V, E;
//	cin >> V >> E;
//
//	size_t A, B;
//	Matrix edges(V + 1);
//	Matrix reverse_edges(V + 1);
//
//	for (size_t i = 0; i < E; i++){
//
//		cin >> A >> B;
//		edges[A].push_back(B);
//		reverse_edges[B].push_back(A);
//
//	}
//
//	vector< size_t > L;
//	vector< int > flags(V + 1);
//	size_t idx{ 1 };
//	
//
//	while (idx <= V) {
//
//		while (idx <= V && flags[idx] == 1) idx++;
//		if (idx > V) break;
//		DFS(idx, L, flags, edges);
//
//	}
//
//	//for (const auto& itr : L) cout << itr << ' ';
//	//cout << endl;
//
//	flags.clear();
//	flags.resize(V + 1, 0);
//	idx = 0;
//
//	vector< size_t > P;
//	Matrix table(V + 1);
//
//	for (vector< size_t >::const_reverse_iterator iter = L.crbegin(); iter != L.crend(); iter++) {
//
//		if (flags[*iter] == 1) continue;
//		else {
//
//			DFS(*iter, P, flags, reverse_edges);
//			sort(P.begin(), P.end());
//			table[P.front()] = P;
//			P.clear();
//			idx++;
//		}
//
//	}
//
//	cout << idx << '\n';
//
//	for (const auto& itr : table) {
//
//		if (!itr.empty()) {
//
//			for (const auto& itr_2 : itr) cout << itr_2 << ' ';
//			cout << -1 << '\n';
//
//		}
//
//	}
//
//}
