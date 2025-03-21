#pragma once

/* a class modelling complex numbers */
template<typename I> requires std::integral<I> || std::floating_point<I>
class complex_number {
	/* private members */
	I a_real, b_imm;
	
public:
	/* default constructor */
	complex_number()
		: a_real(0), b_imm(0)
	{}
	
	/* user-defined constructor: 1 parameter */
	explicit complex_number(I n)
		: a_real(n), b_imm(0)
	{
		std::cout<<"converting constructor called" << std::endl;
	}
	
	/* user-defined constructor: 2 parameters */
	complex_number(I n, I m)
		: a_real(n), b_imm(m)
	{}
	
	/* return the real part */
	I real(void) const {
		return a_real;
	}
	
	/* return the immaginary part */
	I immaginary(void) const {
		return b_imm;
	}
	
	/* return the conjugate complex number */
	complex_number conjugate(void) const {
		complex_number z = *this;
		return complex_number(z.real(), -z.immaginary());
	}
	
	/* define the += operator between complex numbers */
	
	/* define the + operator between complex numbers */
	
	/* define the += operator between a complex number on the left 
	 * and an I on the right
	 */
	
	/* define the + operator between a complex number on the left 
	 * and an I on the right
	 */
	
};

/* overload of <<, to print complex numbers in the form a+ib */
template<typename I>
std::ostream& operator<<(std::ostream& os, const complex_number<I>& z) {
	if (z.immaginary() == 1) 
		os << z.real() << "+i";
	else if (z.immaginary() != 0)
		
		os << z.real() << "+i" << z.immaginary();
	else
		os << z.real();
	
	return os;
}