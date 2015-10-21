/*
연산자 중복
클래스 내의 멤버 함수로 연산자를 새롭게 정의하는 것.

정의된 연산자 함수는 클래스의 멤버 함수이므로 클래스의 객체에만 적용될 수 있다.
연산자 함수를 정의하는 형식은 다음과 같다.

ClassName operator연산자(ClassName ObjectName);

ex) POINT operator+(POINT Ob);

POINT는 연산 결과를 return 해주는 객체의 형(클래스)을 지정하고 매개변수로 POINT 클래스로 객체의 이름은 ob라고 정의.
*/

#include <iostream>
using namespace std;

class POINT{
private:
	int sx, sy;
public:
	POINT(){sx=0;sy=0;}
	POINT(int a, int b){sx = a; sy = b;}
	int GetSx(){return sx;}
	int GetSy(){return sy;}
	void PrintVal(){
		cout << "sx = " << sx << ", sy = " << sy << endl;
	}
	POINT operator+(POINT ob);
	//POINT operator-(POINT ob);
	//POINT operator*(POINT ob);
	//POINT operator/(POINT ob);
};

POINT POINT::operator+(POINT ob){
	POINT temp;
	temp.sx = sx + ob.sx;
	temp.sy = sy + ob.sy;
	return temp;
}

int main(){
	POINT ob1(30, 40), ob2(10, 20), ob3;

	ob3 = ob1 + ob2;
	ob3.PrintVal();
	return 0;
}
