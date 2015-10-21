#include <iostream>
using namespace std;

class OPS{
private:
	int result;
public:
	void add(int a, int b);
	void sub(int a, int b);
	void mul(int a, int b);
	void div(int a, int b);
	int GetResult();
};

void OPS::add(int a, int b){
	result = a + b;
}

void OPS::sub(int a, int b){
	result = a - b;
}

void OPS::mul(int a, int b){
	result = a * b;
}

void OPS::div(int a, int b){
	result = a / b;
}

int OPS::GetResult(){
	return result;
}

int main(){
	OPS a;
	a.add(20, 10);
	cout << "add 결과 : " << a.GetResult() << endl;
	a.sub(30, 50);
	cout << "sub 결과 : " << a.GetResult() << endl;
	a.mul(50, 20);
	cout << "mul 결과 : " << a.GetResult() << endl;
	a.div(50, 5);
	cout << "div 결과 : " << a.GetResult() << endl;
	return 0;
}

