/*

가상 함수

가상함수가 사용되는 이유는 프로그램 실행시에 다형성을 지원하기 위해서
실시간 다형성을 위해서는 객체 포인터를 이용하여 함수가 호출되어야 한다.

재 정의하는 것을 오버라이드(override)라고 한다.
가상함수는 기본적으로 함수 중복과는 다르다. 함수중복은 매개변수의 수나 형이 
다를 수 있지만 가상함수는 완전히 이름과 매개변수가 일치해야 함.

*/

#include <iostream>
using namespace std;

class POINT{
private:
	int sx, sy;
public:
	POINT(int a, int b){
		sx = a; sy = b;
	}
	virtual void PutData(){
		cout << sx << sy << endl;
	}
};

class LINE : public POINT{
private:
	int ex, ey;
public:
	LINE(int a, int b, int c, int d):POINT(a,b){
		ex = c;
		ey = d;
	}
	void	PutData(){
		cout << ex << ey << endl;
	}
};

int main(){
	POINT *p;
	POINT ob1(10, 20);
	p = &ob1;
	p->PutData();

	LINE ob2(50, 60, 70, 80);
	p = &ob2;
	p->PutData();

	return 0;
}

