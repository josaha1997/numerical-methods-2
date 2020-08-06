class complex_o
{
	private:	float real,imaginary;
	public:	void display();
			void accept();
			complex_o add_complex(complex_o);
			complex_o subtract_complex(complex_o);
			complex_o multiply_complex(complex_o);
			complex_o divide_complex(complex_o);
			complex_o congugate();
			float magnitude();
};
