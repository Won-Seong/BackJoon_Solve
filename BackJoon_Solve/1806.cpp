//#include <iostream>
//#include <vector>
//
//int main() {
//
//	size_t N, S;
//	std::cin >> N >> S;
//	std::vector< unsigned int > vector(N);
//
//	for (size_t i = 0; i < N; i++)
//	{
//		std::cin >> vector[i];
//	}
//
//	size_t first{ 0 }, second{ 0 };
//	unsigned int sum{ 0 };
//	unsigned int result{ 100001 };
//	while (second < N && first < N) {
//		//std::cout << sum << ' ' << result << ' ' << first << ' ' << second << '\n';
//		if (sum < S) {
//			sum += vector[second];
//			second++;
//		}
//		else {
//			result = result < second - first? result : second - first;
//			if (first == second) {
//				break;
//			}
//			else sum -= vector[first++];
//		}
//	}
//
//	if (result > 1) {
//		while (first < N && sum >= S) {
//			result = result < second - first? result : second - first;
//			sum -= vector[first++];
//		}
//	}
//
//	if (result > 100000)
//		std::cout << 0;
//	else
//		std::cout << result;
//}