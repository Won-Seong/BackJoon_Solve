//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//
//	int T;
//	cin >> T;
//
//	for (size_t i = 0; i < T; i++){
//
//		int ans{ 0 };
//
//		double x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		int n;
//		cin >> n;
//
//		double cx, cy, r;
//		double dist1, dist2;
//		
//		for (size_t j = 0; j < n; j++) {
//
//			cin >> cx >> cy >> r;
//			dist1 = sqrt( pow(x1 - cx, 2) + pow(y1 - cy, 2));
//			dist2 = sqrt( pow(x2 - cx, 2) + pow(y2 - cy, 2));
//			if ( (dist1 <= r && dist2 > r) || (dist1 > r && dist2 <= r) ) {
//				ans++;
//			}
//				
//		}
//
//		cout << ans << '\n';
//	}
//
//}