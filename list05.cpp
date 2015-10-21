#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	int *psum;
	// 정수형(int) 데이터를 1개(4바이트) 할당 받고 이 주소를 psum에 저장

	psum = new int;
	// 만약 정수형 데이터를 100개 할당 받고 싶다면 psum = new int[100];

	if(psum == NULL){
		cout << "메모리 할당 에러" << endl;
		return 0;
	}

	*psum = 0;
	for(int i = 1; i <= 10; i++){
		*psum += i;
	}
	cout << "1부터 10까지의 합은 : " << *psum << endl;

	delete psum;	//할당된 메모리를 돌려줌(반환)
} 
