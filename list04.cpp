#include <iostream>
using namespace std;

class POINT{
private:
	int x, y;
public:
	void SetPoint(int a, int b){
		x = a;
		y = b;
		cout << "x = " << x << " y = " << y << endl;
	}
};

int main(){
	POINT ob, obarray[3], *pob;
	//ob는 객체, obarray는 객체 배열, pob는 객체 포인터
	pob = &ob;
	//ob의 주소를 pob에 지정
	//pob는 객체 포인터로 객체의 시작주소를 갖는 변수.

	ob.SetPoint(20, 30);
	//ob객체의 멤버 변수 지정
	pob->SetPoint(100, 100);
	//pob를 이용하여 ob객체의 멤버 변수 지정
	obarray[0].SetPoint(0,0);
	obarray[1].SetPoint(1,1);
	obarray[2].SetPoint(2,2);
	return 0;
}
	
