//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using Vector = std::vector< int >;
//using Matrix = std::vector< std::vector< int > >;
//using Pair = std::pair< size_t, int >;
//using PairVector = std::vector< Pair >;
//using PairMatrix = std::vector< PairVector >;
//
//void foo(Vector& visited, Vector& table, PairMatrix& mat, PairMatrix& tree, size_t now, int depth) {
//
//	table[now] = depth;
//
//	int temp{ 0 };
//	for (size_t i = 0; i < mat[now].size() - 1; i++) {
//
//		temp = mat[now][i].first;
//		if (mat[temp][i].first == -1) break;
//		else {
//			mat[now][i + 1].first = mat[temp][i].first;
//			mat[now][i + 1].second = mat[temp][i].second + mat[now][i].second;
//		}
//
//	}
//
//	for (const auto& itr : tree[now]) {
//
//		if (visited[itr.first] == 0) {
//			visited[itr.first] = 1;
//			mat[itr.first][0].first = now;
//			mat[itr.first][0].second += itr.second;
//			foo(visited, table, mat, tree, itr.first, depth + 1);
//
//		}
//
//	}
//
//}
//
//
//int main() {
//	std::iostream::sync_with_stdio(false);
//	std::cin.tie(NULL);
//
//	size_t N;
//	std::cin >> N;
//	PairMatrix matrix_(N);
//
//	size_t l{ size_t() }, r{ size_t() };
//	unsigned int val{ 0 };
//
//	for (size_t i = 0; i < N - 1; i++) {
//
//		std::cin >> l >> r >> val;
//		l--, r--;
//		matrix_[l].push_back(std::make_pair(r, val));
//		matrix_[r].push_back(std::make_pair(l, val));
//
//	}
//
//	Vector visited(N, 0);
//	Vector depth_table(N);
//	PairMatrix depth_matrix(N);
//	for (auto& itr : depth_matrix) itr.resize(static_cast<size_t>(std::log2(N)) + 1, std::make_pair(-1, 0));
//
//	visited[0] = 1;
//	depth_matrix[0][0].first = 0;
//
//	foo(visited, depth_table, depth_matrix, matrix_, 0, 0);
//
//	std::cin >> N;
//
//	for (size_t i = 0; i < N; i++) {
//
//		std::cin >> l >> r;
//		l--, r--;
//		int ans = 0;
//
//		while (depth_table[l] != depth_table[r]) {
//
//			if (depth_table[l] > depth_table[r]) ans += depth_matrix[l][static_cast<size_t>(std::floor(std::log2(depth_table[l] - depth_table[r])))].second, l = depth_matrix[l][static_cast<size_t>(std::floor(std::log2(depth_table[l] - depth_table[r])))].first;
//			else ans += depth_matrix[r][static_cast<size_t>(std::floor(std::log2(depth_table[r] - depth_table[l])))].second, r = depth_matrix[r][static_cast<size_t>(std::floor(std::log2(depth_table[r] - depth_table[l])))].first;
//		}
//
//		if (l != r) {
//
//			for (int i = static_cast<size_t>(std::floor(std::log2(depth_table[l]))); i >= 0; i--)
//			{
//
//				if (depth_matrix[l][i].first != depth_matrix[r][i].first) {
//					ans += depth_matrix[l][i].second, ans += depth_matrix[r][i].second;
//					l = depth_matrix[l][i].first, r = depth_matrix[r][i].first;
//				}
//
//			}
//
//			ans += depth_matrix[l][0].second, ans += depth_matrix[r][0].second;
//
//		}
//		std::cout << ans << '\n';
//
//	}
//
//}