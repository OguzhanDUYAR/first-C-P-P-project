#pragma once


int factorial(int x) {
	int fcarpim =1;
	for (int i = x; i > 0 ; i--)
	{
		fcarpim *= i;
	}
	return fcarpim;

}

long long factorialr(long long x) {
	if (x==1)
	{
		return 1;
	}
	return x * factorialr(x - 1);

}


int ust(int t, int u) {
	int sonuc = 1;
	for (int i = 1; i <= u; i++)
	{
		sonuc = sonuc * t;
	}
	return sonuc;


}