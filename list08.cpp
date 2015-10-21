#include <iostream>
using namespace std;

//friend 함수는 클래스의 멤버 함수가 아니면서 클래스의 비공개(private) 변수를 사용할 수 있도록 하기 위해 고안된 함수!
//friend 함수가 필요한 이유는 연산자 중복과 특별한 입출력 함수를 만드는데 유용하기 때문.

//friend 함수는 클래스의 멤버 함수가 아닌 일반 함수로 정의되며, friend 함수로 사용되는 클래스에 그 형식이 지정되어야 하고 함수 선언 앞에 'friend' 표기를 해줘야 함.

class POINT{
private:
	int x, y;
public:
	POINT();
	void SetPoint(int a, int b){
		x = a;
		y = b;
	}

	// friend 함수는 class 정의부에 형식이 정의되어야 함.
	friend int lsSame(POINT object);
};

POINT::POINT(){
	x = 0;
	y = 0;
	cout << "생성자 호출 - x,y값이 0으로 초기화" << endl;
}

int lsSame(POINT ob){
	if(ob.x == ob.y) return 1;
	else return 0;
}

int main(){
	POINT ob;
	ob.SetPoint(10, 10);
	if(lsSame(ob)) cout << "x, y는 같은 값" << endl;
	else cout << "x, y는 다른 값" << endl;
	return 0;
}

