#include <iostream>
using namespace std;
long fibonacci(long n){
  if(n==1){
    return 1;

  }
  else if (n== 0){
    return 0;
  }
  else {
    long a;
    long s;
    s=0;
    long d;
    d=1;
    long c;
    c=0;
    for(c=0;c< n-1; c++){
      a=s+d;
      s=d;
      d=a;
    }
    return a;
  }
}
int main(){
  long n;
  cout << "Dame un numero entero no negativo" << endl;
  cin >> n;
  cout << "Ese lugar en la serie fibonacci es " << fibonacci(n) << endl;
  return 0;
}
