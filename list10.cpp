#include <iostream>
using namespace std;

//기본 클래스 POINT 정의
class POINT{
private:
	int sx, sy;
public:
	POINT(int a, int b){
		sx = a;
		sy = b;
	}

	void SetPoint(int a, int b){
		sx = a;
		sy = b;
	}

	int GetSx(){
		return sx;
	}

	int GetSy(){
		return sy;
	}
};

//상속 클래스 LINE 정의
class LINE : public POINT{
	int ex, ey;
public:
	// 파생 클래스의 생성자, 뒤에 POINT(a,b)는 기본 클래스의 생성자에게 먼저 매개 변수를 전달하여 호출됨.
	LINE(int a, int b, int c, int d):POINT(a,b){
		ex = c; ey = d;
	}

	void SetNextPoint(int a, int b){
		ex = a;
		ey = b;
	}

	int GetEx(){
		return ex;
	}

	int GetEy(){
		return ey;
	}
};

int main(){
	LINE ob(10, 20, 30, 40);

	cout << ob.GetSx() << endl;
	cout << ob.GetSy() << endl;
	cout << ob.GetEx() << endl;
	cout << ob.GetEy() << endl;
	return 0;
}

