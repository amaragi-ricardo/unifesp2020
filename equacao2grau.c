#include <math.h>
#include <stdio.h>
                                                                                                                                                                                                                                
                                                                                                                                                                                                                                
double delta (int a, int b, int c){
	        return b * b -4 * a * c;
		                                                                                                                                                                                                                                
}                                                                                                                                                                                                                               
                                                                                                                                                                                                                                
double x1 (int a, int b, int c){
	        return (-b + sqrt(delta(a,b,c))) / 2 * a;
		                                                                                                                                                                                                                                
}                                                                                                                                                                                                                               
                                                                                                                                                                                                                                
double x2(int a, int b, int c) {
	        return (-b - sqrt(delta(a,b,c))) / 2 * a;
		                                                                                                                                                                                                                                
}                                                                                                                                                                                                                               
                                                                                                                                                                                                                                
int main() {
	        int a, b, c;
		printf("Digite o valor para a: ");
	        scanf("%d", &a);
	        printf("Digite o valor para b: ");
	        scanf("%d", &b);
	        printf("Digite o valor para c: ");
	        scanf("%d", &c);
					                                                                                                                                                                                                                                
								                                                                                                                                                                                                                                
								                                                                                                                                                                                                                                
	        double resultadodelta;
	        double resultadox1;
	        double resultadox2;
											                                                                                                                                                                                                                                
	        resultadodelta = delta (a,b,c);                                                                                                                                                                                         
	        printf("Delta = %f\n", resultadodelta);
													                                                                                                                                                                                                                                
	        resultadox1 = x1 (a,b,c);                                                                                                                                                                                               
	        printf("X1 = %f\n", resultadox1);
															                                                                                                                                                                                                                                
	        resultadox2 = x2 (a,b,c);                                                                                                                                                                                               
	        printf("X2 = %f\n", resultadox2);
																	                                                                                                                                                                                                                                
	        return 0;
																		                                                                                                                                                                                                                                
																		                                                                                                                                                                                                                                
} 
