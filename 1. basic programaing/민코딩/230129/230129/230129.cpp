#include<iostream>
using namespace std;

char path[10];
void run(int lev, int n) {
	if (lev == 4)
	{
		cout << path << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		path[lev] = '0'+ i;
		run(lev + 1, n);
		path[lev] = 0;
	}
}
int main() 
{
	int n;
	cin >> n;
	run(0, n);
	return 0;
}