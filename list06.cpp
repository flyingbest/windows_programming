#include <iostream>
using namespace std;

class POINT{
public:
	int a;
	void SetPoint(int a){
		this->a = a;
	}
};

int main(){
	POINT ob;
	ob.SetPoint(10);

	cout << ob.a << endl;
	return 0;
}

