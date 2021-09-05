#pragma once


int fonksiyon(int x) {
	int fcarpim =1;
	for (int i = x; i > 0 ; i--)
	{
		fcarpim *= i;
	}
	return fcarpim;


}