//#include<iostream>
//
//using namespace std;
//// con trỏ trỏ tới vùng nhớ nằm ngoài phạm vi kiểm soát của chương trình -> Bad pointer
//// Cụ thể
//void Case1();
//void Case2();
//int main() {
//	Case2();
//	getchar();
//	return 0;
//}
//
//void Case1()
//{
//	int *pInt = new int;
//	//cấp phát một vùng nhớ có kích thước 4bytes trên Heap
//	cout << pInt << endl;
//	pInt -= 1000;
//	// con trỏ trỏ tới vị trí khác trên bộ nhớ ảo
//	cout << pInt << endl;
//	*pInt = 1;// con trỏ thay đổi nội dung bên trong ô nhớ đó mặc dù không biết ô nhớ đó type nào
//	//complie không báo lỗi. Nhưng chạy chương trình thì bị crash
//}
//
//void Case2()
//{
//	int *p = new int[10];// cấp phát động 1 dãy địa chỉ 10 số nguyên liên tiếp kích thước 40 bytes trên heap
//	cout << p << endl; // -> Địa chỉ đầu tiên của dãy số địa chỉ vật lý
//	for (size_t i = 0; i < 10; i++)
//	{
//		*(p + i) = i * 2;
//		cout << *(p + i) << endl;
//	}
//	delete[] p;// giải phóng vùng nhớ 40 bytes vừa rồi. Nhưng ... 
//	cout << p << endl; // -> p vẫn tham chiếu đến đâu đó trong vùng nhớ heap. Vì có thể vùng nhớ này đang được dùng 
//	// khắc phục. gán p  = null;
//	p = NULL;
//	cout << p << endl; // 00000000
//}
