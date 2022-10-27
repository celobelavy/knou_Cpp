#include <iostream>
using namespace std;
struct TimeRec {
	int hours;
	int miniutes;
};

// 시간을 더하는 함수
// 인수 TimeRec &t1 : 누계할 시간
// const TimeRec &t2 : 더할 시간
// 반환값 없음
void AddTime(TimeRec& t1, const TimeRec& t2)
{
	t1.miniutes += t2.miniutes;
	t1.hours += t2.hours + t1.miniutes / 60;
	t1.miniutes %= 60;
}

// 시간을 더하는 ㅎ마수
// 인수 TimeRec &t : 누계할 시간
// int minutes : 더할 분 단위의 시간
// 반환값 없음
void AddTime(TimeRec& t, int minutes)
{
	t.miniutes += minutes;
	t.hours += t.miniutes / 60;
	t.miniutes %= 60;
}

int main()
{
	TimeRec tRec1 = { 2, 30 };
	TimeRec tRec2 = { 1, 45 };

	cout << tRec1.hours << "시간 " << tRec1.miniutes << "분 + ";
	cout << tRec2.hours << "시간 " << tRec2.miniutes << "분 = ";
	AddTime(tRec1, tRec2);
	cout << tRec1.hours << "시간 " << tRec1.miniutes << "분" << endl;

	cout << tRec1.hours << "시간 " << tRec1.miniutes << "분 + ";
	cout << "135분 = ";
	AddTime(tRec1, 135);
	cout << tRec1.hours << "시간 " << tRec1.miniutes << "분" << endl;
	return 0;
}