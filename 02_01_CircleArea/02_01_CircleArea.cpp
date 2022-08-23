#include <iostream>
using namespace std;

int main()
{
	const double PI{ 3.141592 };	//원주율 정의
	double radius;	//원의 반경

	cout << "원의 반경을 입력하시오 : ";
	cin >> radius;		//원의 반경 입력
	double area = radius * radius * PI;	//면적 계산
	cout << "원의 면적 = " << area << endl;
	return 0;
}