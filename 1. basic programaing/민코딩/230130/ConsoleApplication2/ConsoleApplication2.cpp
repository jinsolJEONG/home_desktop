// ++++++++++++++++++++++++++ 1번
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//
//	string before[5] = {
//		"KFC", "MC", "BICMAC", "SHACK","SONY"
//	};
//	string after[5] = {
//		"#BBQ#","#BBQ#","#MACBOOK#","#SHOCK#","#NONY#"
//	};
//	string old;
//	int a = 0;
//	int b = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		while (1) {
//			b = str.find(before[i], a);
//			if (b == -1) break;
//			str.erase(b, before[i].length());
//			str.insert(b, after[i]);
//
//			a = b + after[i].length();
//		}
//	}
//	cout << str;
//	return 0;
//}



// +++++++++++++++++++++++++++++++++++ 언더바 문제
//#include <iostream>
//
//#include <cstring>
//
//using namespace std;
//string note;
//
//int main()
//{
//	cin >> note;
//	note += "_";
//	int a = 0;
//	int b = 0;
//	int t = 1;
//	while (1)
//	{
//		string s = "";
//		a = note.find('_', b);
//		if (a == -1)
//		{
//			break;
//		}
//		s = note.substr(b, a - b);
//		if (s == "")
//		{
//			b = b + 1;
//			continue;
//		}
//		cout << t << '#' << s << '\n';
//		t++;
//		b = b + s.length() + 1;
//	}
//	return 0;
//}

//++++++++++++++++++++++++++++++ 이메일 문제
//#include <iostream>
//
//#include <cstring>
//
//using namespace std;
//string in;
//string mail[10];
//
//void find(string s) {
//	int a = 0;
//	int b = 0;
//	a = s.find("@", b);
//	cout << "[#" << s.substr(b, a - b) << "] ";
//	b = a + 1;
//	a = s.find(".", b);
//	cout << s.substr(b, a - b) << '\n';
//}
//
//int main()
//{
//	cin >> in;
//	in += "|";
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	while (1)
//	{
//		a = in.find("|", b);
//		if (a == -1)
//		{
//			break;
//		}
//		mail[t++] = in.substr(b, a - b);
//		b = a + 1;
//	}
//	for (int i = 0; i < t; i++)
//	{
//		find(mail[i]);
//	}
//	return 0;
//}


//++++++++++++++++++++++++++++++고결한 문장
//#include <iostream>
//#include <cstring>
//using namespace std;
//

//int main()
//{
//	string str;
//	string ret;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str;
//		int a = 0;
//		int b = 0;
//		int flag = 0;
//		while (1) {
//			int dat[256] = { 0 };
//			a = str.find('<', a);
//			if (a == -1)break;
//			b = str.find('>', a + 1);
//			int size = b - a - 1;
//			ret = str.substr(a + 1, size);
//			//cout << ret;
//			for (int x = 0; x < ret.length(); x++)
//			{
//				dat[ret[x]]++;
//			}
//			for (int x = 0; x < 256; x++)
//			{
//				if (dat[x] > 1)
//					flag = 1;
//			}
//			a = b + 1;
//		}
//		if (flag == 1) {
//			cout << 'X';
//		}
//		else if (flag == 0) {
//			cout << 'O';
//		}
//	}
//	return 0;
//}

//++++++++++++++++++++++++++++++이모티콘
//#include <iostream>
//#include <string>
//using namespace std;
//
//string str;
//
//void removeChar(char ch)
//{
//    //괄호 한개로 정리
//
//    string tar;
//    tar += ch;
//    tar += ch;
//
//    int a = -1;
//    int b;
//    while (1) {
//        a = str.find(tar, a + 1);
//        if (a == -1) break;
//
//        for (int i = a; i <= str.length(); i++) {
//            if (str[i] != ch) {
//                b = i;
//                break;
//            }
//        }
//
//        int size = b - a - 1;
//        str.erase(a, size);
//    }
//}
//
//void step1()
//{
//    removeChar('(');
//    removeChar(')');
//}
//void step2()
//{
//    //눈웃음 ^^ 두개로 정리
//
//    int a = -1;
//    int b;
//    while (1) {
//        a = str.find("^^^", a + 1);
//        if (a == -1) break;
//
//        for (int i = a; i <= str.length(); i++) {
//            if (str[i] != '^') {
//                b = i;
//                break;
//            }
//        }
//
//        int size = b - a - 2;
//        str.erase(a, size);
//    }
//
//}
//void step3()
//{
//    //눈과 눈 사이 _ 하나로 정리
//    int a = -1;
//    int b = 1;
//
//    while (1) {
//        a = str.find('^', a + 1);
//        if (a == -1) break;
//        if (a + 2 >= str.length()) break;
//
//        if (str[a + 2] == '^') str[a + 1] = '_';
//    }
//}
//
//int main()
//{
//    //freopen("Text.txt", "r", stdin);
//    cin >> str;
//
//    step1();
//    step2();
//    step3();
//
//    cout << str;
//
//    return 0;
//}


#include <iostream>
#include <string>
using namespace std;

bool check(string str) {
	int dat[200] = { 0 };
	char moum[6] = "aeiou";

	//1. 소문자 Only 검사
	for (int i = 0; i < str.length(); i++) {
		if (!(str[i] >= 'a' && str[i] <= 'z')) return false;
		dat[str[i]]++;
	}

	//2. 모음 개수 체크
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		cnt += dat[moum[i]];
	}
	if (cnt != 3) return false;

	//3. 알파벳 검사 개수 Check
	for (int i = 'a'; i <= 'z'; i++) {
		if (dat[i] > 2) return false;
	}

	return true;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		bool ret = check(str);
		if (ret == true) cout << "good\n";
		else cout << "no\n";
	}
}