//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//using Matrix = vector<vector<int>>;
//using Vector = vector<int>;
//
//void PrintMat(const Matrix& mat) {
//    for (const auto& row : mat) {
//        for (const auto& elem : row) {
//            cout << elem << ' ';
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int N, M, K, T;
//    cin >> N >> M >> K >> T;
//
//    Vector vec(N, 0);
//    int l, r;
//
//    for (int i = 0; i < M; i++) {
//        cin >> l >> r;
//        l--, r--;
//        while (l < r) vec[l++]++;
//    }
//
//    Matrix dp(K + 1, Vector(N, 0));
//
//    for (int k = 0; k <= K; k++) {
//        if (k + vec[0] >= T) dp[k][0] = 1;
//    }
//
//    for (int i = 1; i < N; i++) {
//        for (int k = K; k >= 0; k--) {
//            for (int j = K; j >= 0; j--) {
//                int friends = vec[i] >= T ? 0 : j;
//                if (friends + vec[i] >= T) {
//                    dp[k][i] = max(dp[k][i], dp[j][i - 1] + 1);
//                }
//                else {
//                    dp[k][i] = max(dp[k][i], dp[j][i - 1]);
//                }
//            }
//        }
//    }
//
//    PrintMat(dp);
//    int ans = 0;
//    for (int k = 0; k <= K; k++) {
//        ans = max(ans, dp[k][N - 1]);
//    }
//
//    cout << ans;
//
//    return 0;
//}
