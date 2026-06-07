#include <bits/stdc++.h>
using namespace std;


void Discount(int amount){
    cout << amount*0.1 << endl;
}
void Discount(int amount, int discountRate){
    cout << amount*discountRate/100 << endl;
}


int main() {
	int amount, discountRate;
	cin >> amount;
	cin >> discountRate;
	Discount(amount);
	Discount(amount, discountRate);
	
	return 0;
}
