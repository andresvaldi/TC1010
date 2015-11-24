#include <iostream>
using namespace std;

int factorial(int a){
	if(a == 0){
		return 1;
	}else{
		a = a * factorial(a - 1);
	}
}
int e(){
	int aprox;
	float e;
	float sum = 0;

	cout<<"Numero de e es: ";
	cin>>aprox;

	for(int a=0; a<=aprox; a++){
		e = 1.0/factorial(a);
		sum = sum + e;
	}
	cout<<" e = " << sum;
}

int main(){

	e();

return 0;
}
