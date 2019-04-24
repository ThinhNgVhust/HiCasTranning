#include<iostream>

using namespace std;

int main() {
	int *pInt = new int;
	pInt -= 1000;
	for (size_t i = 0; i < 1000; i++)
	{
		pInt -= 10000 * i;
	}
	try
	{
	//	*pInt = 100;
		cout << "Khong bi sao" << endl;

	}
	catch (const std::exception&)
	{
		cout << "Error" << endl;
	}
	//cout << *pInt << endl;
	getchar();
	return 0;
}