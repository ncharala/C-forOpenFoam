	// A hello world program in C++

	#include<iostream>
        #include<string>
	#include <cmath>
	using namespace std;
double lengthcalc(double x,double y, double z);


	int main()
{
double vector[3][1];
double l;
string first_statement , second_statement , third_statement , forth_statement , fifth_statement;
first_statement = "input x";
second_statement =  "input y";
third_statement = "inptu z";


cout << first_statement << endl;
cin >> vector[0][0];
cout << second_statement << endl;
cin >> vector[1][0];
cout << third_statement << endl;
cin >> vector[2][0];
cout << "The length is:" << endl;

l = lengthcalc(vector[0][0],vector[1][0],vector[2][0]);
cout << l << endl;
//Reynolds(rho , U , mu , D);
return 0;
	}

double lengthcalc (double x,double y, double z)
{
double l;
l=sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
return l;
}
