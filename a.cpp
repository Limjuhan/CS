//#include <bits/stdc++.h> // ---(1)
//using namespace std; // ---(2)
//string a; //--- (3)
//int main() {
//	cin >> a; //---(4)
//	cout << a << "\n"; // ---(5)
//	return 0; // -(6)
//}

// typdeef Ÿ���� ���ο� ��Ī���� �ٲ㼭 ǥ�� 

//#include<bits/stdc++.h>
//using namespace std;
//typedef int i;
//int main () {
//	i a = 1;
//	cout << a << '\n';
//	return 0;
//}

//define  ���, ��ũ�θ� ���� ����
 

//#include<bits/stdc++.h>
//using namespace std;
//#define PI 3.14159
//#define loop(x,n) for(int x=0; x<n; x++)
//
//int main() {
//	cout << PI << '\n';
//	int sum = 0;
//	loop(i, 10) {
//		sum += i;
//	}
//	cout << sum << '\n';
//	return 0;
//}


// STL Standard Template Library. �ڷᱸ��, �Լ����� �����ϴ� ���̺귯���� ����
//�˰���, �����̳�, ���ͷ�����, ���� ����
 
//�˰��� : ����, Ž�� � ���� �Լ��� �̷����. sort()�� ��ǥ��

//�����̳� : C++���� �����ϴ� �ڷᱸ���� ����.
//-������ �����̳�(sequence container)�� �����͸� �ܼ��� ������ ���� �ڷᱸ���� ���� 
//array, vector, deque, forward_list, list �� �ִ�.

//- ���� �����̳�(associative container)�� �ڷᰡ ����ʿ� ���� �ڵ����ĵǴ� �ڷᱸ���� ���� 
//�ߺ�Ű�� ������ ���� �̸��� multi�� �ٽ��ϴ�. set, map,multiset, multimap �ִ�.

//- ���ĵ��� ���� ���� �����̳�(unordered associative container)�� �ڷᰡ ����ʿ� ���� �ڵ������� ���� �ʴ� �ڷᱸ���� ����. 
//unordered_set, unordered_map, unordered_multiset, unordered_multimap �ִ�.

//- �����̳� �����(container adapter) �� ������ �����̳ʸ� �̿��� ���� �ڷᱸ����
//���ϸ�, stack, queue�� deque�� ������� ������, priority_queue�� vector�� �̿��� �� �ڷᱸ���� ���� 

//���ͷ�����

//���� : �Լ� ȣ�� �����ڸ� �����ε��ϴ� Ŭ������ �ν��Ͻ��� ����. 

//====================================================================//

//�Է� 
//cin: ���๮�� �������� �Է¹���(ex: ���� �ٷ��� �Է½�  �������� ���� �� ��µ�) 
//scanf : ������ �����ؼ� �Է¹���

//#include <bits/stdc++.h> 
//using namespace std;
//int a;
//int main() {
//	cin >> a;
//	scanf("%d", &a);
//	return 0;
//}
 
//���๮�� �־ 2���� ���ڿ� �Է½� ��� Ȯ�� 
//#include <bits/stdc++.h>
//using namespace std;
//string a, b;
//int main () {
//	cin >> a >> b;
//	cout << a << '\n';
//	cout << b << '\n';
//	return 0;
//}

/*
-�Է�
������ �ٷ���
-��� 
������
�ٷ���
*/

//scanf
/*
d:int
c:char
s:string
lf:double
ld:long long
*/

//#include <bits/stdc++.h>
//using namespace std;
//int a, e, f;
//double b;
//char c;
//
//int main () {
//	scanf("%d.%d", &e, &f); // doubleŸ������ ������ intŸ�� 2���� ����ϱ� 
//	cout <<e<<'\n'<<f;
//	
//	return 0;
//}


//getline : ���� ���� �Ѳ����� ��

//#include<bits/stdc++.h> 
//using namespace std;
//string s;
//int main() {
//	getline(cin, s);
//	cout << s << '\n';
//	return 0;
//}

// cin �Է¹����� ���๮���������ޱ⶧����  �߰��� ��ġ�� \n�� �����ֱ� ���� getline(cin,bufferflush)�� ���ش�.
 
//#include <bits/stdc++.h> 
//using namespace std;
//int T;
//string s;
//int main() {
//	cin >> T;
//	string bufferflush;
//	getline(cin, bufferflush);
//	for(int i=0; i<T; i++) {
//		getline(cin, s);
//		cout << s << "\n";
//	}
//	return 0;
//}

//��� 

//#include<bits/stdc++.h> 
//using namespace std;
//string a = "������ ȭ����!";
//string b = "������ �ʹ� ���ƿ�.";
//
//int main() {
//	cout << a << '\n';
//	cout << a << " " << " "<<b<<'\n';
//	return 0;
//}

//cout�� �⺻������ �Ǽ��� ����ϸ� �Ϻθ� ����Ѵ�.

//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//double a = 1.23456789;
//int main() {
//	cout<<a<<"\n";
//	cout.precision(7);
//	cout<<a<<"\n";
//	return 0;
//}

//printf : ���������Ŀ��� ���ڹ޾Ƽ� ��½� �̿� 

#include<bits/stdc++.h>
using namespace std;
int a = 1, b = 2;
int main() {
	printf("ȫö %d : ���� %d\n", a,b);
	return 0;
}



















