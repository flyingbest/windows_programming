#include <iostream>
using namespace std;

class POINT{
	private:
		int x, y;
	public:
		void SetPoint(int a, int b){
			x=a;
			y=b;
			cout << "x= " << x << " || y= " << y << endl;
		}
};

int main(){
	POINT ob1, ob2;
	ob1.SetPoint(20, 30);
	ob2.SetPoint(-20, -500);
	return 0;
}

