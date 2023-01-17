//#include <iostream>
//using namespace std;
//
//char arr[3] = { 'A', 'B', 'C' };
//
//void KFC() {
//	for (char i = 0; i < 3; i++)
//	{	
//		cout << arr[i];
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	for (int i = 0; i < a; i++)
//	{
//		KFC();
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[3] = { 0 };
//
//void input() {
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> arr[i];
//	}
//}
//
//void output() {
//	for (int i = 3; i >= 0; i--)
//	{
//		cout << arr[i];
//	}
//}
//
//int main()
//{
//	input();
//	output();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[6] = { 0 };
//
//void PrintAll() {
//	for (int i = 0; i < 6; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	for (int i = 0; i < 6; i++)
//	{
//		arr[i] = a;
//		a++;
//	}
//	PrintAll();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[6] = { 0 };
//
//void PrintAll() {
//	for (int i = 0; i < 6; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	for (int i = 0; i < 6; i++)
//	{
//		arr[i] = a;
//		a++;
//	}
//	PrintAll();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[3] = { 0 };
//
//void QTR() {
//	cout << "QTR100%";
//}
//
//void BBQ() {
//	cout << "BBQ100%";
//}
//
//int main()
//{
//	int a, b, c;
//	int sum = 0;
//	cin >> a >> b >> c ;
//	int arr[3] = { a, b, c };
//
//	for (int i = 0; i < 3; i++)
//	{
//		sum = sum + arr[i];
//	}
//	
//	if (sum >= 10)
//	{
//		QTR();
//	}
//	else {
//		BBQ();
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
//	int a;
//	cin >> a;
//	
//	for (int x = 0; x < 11; x += a)
//	{
//		cout << arr[x] << ' ';
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void mincoding() {
//	int a, b;
//	cin >> a >> b ;
//	cout << '(' << a << ')' << '(' << b << ')';
//}
//
//int main()
//{
//	mincoding();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void KFC() {
//	cout << "KFC";
//}
//
//void BBQ() {
//	cout << "BBQ";
//}
//
//int main()
//{
//	char a;
//	cin >> a;
//
//	if (a == 'B')
//	{
//		KFC();
//		cout << endl;
//		BBQ();
//	}
//	else if(a == 'b') {
//		BBQ();
//	}
//	else if (a == '7') {
//		KFC();
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void PrintAll() {
//	int a, b;
//	cin >> a >> b;
//	int arr[5] = { a, a, a, a,a };
//	int arr2[5] = { b,b,b,b,b };
//	cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;
//    cout << arr2[0] << arr2[1] << arr2[2] << arr2[3] << arr2[4];
//}
//
//int main()
//{
//	PrintAll();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//void KFC() {
//	int a;
//	cin >> a;
//	int arr[5];
//
//	for (int i = 4; i >= 0; i--)
//	{
//		arr[i] = a;
//		cout << arr[i];
//		a--;
//	}
//
//}
//
//int main()
//{
//	KFC();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[7] = { 3,5,1,2,4,6,7 };
//	char a,b;
//	cin >> a>>b;
//
//	if (x == 'a'|| x == 'b' || x == 'c')
//	{
//		for (int i = 3; i >=0 ; i--)
//		{
//			cout << arr[i] << ' ';
//		}
//	}
//	else
//	{
//		for (int i = 4; i >= 1; i--)
//		{
//			cout << arr[i] << ' ';
//		}
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[7] = { 3,5,1,2,4,6,7 };
//	int a, b;
//	cin >> a >> b;
//
//	for (int i = a; i <= b; i++)
//		{
//			cout << arr[i] << ' ';
//		}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[4] = { 0 };
//	int a;
//	cin >> a ;
//
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = a;
//		a--;
//		cout << arr[i] <<' ';
//	}
//
//	return 0;
//}


//5.5-8번 다시~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	int a, b;
//	cin >> a >> b;
//	int arr[6] = {0};
//
//	for (int i = 0; i <3 ; i++){
//		arr[i] = a;
//		a++;
//		cout << arr[i] << ' ';
//		}
//
//	for (int x = 5; x >= 3; x--) {
//		arr[x] = b;
//		b--;
//		cout << arr[x] << ' ';
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = {0};
//	int a,b;
//	cin >> a>>b;
//	
//	for (int x = 0; x < 5; x++)
//	{
//		arr[x] = a;
//		cout << arr[x] << ' ';
//		a = a + b;
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6] = {0};
//	int a;
//	cin >> a;
//	int b = a;
//	for (int x = 0; x < 6; x++)
//	{
//		arr[x] = b;
//		cout << arr[x] << ' ';
//		b = b + a;
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int a, b, c, d, e;
//	cin >> a >> b >> c >> d >> e;
//	int arr[5] = { a, b, c, d, e};
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		sum = sum + arr[i];
//	}
//	cout << "합은 "<<sum<<"입니다";
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6] = {0};
//	int a, b;
//	cin >> a >>b;
//	int c = b-a;
//	for (int x = 0; x <= c; x++)
//	{
//		arr[x] = a;
//		cout << arr[x];
//		a++;
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//char a, b;
//void input() {
//	cin >> a >> b;
//}
//
//void output() {
//	cout << a << ' ' <<  b;
//}
//
//int main()
//{
//	input();
//	output();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char a, b, c;
//	cin >> a >> b >> c;
//	int as1 = (int)a;
//	int as2 = (int)b;
//	int as3 = (int)c;
//	cout << as1 << endl << as2 << endl << as3;
//
//	return 0;
//}

