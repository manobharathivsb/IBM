#include <iostream>
using namespace std;
class add
{
	private:
	int a;
	public:
	add()
	{
	a=10;
	}
	void disp();
};
void add::disp()
{
	cout<<a;
}
int main()
{
add m;
m.disp();
return 0;
}
