#pragma once
#include <iostream>
template <typename T>
class matrix {
	int x, y;
	T** mtrx;

public:
	matrix() {
		x = y = 1;
		mtrx = new T * [x];
		for (int _a = 0; _a < 1; ++_a) {
			mtrx[_a] = new T[y];
		}
		mtrx[0][0] = 0;
	}
	matrix(int x_size, int y_size) {
		x = x_size; y = y_size;
		mtrx = new T * [x];
		for (int _a = 0; _a < x; ++_a) {
			mtrx[_a] = new T[y];
		}
		for (int i = 0; i < x; ++i) {
			for (int j = 0; j < y; ++j) {
				mtrx[i][j] = 0;
			}

		}
	}
	~matrix() {
		for (int i = 0; i < x; ++i) {
			delete mtrx[i];
		}
		delete[] mtrx;
	}

	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}
	void print_matrix() {
		for (int i = 0; i < x; ++i) {
			for (int j = 0; j < y; ++j) {
				std::cout << mtrx[i][j] << '\t';
			}
			std::cout << std::endl;
		}
	}

	template <T>
	matrix<T> operator+ (matrix<T>& _ms, matrix<T>& _mt) {
		if (_mt.x == _ms.x && _mt.x == _ms.y) {
			for (int i = 0; i < _mt.x; ++i) {
				for (int j = 0; j < _mt.y; ++j) {
					_mt[i][j] = _mt[i][j] + _ms[i][j];
				}

			}
		}
		return _mt;
	}

	template <typename U>
	friend std::ostream& operator<<(std::ostream&, matrix<U>&);
	
};


template <typename T>
std::ostream& operator<< (std::ostream& out, matrix<T>& mx) {
	for (int i = 0; i < mx.x; ++i) {
		for (int j = 0; j < mx.y; ++j) {
			out << mx[i][j] << '\t';
		}
		out << '\n';
	}
	return out;
}