//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class IndexTree {
//public:
//	void Input(size_t idx, int num) {
//		
//		idx = LeafStart() + idx;
//		vec_[idx] += num;
//		Update(get_parent(idx), num);
//
//	}
//	void Update(size_t idx, int num) {
//
//		if (IsRoot(idx)) {
//			vec_[idx] += num;
//			return;
//		}
//		else {
//			vec_[idx] += num;
//			Update(get_parent(idx), num);
//		}
//
//	}
//	size_t Remove(int rank) {
//
//		size_t idx = get_root();
//		int left, right;
//		while (!IsLeaf(idx)) {
//			left = get_left_child(idx);
//			right = get_right_child(idx);
//
//			if (vec_[left] >= rank) idx = left;
//			else { 
//				rank -= vec_[left];
//				idx = right;
//			}
//			
//		}
//		vec_[idx]--;
//		Update(get_parent(idx), -1);
//		return idx - LeafStart();
//	}
//
//public:
//	IndexTree() : size_(size_t()) {};
//	IndexTree(size_t size) : size_(size) {
//		size_t temp{ 1 };
//		while (temp < size_) temp *= 2;
//		vec_.resize(temp * 2, int());
//	}
//public:
//	size_t get_capacity() const {
//		return vec_.size();
//	}
//	size_t get_size() const {
//		return size_;
//	}
//	size_t get_parent(size_t idx) const {
//		return idx / 2;
//	}
//	size_t get_root() const {
//		return 1;
//	}
//	size_t get_left_child(size_t idx) const {
//		return idx * 2;
//	}
//	size_t get_right_child(size_t idx) const {
//		return idx * 2 + 1;
//	}
//	
//public:
//	size_t LeafStart() const {
//		return get_capacity() / 2;
//	}
//	bool IsRoot(size_t idx) const {
//		if (idx == get_root()) return true;
//		else return false;
//	}
//	void Print() const {
//		for (const auto& itr : vec_) std::cout << itr << ' ';
//		std::cout << std::endl;
//	}
//	size_t IsLeaf(size_t idx) const {
//		return idx >= LeafStart();
//	}
//private:
//	vector<int> vec_;
//	size_t size_;
//};
//
//int main() {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	IndexTree tree(1000000);
//	size_t n;
//	cin >> n;
//	
//	int a, b, c;
//	for (size_t i = 0; i < n; i++){
//		cin >> a;
//		if (a == 1) {
//			cin >> b;
//			cout << tree.Remove(b) + 1 << '\n';
//			//tree.Print();
//		}
//		else {
//			cin >> b >> c;
//			tree.Input(b - 1, c);
//		}
//
//	}
//
//	/*std::cout << tree.get_capacity() << std::endl;
//	for (int i = 0; i < 3; i++) {
//		int idx, temp;
//		std::cin >> idx >> temp;
//		tree.Input(idx, temp);
//		tree.Print();
//	}*/
//
//
//	
//
//}