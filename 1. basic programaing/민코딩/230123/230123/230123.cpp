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

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a, b, temp;
//    cin >> a >> b ;
//    int* p;
//    int* t;
//    p = &a;
//    t = &b;
//    temp = * p;
//     *p = * t ;
//     *t = temp;
//
//    cout << *p << ' ' << *t;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[7] = { 3,4,1,3,2,7,3 };
//    int a;
//    cin >> a;
//    int flag;
//    flag = 0;
//    for (int i = 0; i < 7; i++)
//    {
//        if (arr[i] == a)
//        {
//            flag = 1;
//            break;
//        }
//    }
//    if (flag == 1)
//    {
//        cout << "발견";
//    }
//    else
//    {
//        cout << "미발견";
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[7] = {};
//    for (int i = 0; i < 7; i++)
//    {
//        cin >> arr[i];
//    }
//    int max = -99;
//    int min = 99;
//    for (int i = 0; i < 7; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    for (int i = 0; i < 7; i++)
//    {
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//
//    cout << "MAX=" << max << endl << "MIN=" << min;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr[13] = { 'S','t','r','u','c','t','P','o','i','n','t','e','r' };
//    char a;
//    cin >> a;
//    int flag;
//    flag = 0;
//    for (int i = 0; i < 13; i++)
//    {
//        if (arr[i] == a)
//        {
//            flag = 1;
//            break;
//        }
//    }
//    if (flag == 1)
//    {
//        cout << "발견";
//    }
//    else
//    {
//        cout << "미발견";
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr[8] = {};
//    for (int i = 0; i < 8; i++)
//    {
//        cin >> arr[i];
//    }
//    char big[8];
//    char small[8];
//    int t = 0;
//    int x= 0;
//
//    for (int i = 0; i < 8; i++)
//    {
//        if (arr[i] >= 'A' && arr[i] <= 'Z')
//        {
//            big[t] = arr[i];
//            t++;
//        }
//    }
//    for (int i = 0; i < 8; i++)
//    {
//        if (arr[i] >= 'a' && arr[i] <= 'z')
//        {
//            small[x] = arr[i];
//            x++;
//        }
//    }
//    cout << "big=";
//    for (int i = 0; i < t; i++)
//    {
//        cout << big[i];
//    }
//    cout <<endl<< "small=";
//    for (int i = 0; i < x; i++)
//    {
//        cout << small[i];
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[2][5] = {
//    {3,2,6,2,4},
//    {1,4,2,6,5}
//};
//int KFC(int a) {
//    for (int y = 0; y < 2; y++)
//    {
//        for (int x = 0; x < 5; x++)
//        {
//            if (arr[y][x] == a)
//            {
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a;
//    cin >> a;
//
//    ;
//    if (KFC(a)==1)
//    {
//        cout << "값이 존재합니다";
//    }
//    else
//    {
//        cout << "값이 없습니다";
//    }
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[4][4] = {
//        {1,3,6,2},
//        {4,2,4,5},
//        {6,3,7,3},
//        {1,5,4,6}
//    };
//    int a;
//    cin >> a;
//    int select[16];
//    int t = 0;
//    for (int y = 0; y < 4; y++)
//    {
//        for (int x = 0; x < 4; x++)
//        {
//            if (arr[y][x] > a)
//            {
//                select[t] = arr[y][x];
//                t++;
//            }
//        }
//    }
//    for (int i = 0; i < t; i++)
//    {
//        cout << select[i] << ' ';
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[6] = {'D','F','G','D','A','Q'};
//    char a,b;
//    cin >> a>>b;
//        int flag;
//        flag = 0;
//        for (int i = 0; i < 6; i++)
//        {
//            if (arr[i]>=a&& arr[i]<=b)
//            {
//                flag = 1;
//                break;
//            }
//        }
//            if (flag == 1)
//            {
//                cout << "발견!!!";
//            }
//            else
//            {
//                cout << "미발견!!!";
//            }
//      
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int count(int a) {
//    int arr[3][3] = {
//    {1,1,1},
//    {1,2,1},
//    {3,6,3}
//    };
//    int cnt = 0;
//    for (int y = 0; y < 3; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            if (arr[y][x] == a)
//            {
//                cnt++;
//            }
//        }
//    }
//    return cnt;
//}
//
//int main()
//{
//    int a;
//    cin >> a;
//    cout << count(a);
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr[3][5] = {
//        {'a','b','a','c','z'},
//        {'c','t','a','c','d'},
//        {'c','c','c','c','a'}
//    };
//    char a;
//    cin >> a;
//    int cnt = 0;
//    for (int y = 0; y < 3; y++)
//    {
//        for (int x = 0; x < 5; x++)
//        {
//            if (arr[y][x] == a)
//            {
//                cnt++;
//            }
//        }
//    }
//
//            if (cnt >=7)
//            {
//                cout << "세상에";
//            }
//            else if (cnt >= 5)
//            {
//                cout << "와우";
//            }
//            else if (cnt >=3 )
//            {
//                cout << "이야";
//            }
//            else
//            {
//                cout << "이런";
//            }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[2][3];
//
//    for (int  y = 0; y < 2; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            cin >> arr[y][x];
//        }
//    }
//    for (int y = 0; y < 2; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            if (arr[y][x]== 0)
//            {
//               cout << '#';
//            }
//            else
//            {
//                cout << arr[y][x];
//            }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    char arr[3][3] = {
//        {'a','b','E'},
//        {'E','2','W'},
//        {'3','2','4'}
//    };
//    cout << 'A' << ' ' << 'B' << ' ' << 'e' << endl;
//    cout << 'e' << ' ' << 7 << ' ' << 'w' << endl;
//    cout << 8 << ' ' << 7 << ' ' << 9 << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char v[3][3] =
//	{
//		'a','b','E',
//		'E','2','W',
//		'3','2','4'
//	};
//	int x, y;
//	for (y = 0; y < 3; y++)
//	{
//		for (x = 0; x < 3; x++)
//		{
//			if (v[y][x] >= 'A' && v[y][x] <= 'Z')
//			{
//				cout << (char)(v[y][x] + 32) << " ";
//			}
//			else if (v[y][x] >= 'a' && v[y][x] <= 'z')
//			{
//				cout << (char)(v[y][x] - 32) << " ";
//			}
//			else if (v[y][x] - '0' >= 0 && v[y][x] - '0' <= 9)
//			{
//				cout << (int)(v[y][x] - '0') + 5 << " ";
//			}
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//char arr[3][3] =
//{
//	'a','b','d',
//	'e','w','z',
//	'q','v','a'
//};
//char input(char a) {
//	
//	cin >> a;
//	return a;
//}
//char process(char a) {
//	char b = (char)(a + 32);
//	int flag = 0;
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] == b) {
//				flag++;
//			}
//		}
//	}
//	if (flag >=1)
//	{
//		cout << "존재";
//	}
//	else if (flag == 0)
//	{
//		cout << "없음";
//	}
//}
//
//int main()
//{
//	char a;
//	char t = input(a);
//	process(t);
//	return 0;
//}


// ==========================================================
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3][3] =
//	{
//		3,1,6,
//		7,8,4,
//		9,2,3
//	};
//	int a, b, c;
//	cin >> a >> b >> c;
//	arr[b][a] = c;
//	int max = -99;
//	int min = 99;
//	for (int y = 0; y < 3; y++)
//	{
//		for (int  x = 0; x < 3; x++)
//		{
//			if (arr[y][x]>max)
//			{
//				max = arr[y][x];
//			}
//		}
//	}
//	for (int y = 0; y < 3; y++)
//	{
//		for (int x = 0; x < 3; x++)
//		{
//			if (arr[y][x] < min)
//			{
//				min = arr[y][x];
//			}
//		}
//	}
//	cout << max + min;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[2][3];
//    for (int y = 1; y >= 0; y--)
//    {
//        for (int x = 2; x >= 0; x--)
//        {
//            cin >> arr[y][x];
//        }
//    }
//    
//    int select[6];
//    int t = 0;
//    for (int y = 0; y < 2; y++)
//    {
//        for (int x = 0; x < 3; x++)
//        {
//            select[t] = arr[y][x];
//            t++;
//        }
//    }
//    int temp;
//    temp = select[0];
//    select[0] = select[5];
//    select[5] = temp;
//    for (int i = 0; i < 6; i++)
//    {
//        cout << select[i] << ' ';
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void getName(char* a, char* b) {
//    cin >> *a >> *b;
//}
//
//int main()
//{
//    char a, b;
//    getName(&a, &b);
//    if (a > b)
//    {
//        cout << b;
//    }
//    else {
//        cout << a;
//    }
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//void moom(int a, int* x, int* y, int* z) {
//    *x = a - 4;
//    *y = a + 3;
//    *z = a * 2;
//}
//
//int main()
//{
//    int a;
//    int x, y, z;
//    cin >> a;
//    moom(a, &x, &y, &z);
//    
//    cout << x <<" " << y <<' ' << z;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int stringLen(char vect[100]) {
//	int len;
//	for (int i = 0; i < 100; i++) {
//		if (vect[i] == NULL) {
//			len = i;
//			break;
//		}
//	}
//	return len;
//}
//
//int main()
//{
//	char vect[100];
//	cin >> vect;
//	stringLen(vect);
//	cout << stringLen(vect) << "글자";
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void abc(int a, int b, int* sum , int* gop){
//    *sum = a + b;
//    *gop = a * b;
//}
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    int sum, gop;
//    abc(a, b, &sum, &gop);
//    cout << sum << ' ' << gop;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//void kfc(int* cnt1, int* cnt2) {
//	char vect[100];
//	cin >> vect;
//	int t1 = 0;
//	int t2 = 0;
//
//	for (int i = 0; i < 100; i++) {
//		if (vect[i] >= 'A' && vect[i] <= 'Z') {
//			t1++;
//		}
//		else if (vect[i] == NULL) {
//			break;
//		}
//	}
//	for (int i = 0; i < 100; i++) {
//		if (vect[i] >= 'a' && vect[i] <= 'z') {
//			t2++;
//		}
//		else if (vect[i] == NULL) {
//			break;
//		}
//	}
//	*cnt1 = t1;
//	*cnt2 = t2;
//}
//
//int main()
//{
//	int cnt1 = 0;
//	int cnt2 = 0;
//	kfc(&cnt1, &cnt2);
//	cout << "대문자"<<cnt1 << "개"<<endl;
//	cout << "소문자" << cnt2 << "개";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int arr[2][6] = {
//	4,5,6,1,3,1,
//	2,1,3,6,3,6
//};
//
//void input(int* a, int* b, int* c) {
//
//	cin >> *a >> *b >> *c;
//}
//void process(int a, int b, int c, int* r1, int* r2, int* r3) {
//	for (int y = 0; y < 2; y++)
//	{
//		for (int  x = 0; x < 6; x++)
//		{
//			if (a == arr[y][x])
//			{
//				(*r1)++;
//			}
//			if (b == arr[y][x])
//			{
//				(*r2)++;
//			}
//			if (c == arr[y][x])
//			{
//				(*r3)++;
//			}
//		}
//	}
//}
//void output(int a, int b, int c, int r1, int r2, int r3) {
//	cout << a << '=' << r1 << "개" << endl;
//	cout << b << '=' << r2 << "개" << endl;
//	cout << c << '=' << r3 << "개";
//}
//
//int main()
//{
//	int a, b, c;
//	int r1 = 0;
//	int r2 = 0;
//	int r3 = 0;
//	input(&a, &b, &c);
//	process(a, b, c, &r1, &r2, &r3);
//	output(a, b, c, r1, r2, r3);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//char arr[3][3] = {
//	'A','D','F',
//	'Q','W','E',
//	'Z','X','C'
//};
//
//void find(char a,  int* y, int* x) {
//	for (int i = 0; i < 3; i++)
//	{
//		for (int t = 0; t < 3; t++)
//		{
//			if (a == arr[i][t])
//			{
//				*y = i;
//				*x = t;
//				break;
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	char a;
//	cin >> a;
//	int x, y;
//	find(a,  &y, &x);
//	cout << y << ',' << x;
//	return 0;
//}

#include <iostream>
using namespace std;

void find(int arr[5], int arr2[5]) {
	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] != arr2[i])
			{
			flag = 1;
			break;
			}
		

	}
	if (flag == 1)
	{
		cout << "두배열은같지않음";
	}
	else if (flag == 0)
	{
		cout << "두배열은완전같음";
	}
	
}

int main()
{
	int arr[5] = {
		3,5,1,2,7
	};
	int arr2[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	find(arr, arr2);

	return 0;
}