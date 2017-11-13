#include <iostream>
using namespace std ;
int factorial (int n)
{
	int ans = 1 ;
	if ( n==0 ) return 1;
	return factorial(n-1)*n;
}
int main()
{
	int n ;
	String k ;
	cin >> n ;
	cout << factorial(n) ;
	return 0 ;
	
}