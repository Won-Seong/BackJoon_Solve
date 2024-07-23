#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using Vector = vector<unsigned long long>;
unsigned long long MOD = 1000000007;

struct IndexTree {

	void UpdateElement(size_t idx, unsigned long long val) {

		idx = get_leaf_start() + idx;
		tree_[idx] = val;
		while (idx != get_root()) {

			idx = parent(idx);
			tree_[idx] = tree_[left(idx)] * tree_[right(idx)] % MOD;

		}

		tree_[idx] = tree_[left(idx)] * tree_[right(idx)] % MOD;
		
	}

	unsigned long long Product(size_t l, size_t r) {

		l = get_leaf_start() + l - 1;
		r = get_leaf_start() + r - 1;

		unsigned long long prod = 1;

		while (l <= r) {
			if ((l % 2) == 1) prod *= tree_[l];
			prod %= MOD;
			if ((r % 2) == 0) prod *= tree_[r];
			prod %= MOD;

			l = (l + 1) / 2;
			r = (r - 1) / 2;
			
		}

		return prod;

	}

	void UpdateTree() {

		size_t idx = get_root();
		UpdateTreeUtility(idx);

	}
	unsigned long long UpdateTreeUtility(size_t idx) {
		if (is_leaf(idx)) return tree_[idx];
		else return tree_[idx] = UpdateTreeUtility(left(idx)) * UpdateTreeUtility(right(idx)) % MOD;

	}

	void CreateTree(const Vector& vec) {

		Vector::const_iterator c_iter = vec.cbegin();
		Vector::iterator c_iter_tree = tree_.begin() + get_leaf_start();

		while (c_iter_tree != tree_.end() && c_iter != vec.end()) {
			*c_iter_tree = *c_iter;
			c_iter_tree++, c_iter++;
		}

	}
public:
	IndexTree(const Vector& vec) {
		
		size_ = static_cast<size_t>(pow(2, ceil(log2(vec.size()))));
		capacity_ = size_ * 2;
		tree_.resize(capacity_, 1);

		CreateTree(vec);

	}
	void PrintTree() const { for (const auto& itr : tree_) cout << itr << ' '; cout << endl; }
public:
	size_t get_root() const { return 1; }
	size_t get_leaf_start() const { return size_; }
	size_t left(size_t idx) const { return idx * 2; }
	size_t right(size_t idx) const { return idx * 2 + 1; }
	size_t parent(size_t idx) const { return idx / 2; }
	size_t is_leaf(size_t idx) const { return idx >= size_; }
public:
	Vector tree_;
	size_t size_;
	size_t capacity_;
};

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, K;
	cin >> N >> M >> K;

	Vector vec(N);
	for (auto& itr : vec) cin >> itr;

	IndexTree tree(vec);
	//tree.PrintTree();
	tree.UpdateTree();
	//tree.PrintTree();

	unsigned long long a, b, c;

	for (size_t i = 0; i < M + K; i++) {

		cin >> a >> b >> c;

		if (a == 1) {

			tree.UpdateElement(b - 1, c);
			//tree.PrintTree();
		}
		else {

			cout << tree.Product(b, c) << '\n';

		}

	}

}