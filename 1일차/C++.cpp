//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	//동적할당
//	//int *p = new int;
//	//*p = 337;
//	//cout << *p << endl;
//
//	//delete p;
//	//p = NULL;
//
//	//int length = 10;
//	//int *q = new int[length];
//
//	//q[0] = 4;
//
//	//cout << q[0] << endl;
//
//	//delete[] q;
//	//q = NULL;
//
//	//string str = "Hello, World";
//	//str.append("!");//string 뒤에 문자 추가
//	//cout << str << endl;
//	//cout << str.length() << "+" << str.size() << endl; //string의 크기 반환
//	//cout << str.capacity() <<endl;
//	//string str = "Hi, My name is Yoonsang";
//	//cout << str.at(0) << endl;
//	//cout << str.find("My") << endl;
//	
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string num;
//	int sum = 0, n;
//	cin >> n;
//	cin >> num;
//	for (int i = 0; i<n; i++)
//	{
//		int j;
//		j = (int)num.at(i)-48;
//		sum += j;
//	}
//	cout << sum;
//	return 0;
//}
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int T, R, j, k, l;
//	string S;
//	cin >> T; 
//	for (int i = 0; i < T; i++)
//	{
//		cin >> R >> S;
//		l = S.length();
//		for (j = 0; j < l; j++)
//		{
//			for (k = 0; k < R; k++)
//			{
//				cout << S.at(j);
//			}
//		}
//		cout << endl;
//	}
//}
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int alpha[26];
	for (int i = 0; i < 26; i++)
	{
		alpha[i] = -1;
	}
	string S;
	cin >> S;
	int n = S.length();
	for (int i=0; i < 26; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + 'a') == S.at(j)&&alpha[i]==-1)
			{
				alpha[i] = j;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i]<<" ";
	}
}