#include <iostream>
using namespace std ;
int factorial (int n)
{
	int ans = 1 ;
	for (int i=0 ; i<=n ; i++)
		ans = ans *  n ;	
	return ans;
}
int main()
{
	int n ;
	cin >> n ;
	cout << factorial(n) ;
	return 0 ;
}