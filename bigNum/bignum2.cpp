#include<iostream>
#include<gmp.h>

using namespace std;

int main (int argc, char **argv) {

    mpz_t num1, num2, res;
    mpz_inits(num1, num2, res, NULL);

    mpz_set_str(num1, "9999999999999999999", 10);
    mpz_set_str(num2, "9999999999999999999", 10); //Decimal base

    mpz_add(res, num1, num2);

    cout<<"The exact result is:";
    mpz_out_str(stdout, 10, res); //Stream, numerical base, var
    cout<<endl;


    return 0;
}
