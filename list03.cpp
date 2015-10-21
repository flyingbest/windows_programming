#include <iostream>
using namespace std;

class POINT{
private:
	int x, y;
public:
	void SetPoint(int a, int b){
		x = a;
		y = b;
	}

	POINT(){
		x = 0;
		y = 0;
		cout << "생성자 함수 호출" << endl;
	}

	~POINT(){
		cout << "소멸자 호출" << endl;
	}

	int Get_x(){
		return x;
	}

	int Get_y(){
		return y;
	}
};

int main(){
	cout << "선언 안하면 생성자 호출 안되나?? test" << endl;
	cout << "그러네 ㅋㅋ checking complete!!!" << endl;
	
	POINT ob1;
	cout << "초기 x = " << ob1.Get_x() << " y = " << ob1.Get_y() << endl;
	ob1.SetPoint(10, 20);
	cout << "현재 x = " << ob1.Get_x() << " y = " << ob1.Get_y() << endl;
	
	return 0;
}
	
