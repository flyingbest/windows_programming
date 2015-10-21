#include <iostream>
using namespace std;

class POINT{
private:
	int sx, sy;
public:
	POINT(int a, int b){
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

class FC{
private:
	int x1;
public:
	FC(int a){
		x1 = a;
	}
	int GetX1(){
		return x1;
	}
};

//1차 상속
class SC : public FC{
private:
	int x2;
public:
	SC(int a, int b):FC(a){
		x2 = b;
	}
	int GetX2(){
		return x2;
	}
};

//파생 클래스를 상속받아 새로운 파생 클래스 정의, 2차 상속
class TC : public SC{
private:
	int x3;
public:
	TC(int a, int b, int c):SC(a,b){
		x3 = c;
	}
	int GetX3(){
		return x3;
	}
};

//2개의 기본 클래스로 파생 클래스 정의
class ComplexClass : public POINT, public FC{
private:
	int k;
public:
	ComplexClass(int a, int b, int c, int d) : POINT(a, b), FC(c){
		k = d;
	}
	int GetK(){
		return k;
	}
};

int main(){
	TC ob1(1, 2, 3);
	cout << ob1.GetX1() << endl;
	cout << ob1.GetX2() << endl;
	cout << ob1.GetX3() << endl;
	
	ComplexClass ob2(10, 20, 30, 40);
	cout << ob2.GetSx() << endl;
	cout << ob2.GetSy() << endl;
	cout << ob2.GetX1() << endl;
	cout << ob2.GetK() << endl;
	return 0;
}

