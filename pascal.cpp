#include <iostream>
using namespace std;
 
 int factorial (int n) {
    int resultado=1;
    for(int i=1;i++)
    resultado*=i;
    return resultado;


 }

 int combinacio(int n,int k){
    return (factorial(n))/(factorial(k)*factorial(n-k));
 }

 int main() {
    int n;
    cout << "ingresen n:" <<endl;
    cin >>n();
    for(int i=0;i<=n;i++){
        cout << combinacion(i,j) <<" ";
    cout << combinacion(i,j) << " ";
 }
 cout << endl;
 }
 }


