#include <iostream>
using namespace std;

class POINT{
	private:
		int x;
	public:
		int y;
		void SetPoint(int a, int b){
			x=a;
			// 변수 x는 private이므로 이 멤버 함수에만 접근 가능!
			y=b;
		}
};

int main(){
	POINT ob;
	ob.SetPoint(20, 30);
	ob.y = 8;

	//x는 private이므로 외부에서 접근 불가능 error!
	//ob.x = 7;

	return 0;
}

