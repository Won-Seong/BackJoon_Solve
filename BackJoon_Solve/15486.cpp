//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int N;
//	cin >> N;
//
//	vector<unsigned long> T(N);
//	vector<unsigned long> P(N);
//
//	for (size_t i = 0; i < N; i++) std::cin >> T[i] >> P[i];
//
//	vector< unsigned long> vec(N + 1);
//	//vector< vector < unsigned int > > mat(N);
//	//for (auto& itr : mat) itr.resize(N);
//
//	for (size_t i = 0; i < N; i++){
//		
//		if (i > 0 && vec[i] < vec[i - 1]) vec[i] = vec[i - 1];
//		if (i + T[i] > N) continue;
//		if(vec[i + T[i]] < vec[i] + P[i]) vec[i + T[i]] = vec[i] + P[i];
//
//	}
//
//	//for (const auto& itr : vec) std::cout << itr << ' ';
//	//std::cout << std::endl;
//	std::cout << max(vec[N - 1], vec[N]);
//}