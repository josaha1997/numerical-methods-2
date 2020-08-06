#include<iostream>
#include"Complex.hpp"


using namespace std;
int main()
{
	complex_o complex_no_1,complex_no_2,answer;
	cout<<"\nFirst Number:";
	complex_no_1.accept();
	complex_no_1.display();
	cout<<"\nSecond Number:";
	complex_no_2.accept();
	complex_no_2.display();
	cout<<"\nAddition:";
	answer=complex_no_1.add_complex(complex_no_2);
	answer.display();
	cout<<"\nSubtraction:";
	answer=complex_no_1.subtract_complex(complex_no_2);
	answer.display();
	cout<<"\nMultiply:";
	answer=complex_no_1.multiply_complex(complex_no_2);
	answer.display();
	cout<<"\nDivision:";
	answer=complex_no_1.divide_complex(complex_no_2);
	answer.display();
	cout<<"\nCongugate:";
	answer=complex_no_1.congugate();
	answer.display();
	cout<<"\nMagnitude of the complex numbers:"<<complex_no_1.magnitude()<<"\t"<<complex_no_2.magnitude();
	return 0;
}
