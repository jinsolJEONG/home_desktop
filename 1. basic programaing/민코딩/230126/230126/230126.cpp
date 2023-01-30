//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6] = { 3,7,4,1,2,6 };
//
//	int u[2][2];
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 2; x++)
//		{
//			cin >> u[x][y];
//		}
//	}
//
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 2; x++)
//		{
//			int flag = 0;
//			for (int i = 0; i < 6; i++)
//			{
//				if (u[x][y]==arr[i])
//				{
//					flag = 1;
//					break;
//				}
//				
//			}
//			if (flag == 1)
//			{
//				cout << "OK"<< ' ';
//			}
//			else
//			{
//				cout << "NO" << ' ';
//			}
//			
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int is(char a[10], char b[10]) {
//	int flag = 0;
//	for (int i= 0; i < 10; i++)
//	{
//		if (a[i] != b[i])
//		{
//			flag =  1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		return 1;
//	}
//	else if(flag == 1)
//	{
//		return 0;
//	}
//
//}
//
//int main()
//{
//	char a[10] = {0};
//	char b[10] = {0};
//	cin >> a >> b;
//	if (is(a, b) == 1)
//	{
//		cout << "동명";
//	}
//	else if (is(a, b) == 0)
//	{
//		cout << "남남";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6] = { 3,7,4,1,2,6 };
//
//	int u[2][2];
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 2; x++)
//		{
//			cin >> u[x][y];
//		}
//	}
//
//	for (int y = 0; y < 2; y++)
//	{
//		for (int x = 0; x < 2; x++)
//		{
//			int flag = 0;
//			for (int i = 0; i < 6; i++)
//			{
//				if (u[x][y]==arr[i])
//				{
//					flag = 1;
//					break;
//				}
//				
//			}
//			if (flag == 1)
//			{
//				cout << "OK"<< ' ';
//			}
//			else
//			{
//				cout << "NO" << ' ';
//			}
//			
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//char arr[2][3] = {
//	'G','K','T','P','A','C'
//};
//
//void is(char a, char b) {
//	int f1 = 0;
//	int f2 = 0;
//	for (int y = 0; y < 2; y++)
//	{
//		for(int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] == a )
//			{
//				f1 = 1;
//			}
//			if (arr[y][x] == b)
//			{
//				f2 = 1;
//			}
//		}
//	}
//	if (f1 == 1 && f2 == 1)
//	{
//		cout << "대발견";
//	}
//	else if (f1 == 1 || f2 == 1)
//	{
//		cout << "중발견";
//	}
//	else if (f1 == 0 && f2 == 0)
//	{
//		cout << "미발견";
//	}
//}
//int main()
//{
//	char a, b;
//	cin >> a >> b;
//	is(a, b);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	
//	char arr[5][5];
//	char ref = 'A';
//	for (int i = 0; i < 5; i++)
//	{
//		for (int x = 0; x < 5; x++)
//		{
//			arr[i][x] = ref;
//			ref++;
//		}
//	}
//	char ip;
//	cin >> ip;
//	int a, b;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int x = 0; x < 5; x++)
//		{
//			if (arr[i][x]==ip)
//			{
//				a = i;
//				b = x;
//			}
//		}
//	}
//	cout << a - 2 << ',' << b - 2;
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][3];
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			cin >> arr[y][x];
//		}
//	}
//	int dat[10] = { 0 };
//
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			dat[arr[y][x]]++;
//		}
//	}
//	for (int i = 1; i < 10; i++)
//	{
//		if (dat[i]==0)
//		{
//			cout << i << ' ';
//		}
//	}
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int apt[5][3] = {
//{15, 18, 17},
//{4, 6, 9},
//{10, 1, 3},
//{7, 8, 9},
//{15, 2, 6}
//};
//
//int isPattern(int arr[3]) {
//    // y층에 family 세대가 일치하면 1, 아니면 0을 반환
//	for (int y = 0; y < 5; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[x] == apt[y][x])
//			{
//				return 1;
//				
//			}
//			return 0;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[3];
//	cin >> arr[0] >> arr[1] >> arr[2];
//	int a;
//	for (int i = 0; i < 5; i++)
//	{
//		a = isPattern(arr);
//		if (a == 1) break;
//	}
//	
//
//
//	return 0;
//}


#include <iostream>
using namespace std;

int apt[5][3] = {
{15, 18, 17},
{4, 6, 9},
{10, 1, 3},
{7, 8, 9},
{15, 2, 6}
};

int isPattern(int i, int arr[3]) {
	// y층에 family 세대가 일치하면 1, 아니면 0을 반환

		for (int x = 0; x < 3; x++)
		{
			if (arr[x] == apt[i][x])
			{
				return 1;

			}
			return 0;
		}


}

int main()
{
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	int a;
	int floor;
	for (int i = 0; i < 5; i++)
	{
		a = isPattern(i, arr);
		if (a == 1) {
			floor = i;
			break;
		}
	}
	if (floor == 0)
	{
		floor = 5;
	}
	else if (floor == 1)
	{
		floor = 4;
	}
	else if (floor == 2)
	{
		floor = 3;
	}
	else if (floor == 3)
	{
		floor = 2;
	}
	else if (floor == 4)
	{
		floor = 1;
	}

	cout << floor << "층";


	return 0;
}
