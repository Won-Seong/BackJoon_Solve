//#include <iostream>
//#include <string>
//
//class BigInteger {
//public:
//	BigInteger operator+(const BigInteger& arg) const {
//
//		std::string temp;
//		std::string::const_reverse_iterator iter_1 = number_.crbegin();
//		std::string::const_reverse_iterator iter_2 = arg.number_.crbegin();
//		bool up{ false };
//
//		while (iter_1 != number_.crend() && iter_2 != arg.number_.crend()) {
//
//			int num = (*iter_1 - '0') + (*iter_2 - '0');
//			if (up) num++;
//			if (num >= 10) up = true, num -= 10;
//			else up = false; 
//			temp = std::to_string(num) + temp;
//			iter_1++, iter_2++;
//
//		}
//		
//
//		if (iter_1 != number_.crend()) {
//			while (up && iter_1 != number_.crend()) {
//				int num = (*iter_1 - '0') + up;
//				if (num >= 10) up = true, num -= 10;
//				else up = false;
//				temp = std::to_string(num) + temp;
//				iter_1++;
//			}
//			while (iter_1 != number_.crend()) temp = *iter_1 + temp, iter_1++;
//			
//		}
//		else if(iter_2 != arg.number_.crend()) {
//			while (up && iter_2 != arg.number_.crend()) {
//				int num = (*iter_2 - '0') + up;
//				if (num >= 10) up = true, num -= 10;
//				else up = false;
//				temp = std::to_string(num) + temp;
//				iter_2++;
//			}
//			while (iter_2 != arg.number_.crend()) temp = *iter_2 + temp, iter_2++;
//		}
//
//		if (up) temp = "1" + temp;
//
//		return BigInteger(temp);
//
//	}
//	bool operator>(const BigInteger& arg) const {
//
//		if (get_length() > arg.get_length()) return true;
//		else if (get_length() < arg.get_length()) return false;
//		else {
//
//			std::string::const_iterator iter_1 = number_.cbegin();
//			std::string::const_iterator iter_2 = arg.number_.cbegin();
//
//			while (iter_1 != number_.cend() && iter_2 != arg.number_.cend() && *iter_1 == *iter_2) {
//				iter_1++, iter_2++;
//			}
//			
//			if (iter_1 == number_.cend() && iter_2 == arg.number_.cend()) { return false; }
//			else if (*iter_1 > *iter_2) return true;
//			else return false;
//
//		}
//
//	}
//
//	bool operator<(const BigInteger& arg) const {
//
//		if (get_length() > arg.get_length()) return false;
//		else if (get_length() < arg.get_length()) return true;
//		else {
//
//			std::string::const_iterator iter_1 = number_.cbegin();
//			std::string::const_iterator iter_2 = arg.number_.cbegin();
//
//			while (iter_1 != number_.cend() && iter_2 != arg.number_.cend() && *iter_1 == *iter_2) iter_1++, iter_2++;
//			if (iter_1 == number_.cend() && iter_2 == arg.number_.cend()) return false;
//			else if (*iter_1 > *iter_2) return false;
//			else return true;
//
//		}
//
//	}
//
//	bool operator==(const BigInteger& arg) const {
//
//		if (get_length() > arg.get_length()) return false;
//		else if (get_length() < arg.get_length()) return false;
//		else {
//
//			std::string::const_iterator iter_1 = number_.cbegin();
//			std::string::const_iterator iter_2 = arg.number_.cbegin();
//
//			while (iter_1 != number_.cend() && iter_2 != arg.number_.cend()  && *iter_1 == *iter_2) iter_1++, iter_2++;
//			
//			if (iter_1 == number_.cend() && iter_2 == arg.number_.cend()) return true;
//			else return false;
//
//		}
//
//	}
//
//public:
//	int get_length() const {
//		return number_.size();
//	}
//
//public: //Const, Dest, setter and getter
//	BigInteger() : number_(std::string()) {};
//	BigInteger(std::string number) : number_(number) {};
//	BigInteger(const unsigned int& number) : number_(std::to_string(number)) {};
//	void set_number(std::string number) { number_ = number; }
//	std::string get_number() const { return number_; }
//private:
//	std::string number_;
//};
//
//int main() {
//
//	for (int i = 0; i < 3; i++){
//
//		int N{ int() };
//		std::cin >> N;
//		BigInteger res{ 0 };
//		BigInteger plus{ 0 };
//		BigInteger minus{ 0 };
//		std::string temp;
//		for (int j = 0; j < N; j++) {
//			std::cin >> temp;
//			if (temp[0] == '-') { 
//				temp.erase(0, 1);
//				minus = minus + BigInteger(temp);
//			}
//			else plus = plus + BigInteger(temp);
//		}
//
//
//		if (plus > minus) std::cout << '+' << std::endl;
//		else if (plus == minus) std::cout << 0 << std::endl;
//		else std::cout << '-' << std::endl;
//
//	}
//
//}