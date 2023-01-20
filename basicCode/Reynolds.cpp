	// A hello world program in C++

	#include<iostream>
        #include<string>
	#include <cmath>
	using namespace std;
double Reynolds(double rho,double U, double mu, double D);

	int main()
	{
          double rho,U,mu,D,Re;
string first_statement , second_statement , third_statement , forth_statement , fifth_statement;
first_statement = "calculate Reynolds number";
second_statement =  "Specify velocity in m/s";
third_statement = "Specify density in kg/m3";
forth_statement = "Specify dynamic viscosity in SI units";
fifth_statement = "Specify characteristic length";


cout << first_statement << endl;
cout << second_statement << endl;
cin >> U;
cout << third_statement << endl;
cin >> rho;
cout << forth_statement << endl;
cin >> mu;
cout << fifth_statement << endl;
cin >> D;
cout << "The Reynolds number is:" << endl;
Re = Reynolds(rho,U,mu,D);
cout << Re << endl;
//Reynolds(rho , U , mu , D);
return 0;
	}

double Reynolds (double rho,double U, double mu, double D)
{
double Re;
Re=rho*U*D/mu;
return Re;
}
