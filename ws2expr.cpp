#include<stdio.h>
#include<math.h>     

int main(){
	double a , b ,c ,d , A1 , B1 , C1 ,D1 , E1 ,A2 , B2 , C2 ,D2 , E2 ,A3 , B3 , C3 ,D3 , E3;
	a = 1 , b = 1 , c = 5, d = 1 ;
	A1 = (3*a/5) + (1/b) ;
	B1 = (3*a + 5*b) / (2+c) ;
	C1 = (2.0/7.0)*(pow(4,3+c) - 5*d);
	D1 = sqrt((2+8*b) / a);
	E1 = cbrt((b*b) - (4.0*d));
	printf("4.1 a=1, b=1, c=5, d=1\n") ;
	printf("A = %.2f\n" , A1) ;
	printf("B = %.2f\n" , B1) ;
	printf("C = %.2f\n" , C1) ;
	printf("D = %.2f\n" , D1) ;
	printf("E = %.2f\n\n" , E1) ;
	
	a = 9 , b = 2 , c = 0, d = 1 ;
	A2 = (3*a/5) + (1/b) ;
	B2 = (3*a + 5*b) / (2+c) ;
	C2 = (2.0/7.0)*(pow(4,3+c) - 5*d);
	D2 = sqrt((2+8*b) / a);
	E2 = cbrt((b*b) - (4.0*d));
	printf("4.2 a=9, b=2, c=0, d=1\n") ;
	printf("A = %.2f\n" , A2) ;
	printf("B = %.2f\n" , B2) ;
	printf("C = %.2f\n" , C2) ;
	printf("D = %.2f\n" , D2) ;
	printf("E = %.2f\n\n" , E2) ;
	
	a = 0 , b = 3 , c = 3, d = 3 ;
	A3 = (3*a/5) + (1/b) ;
	B3 = (3*a + 5*b) / (2+c) ;
	C3 = (2.0/7.0)*(pow(4,3+c) - 5*d);
	D3 = sqrt((2+8*b) / a);
	E3 = cbrt((b*b) - (4.0*d));
	printf("4.3 a=0, b=3, c=3, d=3\n") ;
	printf("A = %.2f\n" , A3) ;
	printf("B = %.2f\n" , B3) ;
	printf("C = %.2f\n" , C3) ;
	printf("D = %.2f\n" , D3) ;
	printf("E = %.2f\n\n" , E3) ;
	
	return 0 ;
}
