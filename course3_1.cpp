#include <iostream>
using namespace std;
class Test{
	public :
		Test(char c){
			cout << "construct " << c << endl;
		}
		~Test(){
			cout << "destruct " << endl;
		}
};
int main()
{
	Test A('A');
	Test B('B');
	return 0;
}
