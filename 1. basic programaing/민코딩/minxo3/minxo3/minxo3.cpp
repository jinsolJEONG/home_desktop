//if (g >= '0' && g <= '9') // 문자'0' ~ 문자'9' 판별 조건
//
//if (g >= 'A' && g <= 'Z') // 대문자 판별 조건
//
//if (g >= 65 && g <= 90) // 대문자 판별 조건

//#include <iostream>
//using namespace std;
//
//char arr1[5] = { 'B','D', '5', 'Q', 'A' };
//char arr2[5] = { 'Q','E','R','E','F' };
//char a;
//void input() {
//
//    cin >> a;
//}
//void output() {
//    if (a >= 'A' && a <= 'Z')
//    {
//        for (int i = 0; i < 5; i++)
//        {
//            cout << arr2[i];
//        }
//    }
//    else if (a >= '0' && a <= '9')
//    {
//        cout << "HGFEDCBA";
//    }
//    else
//    {
//        for (int i = 0; i < 5; i++)
//        {
//            cout << arr1[i];
//        }
//    }
//}
//int main()
//{
//    input();
//    output();
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr1[6] = { '#', '_', '#','_','#','#' };
//
//    for (int i = 0; i < 6; i++)
//    {
//        if (arr1[i] == '#')
//        {
//            cout << "샵";
//        }
//        else
//        {
//            cout << "무";
//        }
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int arr[2][3] = {0};
//int sum;
//
//void input() {
//    for (int y = 0; y < 2; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            cin >> arr[y][x];
//        }
//    }
//}
//    void process() {
//        
//        for (int y = 0; y < 2; y++)
//        {
//            for (int x = 0; x < 3; x++)
//            {
//                sum = sum + arr[y][x];
//            }
//        }
//    }
//    void output() {
//        cout << sum;
//    }
//int main()
//{
//    input();
//    process();
//    output();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//    int arr[3][4] = { 
//        {4,3,1,1},
//        {3,1,2,1},
//        {0,0,1,2}
//    };
//    int a;
//    int count = 0;
//    cin >> a;
//    for (int y = 0; y < 3; y++)
//    {
//       for (int x = 0; x < 4; x++)
//        {
//           if (arr[y][x] ==a )
//           {
//               count++;
//           }
//        }
//    }
//    cout << count << "개 존재합니다";
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void starBox() {
//    for (int x = 1; x < 20; x = x + 2)
//    {
//        cout << x <<' ';
//    }
//}
//void macDoll() {
//    for (char i = 'H'; i >= 'A'; i--)
//    {
//        cout << i<< ' ';
//    }
//}
//void copyBean() {
//    for (int i = -5; i <= 5; i++)
//    {
//        cout << i<< ' ';
//    }
//}
//int main()
//{
//    int a;
//    cin >> a;
//    if (a >= 3500 && a<= 5000)
//    {
//        starBox();
//    }
//    else if (a >= 2500 && a < 3500)
//    {
//        macDoll();
//    }
//    else {
//        copyBean();
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a,b,c,d,e,f;
//	cin >> a>>b>>c>>d>>e>>f;
//	int arr[6] = { a,b,c,d,e,f };
//
//
//	for (int z = 0; z < 6; z++)
//	{
//		if (arr[z]<5)
//		{
//			cout << z << "번은 " << arr[z] << "점 불합격"<<endl;
//		}
//		else
//		{
//			cout << z << "번은 " << arr[z] << "점 합격" << endl;
//		}
//	
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[6] = {'D', 'T','A','B','W','Q'};
//	char a;
//	cin >> a;
//	for (int z = 0; z < 6; z++)
//	{
//		if (arr[z] == a)
//		{
//			cout << z << "번" << " INDEX";
//		}
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[5] = {};
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i];
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
//	cin >> a>> b>> c;
//	char arr[17] = {};
//	for (int i = 0; i <=6; i++)
//	{
//		arr[i]=a;
//	}
//	for (int i = 7; i <= 12; i++)
//	{
//		arr[i] = b;
//	}
//	for (int i = 13; i <= 16; i++)
//	{
//		arr[i] = c;
//	}
//	for (int i = 16; i >= 0; i--)
//	{
//		cout << arr[i];
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
//	int c;
//	cin >> a>> b>> c;
//
//	for (int i = 0; i <c; i++)
//	{
//		for (char x = a; x <= b; x++)
//		{
//			cout << x;
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
//	char a;
//	int c;
//	cin >> a >> c;
//
//	for (int i = 0; i < c; i++)
//	{
//		for (char x = 0; x < c; x++)
//		{
//			cout << a;
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
//
//	int arr[3][3] = { 0 };
//	int y, x, a;
//	cin >> y >>x>> a;
//	arr[y][x] = a;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int t = 0; t < 3; t++)
//		{
//			cout << arr[i][t]<<' ';
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
//
//	int arr[6][3] = { 0 };
//	int a, b;
//	cin >> a >> b;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int t = 0; t < 3; t++)
//		{
//			arr[i][t] = a;
//		}
//	}
//	for (int i = 3; i < 6; i++)
//	{
//		for (int t = 0; t < 3; t++)
//		{
//			arr[i][t] = b;
//		}
//	}
//
//	for (int i = 0; i < 6; i++)
//	{
//		for (int t = 0; t < 3; t++)
//		{
//			cout << arr[i][t] ;
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
//
//	char arr[3][6] = { 0 };
//	char a, b;
//	cin >> a >> b;
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int t = 0; t < 4; t++)
//		{
//			arr[i][t] = a;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int t = 4; t < 6; t++)
//		{
//			arr[i][t] = b;
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int t = 0; t < 6; t++)
//		{
//			cout << arr[i][t];
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//if (a >= '0' && a <= '9') // 문자'0' ~ 문자'9' 판별 조건
//
//if (a >= 'A' && a <= 'Z') // 대문자 판별 조건
//
//if (a >= 65 && a <= 90) // 대문자 판별 조건
//if (a >= 97 && a <= 122) // 소문자 판별 조건


//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	char a, b;
//	cin >> a >> b;
//	if (a >= 65 && a <= 90)
//	{
//		a = a + 32;
//	}
//	else {
//		a = a - 32;
//	}
//
//	if (b >= 65 && b <= 90)
//	{
//		b = b + 32;
//	}
//	else {
//		b = b - 32;
//	}
//
//	cout << a << ' ' << b;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr1[5] = {};
//	char arr2[5] = {};
//	char a;
//	cin >> a ;
//	char b = a;
//	char c = a;
//	
//	for (int i = 0; i < 5; i++)
//	{
//		arr1[i] = b;
//		b++;
//		cout << arr1[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		arr2[i] = c;
//		c--;
//		cout << arr2[i];
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6] = {5,4,1,2,7,8};
//	int a;
//	cin >> a;
//	for (int x = 0; x < a; x++)
//	{
//		for (int i = 5; i >= 0; i--)
//		{
//			cout << arr[i] << ' ';
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
//	char a, b, c;
//	cin >> a>> b>> c;
//	char arr[3] = { a, b, c };
//	if (a >= b && a>=c)
//	{
//		cout << "옳다" << a;
//	}
//	else
//	{
//		cout << "옳지않음";
//	}
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	char a, b;
	cin >> a >> b;
	cout << b - a;
	return 0;
}