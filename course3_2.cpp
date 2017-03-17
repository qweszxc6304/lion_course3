#include <iostream>
using namespace std;
class Dog{
	public :
		void say();
};
class Cat{
	public :
		void say();
};

void Dog :: say(){
	cout << "woof" << endl;
}
void Cat :: say(){
	cout << "meow" << endl;
}

int main()
{
	Dog DogA;
	Cat CatA;
	DogA.say();
	CatA.say();
	return 0;
}
