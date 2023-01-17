//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[6] = { '$', '@', 'D', 'A', '9', '#' };
//	for (char i = 0; i < 6; i++)
//	{
//		int as1 = (int)arr[i];
//		cout << arr[i] << ':' << as1 << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[4] = { 'B', 'T', 'K', 'A' };
//	int a;
//	cin >> a;
//	for (char i = 0; i < a; i++)
//	{
//		for (int x = 0;	x < 4; x++)
//		{
//			cout << arr[x] << ' ';
//		}
//		cout << endl;
//
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a;
//	cin >> a;
//	int as = (int)a;
//	if (as >= 65 && as<= 90)
//	{
//		cout << "대문자입니다";
//	}
//	else
//	{
//		cout << "소문자입니다";
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a;
//	cin >> a;
//	for (int i = 0; i < a; i++)
//	{
//		for (int x = 0;	x < a; x++)
//		{
//			cout << '#' ;
//		}
//		cout << endl;
//
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a;
//	cin >> a;
//	int t = (int)a;
//	int as = t - 48;
//	cout << as+5;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int arr[6] = {0};
//
//	for (int i = 0; i < 3 ; i++) {
//		arr[i] = a;
//		a++;
//	}
//	for (int x = 5; x >= 3; x--) {
//		arr[x] = b;
//		b--;
//	}
//	for (int z = 0; z < 6; z++)
//	{
//		cout << arr[z] << ' ';
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a;
//	cin >> a;
//	for (char x = 'A'; x <= a; x++)
//	{
//		cout << (char)(x);
//	}
//
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a;
//	cin >> a;
//
//	cout << (char)(a - 'a' + 'A');
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a,b;
//	cin >> a >>b;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (char x = a; x <= b; x++)
//		{
//			cout << (char)(x) << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//char a, b, c, flag;
//
//void input() {
//	cin >> a >> b >> c;
//}
//void process() {
//	if (a == 'A' && b == 'B' && c == 'C')
//	{
//		flag = 1;
//	}
//}
//void output() {
//	if (flag==1)
//	{
//		cout << "ABC를찾았다";
//	}
//	else
//	{
//		cout << "못찾았다";
//	}
//}
//int main()
//{
//	input();
//	process();
//	output();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a >>b>> c;
//
//	for (int i = 0; i < c; i++)
//	{
//		for (int x = a; x <= b; x++)
//		{
//			cout << x << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a, b;
//	cin >> a >> b ;
//
//	cout << "문자'" << a << "'의 아스키코드값은 " << (int)(a) << endl;
//	cout << "문자'" << b << "'의 아스키코드값은 " << (int)(b) << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char x;
//	cin >> x ;
//	for (char i = x; i >= 'a'; i--)
//	{
//		cout << i;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a;
//	int arr[5] = {};
//	int arr2[5] = {};
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> a;
//		arr[i] = a;
//		arr2[i] = a;
//	}
//	 cout << arr[0] <<' ' << arr[1] <<' ' << arr[2] <<' '<< arr[3] <<' '<< arr[4] << endl;
//	 cout << arr2[0] << ' ' << arr2[1] << ' ' << arr2[2] << ' ' << arr2[3] <<' ' << arr2[4];
//	return 0;
//}

//[힌트] 이해하시면 답이 보입니다.
//
//if (g >= '0' && g <= '9') // 문자'0' ~ 문자'9' 판별 조건
//
//if (g >= 'A' && g <= 'Z') // 대문자 판별 조건
//
//if (g >= 65 && g <= 90) // 대문자 판별 조건
//
//*대문자 ASCII값과 소문자 ASCII값은 다릅니다.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a;
//	cin >> a;
//	int as = (int)a;
//	if (as >= 65 && as<= 90)
//	{
//		cout << "대문자입력!!";
//	}
//	else if (as >= '0' && as <= '9')
//	{
//		cout << "숫자문자입력!!";
//	}
//	else
//	{
//		cout << "소문자입력!!";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int sum = a + b + c;
//	int arr[3] = { a, b, c };
//	for (int i = 0; i < sum; i++)
//	{
//		cout << a << ' ' << b << ' ' << c << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a, b, c, d,e;
//	cin >> a >> b >> c>> d>> e;
//	char arr[5] = { a, b, c,d, e };
//	int as = 0;
//	int count = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		as = (int)arr[i];
//		if (as >= '0' && as <= '9') {
//			count++;
//		}
//	}
//	if (count > 0) {
//		cout << "숫자" << count << "개발견";
//	}
//	else
//	{
//		cout << "숫자미발견";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int line[5] = { 3, 5, 2, 4, 1 };
//int arr[3][2] = { {9, 8}, {7, 1}, {3, 4} };
//
//int main()
//{
//	int t;
//	int x, y;
//
//	cin >> t;
//
//	if (t % 2 == 1)
//	{
//		for (x = 0; x < 5; x++)
//		{
//			cout << line[x];
//		}
//	}
//	else
//	{
//		for (y = 0; y < 3; y++)
//		{
//			for (x = 0; x < 2; x++)
//			{
//				cout << arr[y][x];
//			}
//			cout << endl;
//		}
//	}
//
//	return 0;
//}
//
//
//#include <iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int a, b, t;
//	cin >> a >> b;
//	t = a - b;
//
//	if (abs(t) % 2 == 1)
//	{
//		cout << "고백한다";
//	}
//	else
//	{
//		cout << "짝사랑만";
//	}
//
//	return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = {};
//	int count = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr[i];
//		if (arr[i]>=3 && arr[i] <=7)
//		{
//			count++;
//		}
//	}
//
//	cout << count;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a;
//	cin >> a;
//	if (a >= 80){
//		cout << "수";
//	}
//	else if (a >= 70)
//	{
//		cout << "우";
//	}
//	else if (a >= 60)
//	{
//		cout << "미";
//	}
//	else
//	{
//		cout << "재시도";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	for (int i = 0;	 i < 4; i++)
//	{
//		int a;
//		cin >> a;
//		if (a < 20) {
//			cout << "더 큰수를 입력하세요" << endl;
//		}
//		else if (a >20)
//		{
//			cout << "더 작은수를 입력하세요"<< endl;
//		}
//		else if(a ==20)
//		{
//			cout << "정답입니다"<< endl;
//		}
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a, b, c;
//	cin >> a >> b >> c;
//
//	
//	if (a >= b && a >= c) {
//		cout << "MAX=" << a ;
//	}
//	else if (b >= a && b >= c)
//	{
//		cout << "MAX=" << b;
//	}
//	else
//	{
//		cout << "MAX=" << c;
//	}
//
//	cout << endl;
//
//	if (a <= b && a <= c) {
//		cout << "MIN=" << a;
//	}
//	else if (b <= a && b <= c)
//	{
//		cout << "MIN=" << b;
//	}
//	else
//	{
//		cout << "MIN=" << c;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][3] = {
//		{3, 4, 1},
//		{2, 1, 4},
//		{3, 3, 0}
//	};
//
//	int y, x;
//	int h = 0;
//	int j = 0;
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			if (arr[y][x] % 2 == 1) {
//				h++;
//			}
//			else
//			{
//				j++;
//			}
//		}
//	}
//	cout << "짝수 : "<<j<<endl<< "홀수 : "<< h;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	int a, b, c, d, e;
//	cin >> a >> b >> c >> d >> e;
//	int arr[5] = { a, b, c, d, e };
//	for (int y = 0; y < 5; y++)
//	{
//		if (arr[y]>=70)
//		{
//			cout << y+1 << "번사람은" << arr[y] << "점PASS";
//		}
//		else if (arr[y] >= 50)
//		{
//			cout << y+1 << "번사람은" << arr[y] << "점RETEST";
//		}
//		else
//		{
//			cout << y+1 << "번사람은" << arr[y] << "점FAIL";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//	char a;
//
//	void input() {
//
//		char arr[4][4] = {
//		{a, a, a, a},
//		{a, a, a, a},
//		{a, a, a, a},
//		{a, a, a, a}
//	};
//
//}
//
//void output() {
//	for (int y = 0; y < 4; y++)
//	{
//		for (int x = 0; x < 4; x++)
//		{
//			cout << a;
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	cin >> a;
//	input();
//	output();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int a;
//int arr[3][3] = {};
//void input() {
//	cin >> a;
//}
//
//void process() {
//
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			 arr[y][x] = a;
//			 a++;
//		}
//	}
//
//}
//
//void output() {
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			cout << arr[y][x] << ' ';
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	input();
//	process();
//	output();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int a;
//void BBQ() {
//	if (a>0 && a<5)
//	{
//		cout << "초기값";
//	}
//	else if (a > 6 && a < 10)
//	{
//		cout << "중간값";
//	}
//	else
//	{
//		cout << "알수없는값";
//	}
//}
//
//int main()
//{
//
//	cin >> a;
//	if (a == 3 || a == 5 || a == 7)
//	{
//		for (int i = 1; i <= 10; i++)
//		{
//			cout << i;
//		}
//	}
//	else if (a == 0 || a == 8)
//	{
//		for (int i = 10; i >= 1; i--)
//		{
//			cout << i;
//		}
//	}
//	else
//	{
//		BBQ();
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			cout << a;
		}
		cout << endl;
	}
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << a;
		}
		cout << endl;
	}
	return 0;
}