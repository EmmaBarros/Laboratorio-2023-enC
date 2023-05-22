include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float porcp,porci,cp,ci,n,i; 
	int num;
	printf("ingrese la cantidad de numeros a ingresar ");
	scanf("%f",&n);
	i=0;
	while(i<n){
			printf("ingrese el numero  ");
		scanf("%d",&num);
		if(num%2==0){
			cp=cp+1;}
		else{
			ci=ci+1;}
	i++;
 }
	porcp=(cp/n)*100;
	porci=(ci/n)*100;
	
	printf("el procentaje de pares es: \n %.2f",porcp  );
	printf("\n el procentaje de impares es: \n %.2f",porci );	
	
	return 0;
