//#include <iostream>
//using namespace std;
//
//int a, b;
//char c;
//
//void BBQ(int b) {
//    for (int i = 1 ; i <= b; i++)
//    {
//        cout << i;
//    }
//}
//void KFC(char c) {
//    for (int i = 0; i < 7; i++)
//    {
//        cout << c;
//    }
//}
//
//int main()
//{
//
//    cin >> a;
//    if (a%2==1)
//    {   
//        cin >> b;
//        BBQ(b);
//    }
//    else
//    {
//        cin >> c;
//        KFC(c);
//    }
//    
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[4][4] = {0};
//    int a;
//    int cnt = 3;
//    cin >> a;
//    if (a%2==0)
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            arr[i][i] = i+1;
//        }
//    }
//    else
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            arr[i][cnt] = i + 1;
//            cnt--;
//        }
//    }
//
//    for (int y = 0; y < 4; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            cout << arr[y][x]<< ' ';
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int chicken() {
//    int a;
//    cin >> a;
//    return a + 10;
//}
//char coke() {
//    char b;
//    cin >> b;
//    return b;
//}
//
//void KFC() {
//    int num = chicken();
//    char ch = coke();
//    cout << num;
//    cout << ch;
//}
//
//int main()
//{
//    KFC();
//    return 0;
//}
//


//#include <iostream>
//using namespace std;
//
//char getChar() {
//    char a,b;
//    cin >> a>>b;
//    if (a > b) {
//        return a;
//    }
//    else {
//        return b;
//    }
//}
//
//int main()
//{
//    
//    cout << getChar();
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[3][3] = {0};
//    int a;
//    cin >> a;
//    int cnt = 9;
//    int cnt3 = 9;
//    int cnt2 = 10;
//    if (a%5 == 1)
//    {
//        for (int y = 0; y < 3; y++)
//        {
//            for (int x = 0; x < 3; x++)
//            {
//                arr[x][y] = cnt;
//                cnt--;
//            }
//        }
//    }
//    else if (a % 5 == 2)
//    {
//        for (int y = 0; y < 3; y++)
//        {
//            for (int x = 2; x >= 0; x--)
//            {
//                arr[y][x] = cnt3;
//                cnt3--;
//            }
//        }
//    }
//    else {
//        for (int y = 0; y < 3; y++)
//        {
//            for (int x = 0; x < 3; x++)
//            {
//                arr[x][y] = cnt2;
//                cnt2++;
//            }
//        }
//    }
//
//        for (int y = 0; y < 3; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            cout << arr[y][x]<< ' ';
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int n1, n2;
//
//int gop() {
//    cin >> n1 >> n2;
//    return  n1 * n2;
//}
//
//int sum() {
//    cin >> n1 >> n2;
//    return  n1 + n2;
//}
//
//
//int main()
//{
//    int a = gop();
//    int b = sum();
//    if (a > b)
//    {
//        cout << "GOP>SUM";
//    }
//    else if (a < b) {
//        cout << "GOP<SUM";
//    }
//    else {
//        cout << "GOP==SUM";
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int n1, n2;
//
//
//	//int pingpong(int stone) {
//	//    int tong = stone;
//	//    return tong + 10;
//	//    
//	//}
//
//int pingpong(int tong) {
//    return tong + 10;
//}
//
//
//int main()
//{
//    int stone;
//    cin >> stone;
//    int ret = pingpong(stone);
//    cout << ret;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[4][4] = {0};
//    int a = 1;
//
//        for (int y = 3; y >= 0; y--)
//        {
//            for (int x = 0; x < 4; x++)
//            {
//                arr[x][y] = a;
//                a++;
//            }
//        }
//
//
//        for (int y = 0; y < 4; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            cout << arr[y][x]<< ' ';
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[3][4] = { 0 };
//    int a = 1;
//
//    for (int y = 2; y >= 0; y--)
//    {
//        for (int x = 3; x >= 0; x--)
//        {
//            arr[y][x] = a;
//            a++;
//        }
//    }
//    int num;
//    cin >> num;
//
//        for (int y = 0; y < 3; y++)
//        {
//            arr[y][num] = 0;
//        }
//
//
//
//    for (int y = 0; y < 3; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            cout << arr[y][x] << ' ';
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr[4][4] = {};
//    int a;
//
//    for (int y = 0; y < 4; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            cin >> a;
//
//            if (a % 2 == 0 && a != 0)
//            {
//                arr[y][x] = '#';
//            }
//            else if (a % 2 == 1) {
//                arr[y][x] = '@';
//            }
//            else if (a == 0) {
//                arr[y][x] = '!';
//            }
//             
//        }
//    }
//
//    for (int y = 0; y < 4; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            cout << arr[y][x] ;
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//void countDown(int a) {
//    for (int i = a; i >=1 ; i--)
//    {
//        cout << i << ' ';
//    }
//}
//int input() {
//    int a;
//    cin >> a;
//    return a;
//}
//int main()
//{
//
//    int ret = input();
//    countDown(ret);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[4][4] = {};
//    int a=2;
//
//    for (int y = 0; y < 4; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            arr[x][y] = a;
//            a = a + 2;
//             
//        }
//    }
//
//    for (int y = 0; y < 4; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            cout << arr[y][x] << ' ';
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[5][5] = { 0 };
//    int a = 1;
//
//    for (int x = 4; x >= 0; x--)
//    {
//        for (int y = 0; y < 5; y++) 
//        {
//            arr[y][x] = a;
//            a++;
//        }
//    }
//    int num;
//    cin >> num;
//
//        for (int y = 0; y < 5; y++)
//        {
//            arr[num][y] = num;
//        }
//
//
//
//    for (int y = 0; y < 5; y++)
//    {
//        for (int x = 0; x < 5; x++)
//        {
//            cout << arr[y][x] << ' ';
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	struct Fruit
//	{
//		int size;
//		int price;
//	};
//	Fruit banana, apple;
//
//	cin >> banana.size;
//	banana.price = banana.size*250;
//	cin >> apple.size;
//	apple.price = apple.size*500;
//	int sum;
//	sum = banana.price + apple.price;
//	cout << sum << "원";
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//char arr[3][5] = {
//	{'D','A','C','C','D'},
//	{'S','D','F','A','E'},
//	{'E','E','T','J','H'}
//};
//char check(char t) {
//	for (int i = 0; i < 3; i++)
//	{
//		for (int x = 0; x < 5; x++)
//		{
//			if (t == arr[i][x])
//			{
//				return 1;
//			} 
//
//		}
//	}
//	return 0;
//}
//void input() {
//	char a;
//	cin >> a;
//	int k = check(a);
//	if (k == 1)
//	{
//		cout << "있음";
//	}
//	else
//	{
//		cout << "없음";
//	}
//}
//
//
//int main()
//{
//
//	input();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][4] = {};
//	int a;
//
//	for (int y = 0; y < 3; y++)
//	{	
//		cin >> a;
//		for (int x = 0; x < 4; x++)
//		{
//			arr[y][x] = a;
//			a++;
//		}
//	}
//
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 4; x++)
//		{
//			cout << arr[y][x] << ' ';
//
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[6][3] = {};
//	int t = 10;
//
//	for (int x = 0; x < 3; x++)
//	{
//		for (int y = 0; y < 6; y++)
//		{
//			arr[y][x] = t;
//			t++;
//		}
//	}
//	int a, b;
//	cin >> a >> b;
//	for (int y = a; y <= b; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			arr[y][x] = 7;
//		}
//	}
//	for (int y = 0; y < 6; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			cout << arr[y][x] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//char aToz() {
//	char ch;
//	cin >> ch;
//	if (ch <= 'M')
//	{
//		return 'A';
//	}
//	else
//	{
//		return 'Z';
//	}
//}
//
//int main()
//{
//	cout << aToz();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//char calculator() {
//	int score;
//	cin >> score;
//	if (score >= 90)
//	{
//		return 'A';
//	}
//	else if (score >= 80)
//	{
//		return 'B';
//	}
//	else if (score >= 70)
//	{
//		return 'C';
//	}
//	else 
//	{
//		return 'D';
//	}
//}
//
//int main()
//{
//	cout << calculator();
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	struct BBQ
//	{
//		int x[1] = {};
//		int data[3] = {};
//	};
//	BBQ g;
//	cin >> g.x[0];
//	cin >> g.data[0] >> g.data[1] >> g.data[2];
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		sum = sum + g.data[i];
//	}
//	cout << sum << ' ' << g.x[0];
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[7][5] = {
//	{1},
//	{1,' ', 1},
//	{1,1,' ',1},
//	{1,' ',1},
//	{' ',1,' ',	' ', 1},
//	{' ',' ',' ',1},
//	{1,1}
//};
//int input() {
//	int num;
//	cin >> num;
//	return num;
//}
//int process(int num) {
//	int cnt = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		if (arr[i][num] == 1)
//		{
//			cnt++;
//		}
//	}
//	return cnt;
//}
//void output(int cnt) {
//	cout << cnt;
//}
//int main()
//{
//	output(process(input()));
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void run(int num) {
//    int arr[3][3] = { 0 };
//    int a = 1;
//
//    if (num < 10)
//    {
//        for (int y = 0; y < 3; y++)
//        {
//            for (int x = 0; x < 3; x++)
//            {
//                arr[y][x] = a;
//                a++;
//            }
//        }
//    }
//    else
//    {
//        for (int y = 0; y < 3; y++)
//        {
//            for (int x = 2; x >= 0; x--)
//            {
//                arr[y][x] = a;
//                a++;
//            }
//        }
//    }
//
//    for (int y = 0; y < 3; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            cout << arr[y][x];
//        }
//        cout << endl;
//    }
//
//}
//
//int main()
//{
//    int num;
//    cin >> num;
//    run(num);
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int yesOrNo() {
//    int num;
//    cin >> num;
//    if (num%3==0)
//    {
//        return 7;
//    }
//    else if(num % 3 == 1)
//    {
//        return 35;
//    }
//    else if (num % 3 == 2)
//    {
//        return 50;
//    }
//}
//
//int main()
//{
//
//    cout << yesOrNo();
//
//    return 0;
//}

//1. KFC 함수로 값을 보내는 방법
//- 함수 정의할 때
//void KFC(int x, int y)
//{
//    //...
//}
//
//- 함수 호출할 때
//ABC(3, 5); //숫자 3과 5를 ABC 함수로 보낸다.
//*이 예제는 값 2개 보냈습니다.호출할 때는 여러 값을 보낼 수 있습니다.
//* void KFC(int x, int y) 에서 "void"의 의미는 return 할 값이 없을 때 사용합니다
//
//
//2. KFC함수에서 값을 return 받는 방법
//- 함수 정의할 때
//int KFC()
//{
//    int x = 5;
//    return x;
//}
//- 함수 호출할 때
//int a = KFC(); //KFC함수의 return값을 변수 a에 저장한다
//*int KFC() 에서 "int"의 의미는 숫자 형태의 값을 return 하겠다 라는 뜻입니다.
//* 값을 보낼때와 달리, 값을 되돌려줄때는 오직 값 1개만 return할 수 있습니다.
//
//
//3. KFC함수에서 값을 보내고, 결과를 받는 방법
//- 함수 정의할 때
//int KFC(int a, int b)
//{
//    return a + b;
//}
//- 함수 호출할 때
//int t = KFC(1, 2); // 숫자 2개를 보내고, 숫자 1개를 return받는 코드

//#include <iostream>
//using namespace std;
//int input() {
//    int num;
//    cin >> num;
//    return num;
//}
//int calc(int a,int b, int c) {
//    int sum;
//    sum = a + b + c;
//    cout << sum;
//}
//
//int main()
//{
//    int a, b, c;
//    a = input();
//    b = input();
//    c = input();
//    calc(a, b, c);
//
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int sum(int a, int b) {
//    return a+b;
//}
//int omp(int a, int b) {
//    return a - b;
//}
//int print(int t1, int t2) {
//    cout << "합:"<< t1 << endl<<"차:" << t2;
//}
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    print(sum(a, b), omp(a, b));
//    return 0;
//}

//int x = 10;
//int* p = &x; //p는 x를 가리킨다.
//*p = 10;  // 능력사용! p가 가리키고 있는 곳의 값에다가 10을 넣는다.
//(*p)++; // 능력사용! p가 가리키고 있는 곳의 값에다가 1 더한다.
//cout << *p; //능력사용! p가 가리키고 있는 곳의 값을 출력한다.
//cout << x; //변수 x 출력 한다.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a;
//    cin >> a;
//    char gd;
//    cin >> gd;
//    int* p;
//    char* t;
//    p = &a;
//    t = &gd;
//    cout << *p << ' ' << *t;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char a, b, c;
//    cin >> a >> b >> c;
//    char* p;
//    char* t;
//    char* s;
//    p = &a;
//    t = &b;
//    s = &c;
//    cout << ++(*p) << ' ' << ++(*t) << ' '<< ++(*s);
//    return 0;
//}

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cin >> a >> b ;
    int* p;
    int* t;
    p = &a;
    t = &b;
    temp = * p;
     *p = * t ;
     *t = temp;

    cout << *p << ' ' << *t;
    return 0;
}
