#include <bits/stdc++.h>

using namespace std;

/*
n - number of friends
k - number of bottles
l - ml of each bottle
c - number of limes
d - each lime is cut to d slices
p - grams of salt
nl - each friend needs nl ml of drink
np - grams of salt needed 
*/

int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int drink = k * l; // overall ml of the drink

	int drinkT = drink / nl;
	int limesT = c * d;
	int saltT = p / np;

	int result = min(min(drinkT, limesT), saltT) / n;
	cout << result << endl;

	return 0;
}
