//#include <bits/stdc++.h> // ---(1)
//using namespace std; // ---(2)
//string a; //--- (3)
//int main() {
//	cin >> a; //---(4)
//	cout << a << "\n"; // ---(5)
//	return 0; // -(6)
//}

// typdeef 타입을 새로운 별칭으로 바꿔서 표현 

//#include<bits/stdc++.h>
//using namespace std;
//typedef int i;
//int main () {
//	i a = 1;
//	cout << a << '\n';
//	return 0;
//}

//define  상수, 매크로를 정의 가능
 

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


// STL Standard Template Library. 자료구조, 함수등을 제공하는 라이브러리를 뜻함
//알고리즘, 컨테이너, 이터레이터, 평터 제공
 
//알고리즘 : 정렬, 탐색 등에 관한 함수로 이루어짐. sort()가 대표적

//컨테이너 : C++에서 제공하는 자료구조를 뜻함.
//-시퀀스 컨테이너(sequence container)는 데이터를 단순히 저장해 놓는 자료구조를 말함 
//array, vector, deque, forward_list, list 가 있다.

//- 연관 컨테이너(associative container)는 자료가 저장됨에 따라 자동정렬되는 자료구조를 말함 
//중복키가 가능한 것은 이름에 multi가 붙습니다. set, map,multiset, multimap 있다.

//- 정렬되지 않은 연관 컨테이너(unordered associative container)는 자료가 저장됨에 따라 자동정렬이 되지 않는 자료구조를 말함. 
//unordered_set, unordered_map, unordered_multiset, unordered_multimap 있다.

//- 컨테이너 어댑터(container adapter) 는 시퀀스 컨테이너를 이용해 만든 자료구조를
//뜻하며, stack, queue는 deque로 만들어져 있으며, priority_queue는 vector을 이용해 힙 자료구조로 만듬 

//이터레이터

//평터 : 함수 호출 연산자를 오버로드하는 클래스의 인스턴스를 말함. 

//====================================================================//

//입력 
//cin: 개행문자 직전까지 입력받음(ex: 톤포 꾸러기 입력시  띄어쓰기전인 톤포 만 출력됨) 
//scanf : 형식을 지정해서 입력받음

//#include <bits/stdc++.h> 
//using namespace std;
//int a;
//int main() {
//	cin >> a;
//	scanf("%d", &a);
//	return 0;
//}
 
//개행문자 넣어서 2개의 문자열 입력시 출력 확인 
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
-입력
톤포우 꾸러기
-출력 
톤포우
꾸러기
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
//	scanf("%d.%d", &e, &f); // double타입으로 받은걸 int타입 2개로 출력하기 
//	cout <<e<<'\n'<<f;
//	
//	return 0;
//}


//getline : 띄어쓰기 문자 한꺼번에 받

//#include<bits/stdc++.h> 
//using namespace std;
//string s;
//int main() {
//	getline(cin, s);
//	cout << s << '\n';
//	return 0;
//}

// cin 입력받을시 개행문자전까지받기때문에  중간에 위치한 \n을 없애주기 위해 getline(cin,bufferflush)를 해준다.
 
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

//출력 

//#include<bits/stdc++.h> 
//using namespace std;
//string a = "도랄팍 화이팅!";
//string b = "톤포우 너무 좋아요.";
//
//int main() {
//	cout << a << '\n';
//	cout << a << " " << " "<<b<<'\n';
//	return 0;
//}

//cout은 기본적으로 실수를 출력하면 일부만 출력한다.

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

//printf : 지정된형식에서 인자받아서 출력시 이용 

#include<bits/stdc++.h>
using namespace std;
int a = 1, b = 2;
int main() {
	printf("홍철 %d : 지수 %d\n", a,b);
	return 0;
}



















