//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//using Pair = pair< unsigned long, size_t >;
//using Vector = vector< Pair >;
//
//struct IndexTree {
//
//	void UpdateElement(size_t idx, Pair val) {
//
//		idx = get_leaf_start() + idx - 1;
//		tree_[idx] = val;
//		while (idx != get_root()) {
//
//			idx = parent(idx);
//			tree_[idx] = min(tree_[left(idx)], tree_[right(idx)]);
//
//		}
//		tree_[idx] = min(tree_[left(idx)], tree_[right(idx)]);
//	}
//
//	Pair Find(size_t l, size_t r) {
//
//		l = get_leaf_start() + l - 1;
//		r = get_leaf_start() + r - 1;
//
//		Pair res{ make_pair( static_cast<unsigned long>(pow(10, 9) + 1), 0) };
//
//		while (l <= r) {
//			if ((l % 2) == 1) res = res > tree_[l] ? tree_[l] : res;
//			if ((r % 2) == 0) res = res > tree_[r] ? tree_[r] : res;
//			
//			l = (l + 1) / 2;
//			r = (r - 1) / 2;
//		}
//
//		return res;
//
//	}
//
//	void UpdateTree() {
//
//		size_t idx = get_root();
//		UpdateTreeUtility(idx);
//
//	}
//	Pair UpdateTreeUtility(size_t idx) {
//		
//		if (is_leaf(idx)) return tree_[idx];
//		else  return tree_[idx] = min(UpdateTreeUtility(left(idx)), UpdateTreeUtility(right(idx)));
//
//	}
//
//	void CreateTree(const Vector& vec) {
//
//		Vector::const_iterator c_iter = vec.cbegin() + 1;
//		Vector::iterator c_iter_tree = tree_.begin() + get_leaf_start();
//
//		while (c_iter_tree != tree_.end() && c_iter != vec.end()) {
//			*c_iter_tree = *c_iter;
//			c_iter_tree++, c_iter++;
//		}
//
//	}
//public:
//	IndexTree(const Vector& vec) {
//
//		size_ = static_cast<size_t>(pow(2, ceil(log2(vec.size()))));
//		capacity_ = size_ * 2;
//		tree_.resize(capacity_, make_pair(static_cast<unsigned long>(pow(10, 9) + 1), 0) );
//
//		CreateTree(vec);
//
//	}
//	void PrintTree() const { for (const auto& itr : tree_) cout << itr.first << ' '; cout << endl; }
//public:
//	size_t get_root() const { return 1; }
//	size_t get_leaf_start() const { return size_; }
//	size_t left(size_t idx) const { return idx * 2; }
//	size_t right(size_t idx) const { return idx * 2 + 1; }
//	size_t parent(size_t idx) const { return idx / 2; }
//	size_t is_leaf(size_t idx) const { return idx >= size_; }
//public:
//	Vector tree_;
//	size_t size_;
//	size_t capacity_; 
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	Vector vec(N + 1);
//	for (size_t i = 1; i <= N; i++) {
//		cin >> vec[i].first;
//		vec[i].second = i;
//	}
//
//	IndexTree tree(vec);
//	//tree.PrintTree();
//	tree.UpdateTree();
//	//tree.PrintTree();
//
//	int M;
//	cin >> M;
//
//	unsigned long a, b, c;
//
//	for (size_t i = 0; i < M; i++) {
//
//		cin >> a >> b >> c;
//
//		if (a == 1) {
//
//			tree.UpdateElement(b , make_pair(c, b) );
//			//tree.PrintTree();
//		}
//		else {
//			Pair temp = tree.Find(b, c);
//			cout << temp.second << '\n';
//			//cout << temp.first << ' ' << temp.second << '\n';
//
//		}
//
//	}
//
//}