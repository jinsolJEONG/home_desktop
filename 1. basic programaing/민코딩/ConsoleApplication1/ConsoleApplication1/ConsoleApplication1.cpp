#include <iostream>
#include <cstring>
using namespace std;

char map[3][4] = {
	'A','B','G','K','T','T','A','B','A','C','C','D'
};



int isP(int dy, int dx) {

	char pattern[2][2];
	for (int i = 0; i < 2; i++)
	{
		cin >> pattern[i];

	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (pattern[y][x] != map[dy + y][dx + x]) {
				return 0;
			}
		}
	}
}

int main()
{

	int flag = 0;
	for (int y = 0; y <= 3; y++)
	{
		for (int x = 0; x <= 4; x++)
		{
			int ret = isP(y, x);
			if (ret == 1)
			{
				flag = 1; break;
			}
		}
		/*if ( flag == 1)
		{
			break;
		}*/
	}
	if (flag == 1)
	{
		cout << "발견";
	}
	else
	{
		cout << "미발견";
	}
	return 0;
}