#include<iostream>

using namespace std;

// memory leak là trường hợp khi cấp phát bộ nhớ cho chương trình, cụ thể là HEAP nhưng vùng nhớ này
// không được sử dụng hoặc không được giải phóng sau khi thực hiện
void MemoryLeak();
int main() {

	getchar();
	char choiceContinue = 'Y';
	while (true) {
		MemoryLeak();
		cout << "Continue? [Y/N]: " << endl;
		cin >> choiceContinue;
	}
	return 0;
}

void MemoryLeak()
{
	int *p = new int[1000000];
	cout << "Inside MemoryLeak()" << endl;
	//-> sau khi thực hiện hàm này xong, biến p bị thu hồi, vùng nhớ 1000000 phần tử kia không được thu hồi trong suốt quá trình chạy trương trình
	// điều này sẽ gây tốn ram khi thực hiện gọi hàm nhiều lần
	// 
	
}
