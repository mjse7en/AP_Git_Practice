#include <iostream>
using namespace std;

class container {

protected:
	int size;
public:
	float* p;
	container(int s) :size(s){}
	const int& getsize() { return size;}
	void setsize( int size )
	{
		this -> size = size;
	}

};

class vector :public container {

	int call_num;
public:
	explicit vector(int l) :len(l),container(1 * 100){
		p = new float();
	}
	int len;
	int& getlen() {
		call_num ++;
		return len;
	}
	~vector() = default;
};

int main() {

	container c1(100);
	vector *v1 = ( vector * ) &c1;
	container& r1 = *v1;
	container c2 = 100;
	c2.setsize(20);
	int c2size = c2.getsize();
	cout << c2.getsize();
	vector v2 (100);
	v2.getlen () = 40;
	cout << v2.getlen();
}