//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[3][3] = {
//    {3, 5, 4},
//    {1, 1, 2},
//    {1, 3, 9}
//    };
//    int y, x;
//    cin >> y >> x;
//    int direct[4][2] = {
//        -1,0,
//        1,0,
//        0,-1,
//        0,1
//    };
//    int sum = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        int dy = y + direct[i][0];
//        int dx = x + direct[i][1];
//        if (dy>=0&&dy<3&&dx>=0&&dx<3)
//        {
//            sum += arr[dy][dx];
//        }
//
//    }
//    cout << sum;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int MAP[5][5] = {
//{3, 3, 5, 3, 1},
//{2, 2, 4, 2, 6},
//{4, 9, 2, 3, 4},
//{1, 1, 1, 1, 1},
//{3, 3, 5, 9, 2}
//};
//
//int direct[4][2] = {
//-1,-1,
//1,1,
//1,-1,
//-1,1
//};
//
//
//
//int fn(int y, int x) {
//    // (y, x)좌표로부터 대각선 방향의 합을 반환
//    int sum = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        
//        int dy = y + direct[i][0];
//        int dx = x + direct[i][1];
//        if (dy>=0&&dy<5&&dx>=0&&dx<5)
//        {
//            sum += MAP[dy][dx];
//        }
//
//    }
//    return sum;
//}
//
//int main()
//{
//    int max = 0;
//    int maxdy;
//    int maxdx;
//    for (int y = 0; y < 5; y++)
//    {
//        for (int x = 0; x < 5; x++)
//        {
//            
//            if (max < fn(y, x))
//            {
//                max = fn(y, x);
//                maxdy = y;
//                maxdx = x;
//            }
//        }
//    }
//    cout << maxdy << ' ' << maxdx;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int arr[3][3] = {
//    {3, 5, 4},
//    {1, 1, 2},
//    {1, 3, 9}
//    };
//    int y, x;
//    cin >> y >> x;
//    int direct[4][2] = {
//        -1,0,
//        1,0,
//        0,-1,
//        0,1
//    };
//    int sum = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        int dy = y + direct[i][0];
//        int dx = x + direct[i][1];
//        if (dy>=0&&dy<3&&dx>=0&&dx<3)
//        {
//            sum += arr[dy][dx];
//        }
//
//    }
//    cout << sum;
//	return 0;
//}




//#include <iostream>
//using namespace std;
//
//struct Train {
//    int win;
//};

//Train train[7] = {
//    {15},
//    {33},
//    {24},
//    {28},
//    {32},
//    {20},
//    {40}
//};


//int isSame(int c, int* x[7]) {
//    
//    for (int i = 0; i < 7; i++)
//    {
//       
//        if (c == *x[i])
//        {
//            return i;
//        }
//    }
//
//}
//
//
//int main()
//{   
//    Train x[7];
//
//    x[0].win = 15;
//    x[1].win = 33;
//    x[2].win = 24;
//    x[3].win = 28;
//    x[4].win = 32;
//    x[5].win = 20;
//    x[6].win = 40;
//    
//    char input[8];
//    int age;
//    cin >> input >> age;
//   cout  << isSame(age, &x);
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//struct Coord
//{
//	int input[4][2];
//};
//
//int main()
//{   
//	Coord vect[4][3] = { 0 };
//	for (int y = 0; y < 4; y++)
//	{
//		for (int  x = 0; x < 2; x++)
//		{
//			cin >> vect[y][x].input[y][x];
//		}
//	}
//
//
//
//    return 0;
//}


//+++++++++++++++++ 19.5 3번
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int in[4];
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> in[i];
//	}
//	int arr[4][4] = { 0 };
//	int dat[20] = {};
//	for (int i = 0; i < 4; i++)
//	{
//		dat[in[4]]++;
//	}
//
//	for (int i = 0; i < 20; i++)
//	{
//		if (dat[i] == 1)
//		{
//			for (int y = 0; y < 4; y++)
//			{
//				for (int x = 0; x < 4; x++)
//				{
//
//				}
//			}
//
//
//		}
//	}
//
//
//
//	return 0;
//}


#include <iostream>
using namespace std;

void run(int lev, int a) {
	cout >> lev;
	if (lev == a)
	{
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		run(lev + 1);
	}

}


int main()
{
	int a; 
	cin >> a;
	run(0, a);
	return 0;
}