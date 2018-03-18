#include<iostream.h>
#include<conio.h>
class A
{
public:
A()
{
cout<<"A class is executed\n";
}
};
class B
{
public:
B()
{
cout<<"b class is executed\n";
}
};
class C:public A,public B
{
public:
C()
{
cout<<"c class is executed\n";
}
};
class D:public C
{
public:
D()
{
cout<<"d class is derived\n";
}
};
class E:public C
{
public:
E()
{
cout<<"e is executed\n";
}
};
int main()
{
clrscr();
C obj;
D obj1;
E obj2;
return 0;
getch();
