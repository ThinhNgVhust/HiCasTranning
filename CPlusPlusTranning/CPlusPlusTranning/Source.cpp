#include <iostream>

using namespace std;

// tham chiếu
template <typename T>
void DoSwap(T& a, T& b);
// truyền con trỏ
template <typename T>
void DoSwap(T *a, T *b);

int main() {
	cout << "Khai báo 2 biến kiểu int" << endl;
	cout << "int a = 1;" << endl;
	cout << "int b = 10;" << endl;
	int a = 1; int b = 10;
	cout << "DoSwap(a, b);" << endl;
	DoSwap(a, b);
	cout << "\t(a,b) = (" << a << "," << b << ")" << endl;

	DoSwap(&a, &b);
	cout << "DoSwap(&a, &b);" << endl;
	cout << "\t(a,b) = (" << a << "," << b << ")" << endl;

	cout << "Kết luận: Cả 2 ví dụ truyền bằng tham chiếu và truyền bằng địa chỉ đều có kết quả như nhau. \nHãy dùng truyền bằng tham chiếu khi CÓ THỂ\nHãy dùng truyền bằng địa chỉ khi BẮT BUỘC PHẢI DÙNG" << endl;
	getchar();
	return 0;
}

template<typename T>
void DoSwap(T & a, T & b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void DoSwap(T * a, T * b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
}
