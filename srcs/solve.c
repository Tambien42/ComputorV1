#include "computorV1.h"

float discriminant(int *terms) {
	return terms[1] * terms[1] - 4 * terms[2] * terms[0];
}

void zero_degree(int *terms) {
	if (terms[0] == 0) {
		printf("Statement true\n");
		return;
	}
	printf("statement false\n");
}

void first_degree(int *terms) {
	float x = 0;
	x = (-1.0 * terms[0]) / terms[1];
	printf("The solution is:\n");
	printf("%g\n", x);
}

void second_degree(float discriminant, int *terms) {
	float x1 = 0;
	float x2 = 0;

	if (terms[1] != 0) {
		if (discriminant < 0) {
			float real = -terms[1]/(2*terms[2]);
			float im = ft_sqrt(-discriminant)/(2*terms[2]);
			printf("Discriminant is strictly negative, the two solutions are:\n");
			printf("%g - %gi\n", real, im);
			printf("%g + %gi\n", real, im);
		}
		else if (discriminant == 0){
			printf("Discriminant is equal to zero, the two solutions is:\n");
			x1 = (-1.0 * terms[1]) / (2.0 * terms[2]);
			printf("%g\n", x1);
		}
		else if (discriminant > 0) {
			x1 = (-1.0 * terms[1] - sqrt(discriminant)) / (2.0 * terms[2]);
			x2 = (-1.0 * terms[1] + sqrt(discriminant)) / (2.0 * terms[2]);
			printf("%g\n", x1);
			printf("%g\n", x2);
			Fraction result = dec2frac((double)x1);
			printf("%d/%d\n", result.numerator, result.denominator);
		}
	}
	else {
		x1 = (- 1.0 * terms[0] / terms[2]);
		x2 = (1.0 * terms[0] / terms[2]);
		printf("%g\n", x1);
		printf("%g\n", x2);
	}
}

void third_degree(int *terms) {
	double e,f,g,h,i,j,k,l,m,n,p,r,s,t,u,x1,x2,x3;
	int w;

	printf("\n a*x^3+b*x^2+c*x+d:\n");
	//a = terms[3]
	//b = terms[2]
	//c = terms[1]
	//d = terms[0]

	e=2.7182818284590;
	f=((3*terms[1]/terms[3])-(terms[2]*terms[2]/(terms[3]*terms[3])))/3;
	g=((2*terms[2]*terms[2]*terms[2]/(terms[3]*terms[3]*terms[3]))-(9*terms[2]*terms[1]/(terms[3]*terms[3]))+(27*terms[0]/terms[3]))/27;
	h=(g*g/4)+(f*f*f/27);
	i=sqrt(((g*g/4)-h));
	j=exp(log10(i)/log10(e)/3);
	k=acos((-1)*(g/(2*i)));
	l=j*(-1);
	m=cos(k/3);
	n=sqrt(3)*sin(k/3);
	p=(terms[2]/3*terms[3])*(-1);
	r=(-1)*(g/2)+sqrt(h);
	s=exp(log10(r)/log10(e)/3);
	t=(-1)*(g/2)-sqrt(h);
	u=exp(log10(t)/log10(e)/3);

	if (h>0) w=1;
	if (h<=0) w=3;
	if ((f==0) && (g==0) && (h==0)) w=2;

	switch (w){
			case 1:
				x1=(s+u)-(terms[2]/3*terms[3]);
				x2=(-1)*(s+u)/2-(terms[2]/3*terms[3]);
				x3=(s-u)*sqrt(3)/2;
				printf("\nA 3 pont:\n%lf\n%lf +i*%lf\n%lf -i*%lf\n", x1, x2, x3, x2, x3);
				break;
			case 2:
				x1=exp(log10(terms[0]/terms[3])/log10(e)/3)*(-1);
				printf("\n There is a line:\n%lf\n", x1);
				break;
			case 3:
				x1=2*j*cos(k/3)-(terms[2]/3*terms[3]);
				x2=l*(m+n)+p;
				x3=l*(m-n)+p;
				printf("\nA 3 Roots:\n%lf\n%lf\n%lf\n", x1, x2, x3);
				break;
	}
}

void fourth_degree() {
	printf("The polynomial degree is stricly greater than 2, can't easily be solved.\n");
}

int check_zero(int *terms, int length) {
	int count = 0;
	int i = 0;

	while (i <= length) {
		if (terms[i] == 0) {
			count++;
		}
		i++;
	}
	if (count == length) {
		return 0;
	}
	return 1;
}

void solve(int *terms, int degree) {
	if (degree == 0 || check_zero(terms, degree) == 0) {
		zero_degree(terms);
	}
	else if (degree == 1) {
		first_degree(terms);
	}
	else if (degree == 2) {
		second_degree(discriminant(terms), terms);
	}
	else if (degree == 3) {
		third_degree(terms);
	}
	else {
		fourth_degree();
	}
}
