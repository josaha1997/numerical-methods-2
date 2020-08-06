#include<iostream>
#include"Complex.hpp"
#include<math.h>
using namespace std;
void complex_o::display()
{
	cout<<this->real<<"+"<<this->imaginary<<"i";
}
void complex_o::accept()
{
	cout<<"\nReal part:";
	cin>>this->real;
	cout<<"\nImaginary part:";
	cin>>this->imaginary;
}
complex_o complex_o::add_complex(complex_o temp)
{
	complex_o answer;
	answer.real=this->real+temp.real;
	answer.imaginary=this->imaginary+temp.imaginary;
	return answer;
}
complex_o complex_o::subtract_complex(complex_o temp)
{
	complex_o answer;
	answer.real=this->real-temp.real;
	answer.imaginary=this->imaginary-temp.imaginary;
	return answer;
}

complex_o complex_o::multiply_complex(complex_o temp)
{
	complex_o answer;
	answer.real=this->real*temp.real-this->imaginary*temp.imaginary;
	answer.imaginary=this->imaginary*temp.real+this->real*temp.imaginary;
	return answer;
}
complex_o complex_o::divide_complex(complex_o temp)
{
	complex_o numerator,denominator,answer;
	numerator=this->multiply_complex(temp.congugate());
	denominator=temp.multiply_complex(temp.congugate());
	answer.real=numerator.real/denominator.real;
	answer.imaginary=numerator.imaginary/denominator.imaginary;
	return answer;
}
complex_o complex_o::congugate()
{
	complex_o answer;
	answer.real=this->real;
	answer.imaginary=-this->imaginary;
	return answer;
}
float complex_o::magnitude()
{
	return (sqrt(pow(this->real,2)+pow(this->imaginary,2)));
}
