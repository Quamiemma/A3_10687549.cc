#include <iostream>

using namespace std;

int gcd(int a, int b);

int main() {
	int num, x, y= 0;
	
	cin >> x >> y;
	num = gcd(x, y);
        cout << "The Highest Common Factor of "<< x << "and"
             << y << "is" << num << endl;
	
	return 0;
}

int gcd(int a, int b){
	if (b == 0)return a;
	else{
		gcd(a, a%b);
	}	
}
