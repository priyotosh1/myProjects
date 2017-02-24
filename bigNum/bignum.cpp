#include <iostream>
#include <gmpxx.h>

using namespace std;

//compile with g++ <file> -lgmpxx -lgmp

int main()
{
	mpz_class a,b,c;
	b = 123455671234;
	c = 123455671234;
	a = b*c;
	cout<<"a = "<<a;
	cout<<endl;	
	return 0;
}
