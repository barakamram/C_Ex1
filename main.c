#include <stdio.h>
#include "myMath.h"

int main() {
	double num, function1, function2, function3;
	printf("Please insert a real number \n");
	scanf("%lf" , &num);
	function1= sub(add(Exponent((int) num),Power(num,3)),2);
	function2= add(mul(num,3),mul(Power(num,2),2));
	function3= sub(div(mul(Power(num,3),4),5),mul(num,2));

	printf("the chosen number is %f\n", num);
	printf("the value of f1(x) = e^x + x^3 - 2 at the point %.4f is %.4f\n", num, function1);
	printf("the value of f2(x) = 3x + 2x^2 at the point %.4f is %.4f\n", num, function2);
	printf("the value of f3(x) = (4x^3)/5 - 2x at the point %.4f is %.4f\n", num, function3);

	return 0;
}
