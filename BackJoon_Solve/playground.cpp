//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//
//using namespace std;
//
//static void Utility(vector<bool>& visited, std::vector<int>& ans, const int& n, const int& m, vector< vector< int > >& mat) {
//
//    if (ans.size() >= m) {
//        mat.push_back(ans);
//        visited[ans.back()] = false;
//        ans.pop_back();
//        return;
//    }
//
//    for (int i = 1; i <= n; i++) {
//
//        if (visited[i]) continue;
//        else {
//            visited[i] = true;
//            ans.push_back(i);
//            Utility(visited, ans, n, m, mat);
//        }
//
//    }
//
//    if (!ans.empty()) {
//        visited[ans.back()] = false;
//        ans.pop_back();
//    }
//    return;
//
//}
//
//static void Perm(const int& n, const int& m, vector< vector<int> >& mat) {
//
//    std::vector<int> ans;
//    int depth = 0;
//    std::vector<bool> visited(n + 1, false);
//    Utility(visited, ans, n, m, mat);
//
//}
//
//
//int main() {
//
//    vector< vector< int > > mat;
//    
//    int N;
//    std::cin >> N;
//
//    std::string str(std::to_string(N));
//    Perm(str.size(), str.size(), mat);
//    set<int> ans_set;
//
//    for (const auto& itr : mat) {
//        std::string temp{ std::string() };
//        for (const auto& itr_2 : itr) temp += str[itr_2 - 1];
//        ans_set.insert(std::stoi(temp));
//    }
//    
//    for (const auto& itr : ans_set) {
//
//        if (itr > N) {
//            std::cout << itr << std::endl;
//            break;
//        }
//
//    }
//
//
//}
