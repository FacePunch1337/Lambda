#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class MyClass
{
public:
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	void ForEach(vector<int> &v,function<void(int)> f) {
		for (auto element : v) {
			f(element);
		}
		cout <<"\t["<< v.size() << "] \n";
	}
};

int Foo_Classic(int a){ 
	cout << a << " ";
	return a;
}

int Foo_Update(int a) {
	if (a % 2 == 0) {
		cout << a << " ";
	}
	return a;
}



int main()
{
	MyClass myclass;
	myclass.ForEach(myclass.v, Foo_Classic);
	myclass.ForEach(myclass.v, Foo_Update);

}

