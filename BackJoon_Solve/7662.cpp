//#include <iostream>
//#include <vector>
//#include <queue>
//#include <unordered_map>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	size_t T;
//	cin >> T;
//
//	for (size_t i = 0; i < T; i++){
//
//		size_t k;
//		cin >> k;
//		char ch;
//		long n;
//		priority_queue<long, vector<long>, less< long > > max_que;
//		priority_queue<long, vector<long>, greater< long > > min_que;
//		unordered_map<long, long> map;
//
//		for (size_t j = 0; j < k; j++){
//			cin >> ch >> n;
//			switch (ch)
//			{
//			case 'I' :
//				max_que.push(n);
//				min_que.push(n);
//				break;
//			case 'D' :
//				while (!max_que.empty() && map.find(max_que.top()) != map.end() && map[max_que.top()] < 0) {
//					map[max_que.top()]++;
//					if (map[max_que.top()] == 0) map.erase(max_que.top());
//					max_que.pop();
//				}
//				while (!min_que.empty() && map.find(min_que.top()) != map.end() && map[min_que.top()] > 0) {
//					map[min_que.top()]--;
//					if (map[min_que.top()] == 0) map.erase(min_que.top());
//					min_que.pop();
//				}
//
//				if (max_que.empty() || min_que.empty()) {
//					continue;
//				}
//				else if (max_que.top() == min_que.top()) {
//					max_que.pop();
//					min_que.pop();
//				}
//				else if (n == 1) {
//					/*while (map.find(max_que.top()) != map.end() && map[max_que.top()] < 0) {
//						map[max_que.top()]++;
//						if (map[max_que.top()] == 0) map.erase(max_que.top());
//						max_que.pop();
//					}*/
//
//					if (map.find(max_que.top()) == map.end()) map.insert(make_pair(max_que.top(), 1));
//					else map[max_que.top()]++;
//					max_que.pop();
//				}
//				else {
//					/*while (map.find(min_que.top()) != map.end() && map[min_que.top()] > 0) {
//						map[min_que.top()]--;
//						if (map[min_que.top()] == 0) map.erase(min_que.top());
//						min_que.pop();
//					}*/
//
//					if (map.find(min_que.top()) == map.end()) map.insert(make_pair(min_que.top(), -1));
//					else map[min_que.top()]--;
//					min_que.pop();
//				}
//
//				//cout << max_que.top() << ' ' << min_que.top() << '\n';
//				//cout << max_que.size() << ' ' << min_que.size() << '\n';
//				
//				break;
//			default:
//				break;
//			}
//
//		}
//
//		while (!max_que.empty() && map.find(max_que.top()) != map.end() && map[max_que.top()] < 0) {
//			map[max_que.top()]++;
//			if (map[max_que.top()] == 0) map.erase(max_que.top());
//			max_que.pop();
//		}
//		while (!min_que.empty() && map.find(min_que.top()) != map.end() && map[min_que.top()] > 0) {
//			map[min_que.top()]--;
//			if (map[min_que.top()] == 0) map.erase(min_que.top());
//			min_que.pop();
//		}
//
//		if (max_que.empty() || min_que.empty()) cout << "EMPTY" << endl;
//		else cout << max_que.top() << " " << min_que.top() << endl;
//
//	}
//
//}