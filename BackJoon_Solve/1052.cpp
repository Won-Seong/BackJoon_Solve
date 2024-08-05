//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int main() {
//
//	int N, K;
//	cin >> N >> K;
//
//	vector< int > vec( 30 );
//	vec[0] = N;
//	
//	int size = N;
//	int ans = 0;
//
//	while (size > K) {
//
//		for (int i = 0; i < vec.size() - 1; i++) {
//			
//			while (vec[i] >= 2) { 
//				
//				vec[i + 1]++, vec[i] -= 2, size--;
//				if (size <= K) break;
//			}
//
//			
//		}
//
//		if (size <= K) break;
//		else size++, vec[0]++, ans++;
//
//		
//	}
//
//	cout << ans;
//
//}