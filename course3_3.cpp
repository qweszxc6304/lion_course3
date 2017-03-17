#include <iostream>
using namespace std;
class Test{
	public :
		Test(int number){
			this -> number = number;
		}
		void call(){
			cout << this -> number << " born" << endl;
		}
	private :
		int number;
};

int main()
{
	Test a(1);
	Test b(2);
	Test z(26);
	a.call();
	b.call();
	z.call();
	return 0;
}
