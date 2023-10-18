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


//////////////////////////////////////////////////////////////////////////////////

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

//===============================================================================================

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

//////////////////////////////////////////////////////////////////////////////////

//getline : 띄어쓰기 문자 한꺼번에 받
//#include<bits/stdc++.h> 
//using namespace std;
//string s;
//int main() {
//	getline(cin, s);
//	cout << s << '\n';
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////

//printf : 지정된형식에서 인자받아서 출력시 이용 

//#include<bits/stdc++.h>
//using namespace std;
//int a = 1, b = 2;
//int main() {
//	printf("홍철 %d : 지수 %d\n", a,b);
//	return 0;
//}


// 
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//double a = 1.23456789;
//int b = 12;
//int c = 2;
//int main () {
//	printf("%.6lf\n", a); //소수점 6자리까지 출력 
//	printf("%04d\n", b);// 자리수 4자리 출력. 없는앞자리는 0으로 대체 
//	printf("%02d\n", c);
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////

//printf이용한  string출력 
//#include<bits/stdc++.h> 
//using namespace std;
//int a = 1;
//char s = 'a';
//string str = "톤벤져스";
//double b = 1.223123;
//
//int main() {
//	printf("아이엠어 아이언맨 : %d\n", a);
//	printf("아이엠어 톤이언맨 : %s\n", str.c_str());
//	return 0;
//} 

//
//#include<bits/stdc++.h> 
//using namespace std;
//
//double a() {
//	return 1.2333;
//}
//
//int main() {
//	double ret = a();
//	
//	cout << ret << '\n';
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////
//한글은 한글자당 3바이트이므로 아래와같이 출력시 정상적 출력이 안됨. 영어는 정상적으로 출력 확인 
//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	string a = "나는야";
//	cout <<a[0] << "\n" ;
//	cout <<a[0]<<a[1]<<a[2]<<"\n";
//	cout << a << "\n";
//	string b = "abx";
//	cout <<b[0] << "\n";
//	cout << b << "\n";
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////
//#include<bits/stdc++.h> 
//using namespace std;
//int main () {
//	string a = "love is";
//	a += " pain!";
//	a.pop_back();//문자열 끝을  빼기 
//	cout<<a<<" : "<<a.size()<<"\n";
//	cout<<char(* a.begin())<<'\n';
//	cout<<char(*(a.end()-2))<<'\n';
//	//string & insert (size_t pos, const string$ str);
//	a.insert(0,"test ");
//	cout << a << " : " << a.size() << "\n";
//	//string & erase (size_t pos = 0, size_t len = npos);
//	a.erase(0,5);
//	cout << a << " : " << a.size() << "\n";
//	//size_t find(const string& str, size_t pos = 0);
// find():특정문자열을 찾아 위치를 반환.못찾을경우 string::npos를 반환 .0부터샌다 
//	auto it = a.find("love");
//	if(it != string::npos) {
//		cout << "포함되어 있다." << '\n';
//	}
//	
//	cout << it << '\n';
//	cout << string::npos << '\n';
//	//string substr (size_t pos = 0, size_t len = npos) const;
//	cout << a.substr(5,2) << '\n';
//	
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////
//아스키코드와 문자열(A:65, a:97)
//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	string s = "123";
//	s[0]++;// ascii 1->49. 49+1=50 ->2
//	cout<<s<<"\n"; //223
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(false);cin.tie(NULL);
//	cout.tie(NULL);
//	char a = 'a';
//	cout<<(int)a<<'\n';//97
//	
//	return 0;
//	
//}

//////////////////////////////////////////////////////////////////////////////////
//reverse() string은 지원x. STL에서 지원한다함.
//void타입으로 아무것도 반환하지않는다. 원본문자열을 바꾼다. 

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	string a = "It's hard to have a sore leg";
//	reverse(a.begin(), a.end());
//	cout << a << '\n';
//	reverse(a.begin(), a.end());
//	cout << a << '\n';
//	reverse(a.begin()+3, a.end());
//	cout << a << '\n';
//	
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////
//split() : 문자열을 특정문자열을 기준으로 쪼개어서 배열화시키는 함수 


//#include<bits/stdc++.h> 
//using namespace std;
//
//vector<string> split(string input, string delimiter) {
//	vector<string> ret;
//	long long pos = 0;
//	string token = "";
//	
//	while((pos = input.find(delimiter)) != string::npos) {
//		token = input.substr(0,pos);
//		ret.push_back(token);
//		input.erase(0, pos + delimiter.length());
//	}
//	
//	ret.push_back(input);
//	return ret;
//}
//
//int main() {
//	string s = "안녕하세요 큰돌이는 킹갓제네럴 천재입니다 정말이에요!", d=" ";
//	vector<string> a = split(s,d);
//	for(string b:a) cout << b << "\n";
//}
//
//while((pos=input.find(delimeter)) != string::npos) {
//	token = input.substr(0,pos);//구분자기준 앞 문자열 추출 
//	ret.push_back(token);//배열에 담기. 
//	input.erase(0,pos+delimeter.length());// 배열에담은문자열 삭제후 나머지문자열 만 남기기 
//}
//}

//////////////////////////////////////////////////////////////////////////////////
//atoi(s.c_str())
//문자열,string으로 입력을 받아 입력받은 글자가  문자열인지 숫자인지 확인 
//입력받은문자열이 문자라면 : 0
//아니라면 숫자 반환 

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	string s = "2";
//	string s2 = "amumu";
//	cout << atoi(s.c_str()) << '\n';
//	cout << atoi(s2.c_str()) << '\n';
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////
//bool. 0이면 false 아닌값들은 모두 true

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int a = -1;
//	cout << bool(a) << "\n";//1 true
//	a=0;
//	cout << bool(a) << "\n";//0 false
//	a=3;
//	cout << bool(a) << "\n";//1 true
//}

//////////////////////////////////////////////////////////////////////////////////
//pair, tuple
//pair는 first,second라는 맴버변수를 가지는 클래스 
//tie()=pair/tuple 사용하여 간편하게 이용가능  

//#include<bits/stdc++.h>
//using namespace std;
//pair<int, int>pi;
//tuple<int,int,int>tl;
//int a,b,c;
//int main() {
//	pi = {1,2};
//	tl = make_tuple(1,2,3);
//	tie(a,b) = pi;
//	cout << a << " : " << b << "\n";
//	tie(a,b,c) = tl;
//	cout << a << " : " << b << " : " << c << "\n";
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//pair<int, int> pi;
//tuple<int,int,int> tl;
//int a,b,c;
//int main() {
//	pi = make_pair(1,2);
//	a = pi.first;
//	b = pi.second;
//	cout << a << " : " << b << "\n";
//	tl = make_tuple(1,2,3);
//	a = get<0>(tl);
//	b = get<1>(tl);
//	c = get<2>(tl);
//	cout << a << " : " << b << " : " << c << "\n";
//	return 0;
//}

//=============================================================================================

//auto : 타입추론을 하여 결정되는 타입.
//pair<int,int>를 사용하지 않고 auto로 사용해도 같은 결과 출력 확인 

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	vector<pair<int,int>> v;
//	for(int i=1; i <=5; i++) {
//		v.push_back({i, i});
//	}
//	for(auto it : v) {
//		cout << it.first << " : " << it.second << '\n';
//	}
//	for(pair<int,int> it : v) {
//		cout << it.first << " : " << it.second << '\n';
//	}
//}

//=============================================================================================

//double형을 int형으로 만들기
//같은타입끼리 연산작업하여 실수하는일 없도록 방지..
 
//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	double ret = 2.12345;
//	int n = 2;
//	int a = (int)round(ret / double(n));
//	cout << a << "\n";
//	return 0;
//}

//타입변환시 주의

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	double p = 2.23;
//	
//	int a = (int) p*100 ; //O
//	int b = (int) 100*p;  // X
//	cout << a<< '\n' << b;
//}

//=============================================================================================

//문자를숫자로, 숫자를문자로 

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	char a = 'a';
//	cout << (int)a << '\n';
//	cout << (int)a - 97 <<'\n';
//	cout << (int)a - 'a' << '\n';
//}

//=============================================================================================

//메모리

//#include<bits/stdc++.h> 
//using namespace std;
//int i;
//
//int main() {
//	cout << &i << '\n';
//	i=1;
//	cout << &i << '\n';
//	return 0;
//}

//포인터 : 변수의 메모리 주소를 담는 타입을 포인터라한다. 
// <타입>*<변수명> = <해당타입의 변수의 주소>  

//=============================================================================================


//역참조 연산자

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	string a = "abcda";
//	string * b = &a;
//	cout << b << "\n";//주소값출력 
//	cout << *b << "\n";//abcda 출력 
//	return 0;
//}

//=============================================================================================

//Array To Decay : 정적배열만가능 vector는 X 

//#include<bits/stdc++.h>
//using namespace std;
//int a[3] = {1,2,3};
//int main() {
//	int *c = a;//a의첫번째를 바인딩 
//	cout << *c << '\n';
//	cout << c << '\n';
//	cout << &a[0] << "\n";
//	cout << c + 1 << "\n";
//	cout << &a[1] << "\n";
//	return 0;
//}

//=============================================================================================


//정적할당:컴파일단계에서 메모리를 할당>BSS segment,Data segment  , code/text segment
//BSS:전역변수,static,const로 선언되어있는변수중 0or어떠한값 으로도 초기화가 되어잇지않은 변수들 
//Data segment:전역변수, static, const로 선언되어있는 변수 중 0이 아닌 값으로 초기화된 변수가 이 메모리 영역에 할당
//code / text segment는 프로그램의 코드가 들어갑니다. 

//#include<bits/stdc++.h> 
//using namespace std;
//int a;
//int b = 0;
//const int c = 0;
//int main() {
//	static int d;
//	static int e = 0;
//	return 0;
//}


//동적할당 런타입단계에서 메모리를 할당받는것. > stack,heap 

//=============================================================================================

//이터레이터 컨테이너에 저장되어 있는 요소의 주소를 가리키는 개체.포인터를 일반화한 것
 
//#include<bits/stdc++.h>
//using namespace std;
//
//vector<int> v;
//
//int main() {
//	for(int i=1; i<=5; i++)v.push_back(i);//1,2,3,4,5 입력 
//	for(int i = 0; i<5; i++) {
//		cout << i << "번째 요소: " << *(v.begin() + i) << "\n";//begin()컨테이너시작위치 반환  
//		cout << &*(v.begin() + i) << '\n';
//	}
//	for(auto it = v.begin(); it != v.end(); it++) {
//		cout << *it << ' ';
//	}
//	cout << '\n';
//	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << ' ';
//	}
//	auto it = v.begin();
//	advance(it, 3);//advance(iterator,cnt)해당iterator를 cnt까지 증가 
//	cout << '\n';
//	cout << *it << '\n';
//	
//} 

//=============================================================================================


//fill(), memset()
//배열초기화시 사용.
//fill(): 0,1,100등 모든 값으로 초기화 가능.[first,last)까지 val로 초기화
//memset(): -1,0으로만 초기화 가능  
//[은 포함하다라는 수학적기호, )은 포함하지 않는다는 기호입니다. 즉, 시작값은 포함하고, 
//끝값은 포함하지 않고 초기화한다는 의미입니다.


//#include<bits/stdc++.h> 
//using namespace std;
//int a[10];
//int b[10][10];//[횡][종] 
//int main() {
//	fill(&a[0], &a[10], 100);//a[10]으로 지정해야 a[9]까지 초기화한다. 
//	
//	for(int i=0; i<10; i++) {
//		cout << a[i] << " ";
//	}
//	cout << '\n';
//	fill(&b[0][0], &b[9][10], 2);
//	for(int i=0; i<10; i++) {
//		for(int j=0; j<10; j++) {
//			cout << b[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return 0;
//}

//배열이름으로도 초기화 가능 
//1차원의 경우 a, a + 10, 즉, 배열의 이름 + 숫자로 가능하지만 2차원 이상일 경우에는
//반드시 &b[0][0] + 숫자로 해야 한다는 것을 기억해주세요.

//#include <bits/stdc++.h>
//using namespace std;
//int a[10];
//int b[10][10];
//int main() {
//	fill(a, a+10, 100);
//	
//	for (int i=0; i<10; i++) {
//		cout << a[i] << " ";
//	}
//	cout << '\n';
//	fill(&b[0][0], &b[0][0]+10*10, 2);
//	for(int i=0; i<10; i++) {
//		for(int j=0; j<10; j++) {
//			cout <<b[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return 0;
//} 
//

//fill()로 전체초기화를 해야하는 이유
//#include<bits/stdc++.h>
//using namespace std;
//int a[10][10];
//int main() {
//	cin.tie(NULL); cout.tie(NULL);//입,출력 속도를 높이기위해쓴다. 단순히 최적화하는 구문X.구글통해 검색및 정리 
//	fill(&a[0][0], &a[0][0]+8*8, 4);
//	for(int i=0; i<10; i++) {
//		for(int j=0; j<10; j++) {
//			cout << a[i][j] << " ";
//		}
//		cout << '\n';
//	}
//	return 0;
//} 
/*
4 4 4 4 4 4 4 4 4 4
4 4 4 4 4 4 4 4 4 4
4 4 4 4 4 4 4 4 4 4
4 4 4 4 4 4 4 4 4 4
4 4 4 4 4 4 4 4 4 4
4 4 4 4 4 4 4 4 4 4
4 4 4 4 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
*/
//초기화시  위와같이 결과가나옴. 전체초기화를 하는게 좋다. 

//memset() 
//void * memset(void *ptr, int value, size_t num);



//=============================================================================================

//쓰지 말아야할 초기화 방법
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int cnt = 0;
//	int a[5] = {0, };
//	while(++cnt !=10) {
//		for(int i=0; i<5; i++) {
//		a[i]=i;//a[0]=0,a[1]=1...a[4]=4
//		cout << a[i] << '\n';
//		}
//		a[5]={0, };
//		for(int i : a) cout << i << ' ';//0 1 2 3 4 출력됨. 초기화 안되는것 확인. 
//		
//	}
//	return 0;
//}

//=================================================================================================
//memcpy(), copy() ->어떤 변수를 깊은 복사할때 사용.
//memcpy(): Array끼리 복사할때 사용.memcpy()는 vector에서는 깊은복사 안됨. void * memcpy(void * destination, const void *resuource, size_t num);
//copy(): Array, vector에 모두 쓰임 

// [참고] 얕은 복사와 깊은 복사
//참고로 얕은 복사(Shallow copy)는 메모리 주소값을 복사한 것이라 복사한 배열을 수정하면 원본 배열이
//수정되는 복사방법이며 깊은 복사(Deep copy)는 새로운 메모리 공간을 확보해 완전히 복사해 복사한 배열을
//수정하면 원본 배열은 수정되는 않는 복사방법을 의미합니다.

//#include <bits/stdc++.h>
//using namespace std;
//int main(void) {
//	int v[3] = {1,2,3};
//	int ret[3];
//	memcpy(ret, v, sizeof(v));
//	cout << ret[1] << "\n";
//	ret[1]=100;
//	cout << ret[1] << "\n";
//	cout << v[1] << "\n";//2 깊은복사로 원본값은 변하지않음을 확인. 
//	return 0;
//} 

//memcpy()는 vector에서 깊은복사 안됨
 
//#include<bits/stdc++.h>
//using namespace std;
//int main(void) {
//	vector<int> v {1,2,3};
//	vector<int> ret(3);
//	memcpy( &ret, &v, 3*sizeof(int));
//	
//	cout << ret[1] << "\n";
//	ret[1] = 100;
//	cout << ret[1] << "\n";
//	cout << v[1] << "\n";
//	return 0;
//	
//}

//=================================================================================================

//copy()
//copy(InputIterator first, InputIterator last, OutputIterator result)
//복사하는 vector와 복사당하는 vector의 크기를 맞춰주는 것이 중요. v의 크기는 3이며, 
//ret의 크기도 3으로 설정. 그리고 깊은 복사가 되어 ret을 수정하더라도 v에는 영향 없음. 


//vector
//#include<bits/stdc++.h>
//using namespace std;
//int main(void) {
//	vector<int> v {1,2,3};
//	vector<int> ret(3);
//	copy(v.begin(), v.end(), ret.begin());
//	cout << ret[1] << "\n";
//	ret[1] = 100;
//	cout << ret[1] << "\n";
//	cout << v[1] << "\n";
//	return 0;
//}

//Array
//Array v의 크기가 5라면 copy(v, v + 5, ret) . +숫자는 해당 배열의 크기.

//#include<bits/stdc++.h>
//using namespace std;
//int n=3;
//int main(void) {
//	int v[n] = {1,2,3};
//	int ret[n];
//	copy(v, v+n, ret);
//	cout << ret[1] << "\n";
//	ret[1] = 100;
//	cout << ret[1] << "\n";
//	cout << v[1] << "\n";
//	return 0;
//}


//=================================================================================================

//sort() 배열등 컨테이너들의 요소를 정렬하는 함수.array,vector정렬할때 쓰임.
//sort(first,last,*커스텀비교함수) [first,last)
//ex: 크기가5인a라는 배열전체를 정렬시-> sort(a, a+5). 
//sort에는 주소값이 들어가야되기때문에 a[0]이 아닌 a가 들어감.  last에는 배열의 마지막요소가아닌 그 "다음"위치를 넣어준다. 

//
//#include<bits/stdc++.h> 
//using namespace std;
//vector<int> a;
//int b[5];
//int main() {
//	for(int i=5; i>=1; i--) b[i-1] = i;
//	for(int i=5; i>=1; i--) a.push_back(i);//push_back은 vector의 끝에 요소를 추가할때 사용하는 함수
//	//오름차순
//	sort(b, b+5);
//	sort(a.begin(), a.end());
//	for(int i:b) cout << i << ' ';
//	cout << '\n';
//	for(int i:a)  cout << i << ' ';
//	cout << '\n';
//	
//	
//	sort(b, b+5, less<int>());
//	sort(a.begin(), a.end(), less<int>());
//	for(int i:b) cout << i << ' ';
//	cout << '\n';
//	for(int i:a) cout << i << ' ';
//	cout << '\n';
//	
//	//내림차순
//	sort(b, b+5, greater<int>());
//	sort(a.begin(), a.end(), greater<int>());
//	for(int i:b) cout << i << ' ' ;
//	cout << '\n';
//	for(int i:a) cout << i << ' ';
//	cout << '\n';
//	
//	return 0;
//}

//pair
//#include<bits/stdc++.h>
//using namespace std;
//vector<pair<int, int>> v;
//int main() {
//	for(int i=10; i>=1; i--) {
//		v.push_back({i, 10-i});
//	}
//	sort(v.begin(), v.end());
//	for(auto it:v) cout << it.first << " : " << it.second << "\n";
//	
//	return 0;
//}

//first는 내림차순, second는 오름차순
//#include<bits/stdc++.h> 
//using namespace std;
//vector<pair<int, int>> v;
//bool cmp(pair<int,int>a, pair<int, int> b) {
//	return a.first > b.first;
//}
//
//int main() {
//	for(int i=10; i>=1; i--) {
//		v.push_back({i, 10-i});
//	}
//	cout << v.size() << '\n';
//	sort(v.begin(), v.end(), cmp);
//	for(auto it:v) cout << it.first << " : " << it.second << "\n";
//	
//	return 0;
//}

//=================================================================================================

//unique() : 범위안의 있는 요소중 앞에서부터 서로를 비교해가며 중복되는 요소를 제거.나머지 요소들은 삭제하지않고 그대로 두는 함수.
//#include<bits/stdc++.h>
//using namespace std;
//vector<int> v;
//int main() {
//	for(int i=1; i<=5; i++) {
//		v.push_back(i);
//		v.push_back(i);
//	}
//	for(int i:v) cout << i << " ";
//	cout << '\n';
//	//중복되지 않은 욘소로 채운 후, 그 다음 이터레이터를 반환. 
//	auto it = unique(v.begin(), v.end());
//	cout << it - v.begin() << '\n';
//	//앞에서부터 중복되지않게 채운후 나머지 요소들은 그대로 둔다.
//	for(int i:v) cout << i << " " ;
//	cout << '\n';
//	return 0;
//} 

//unique()는 11,22,33...비교해서 쓰기때문에 sort()와 같이 써야된다. 
//unique(index,index)를 실행하면 중복 제거한뒤 "다음 원소의 위치"를 반환. 그러므로 erase(unique(..),s.end())사용시 필요없는값만 삭제가능 

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	vector<int> s {4,3,3,5,1,2,3};
//	
//	s.erase(unique(s.begin(), s.end()), s.end());
//	for(int i:s) cout << i << " ";
//	cout << '\n';
//	
//	vector<int> s2 {4,3,3,5,1,2,3} ;
//	sort(s2.begin(), s2.end());
//	s2.erase(unique(s2.begin(), s2.end()), s2.end());
//	for(int i:s2) cout << i << " ";
//	return 0;
//}
 
 
//================================================================================================= 
 
//lower_bound(), upper_bound()
//정렬된 배열에서만 사용해야됨

//lower_bound()는 이터레이터를 반환. 몇번째인지 알려면 - begin()을 해준다. 
//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//int main() {
//	vector<int> a {1,2,3,3,3,4};
//	cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n";//3이 시작되는 최소시작점 
//	cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n";//3을 초과후 최초지점 
//	return 0;
//}
  
//주소값끼리 -하게되면 해당 주소값에서 몇번째에 이 요소가 들어있는지 반환. 
//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//int main() {
//	vector<int> a {1,2,3,3,3,4};
//	cout << &*lower_bound(a.begin(), a.end(), 3) << "\n";
//	cout << &*a.begin() << "\n";
//	cout << &*(a.begin() + 1) << "\n";
//	cout << &*lower_bound(a.begin(), a.end(), 3) - &*a.begin() << "\n";
//	
//	return 0;
//}
 
//lower_bound가 가리키는 요소 출력. 
//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//vector<int>a {1,2,3,3,4,100};
//int main() {
//	cout << *lower_bound(a.begin(), a.end(), 100) << "\n"; //100(*의기능중 역참조). &는 주소반환 
//	
//	return 0;
//}
 
//숫자3이 몇개들어가있는지 확인가능
//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//vector<int> a {1,2,3,5,3,3,3,4, 100};
//int main() {
//	cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << "\n";
//	
//	sort(a.begin(), a.end());
//	for(int i : a) cout <<i << " ";
//	cout << "\n";
//	cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << "\n";
//	
//	return 0;
//}
// 

//찾는값이 없을경우  
//#include<bits/stdc++.h> 
//using namespace std;
//vector<int> v;
//int main() {
//	for(int i=2; i<=5; i++) v.push_back(i);
//	v.push_back(7);
//	//2,3,4,5,7
//	
//	cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
//	// 2 3 4 5 7
//	// 0 1 2 3 4 에서 근방지점인 4번째 (7보다 6이 더 작으므로)
//
//	cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
//	
//	cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
//	
//	cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
//	
//	cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
//	
//	cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
//}
 
//=================================================================================================

//accumulate() : 배열의합 구하기 

//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
//	int sum = accumulate(v.begin(), v.end(), 0);
//	cout << sum << '\n';
//}


//max_element() : 배열중 가장 큰 요소를 추출.이터레이터를 반환. *통해 값조회 가능. 

//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
//	int a = *max_element(v.begin(), v.end());
//	auto b = max_element(v.begin(), v.end());
//	cout << a << '\n';
//	cout << (int)(b - v.begin()) << '\n';
//}


//min_element() : 배열중 가장작은요소를 추출. 이터레이터를 반환. 

//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
//	int a = *min_element(v.begin(), v.end());
//	auto b = min_element(v.begin(), v.end());
//	cout << a << '\n';
//	cout << (int)(b-v.begin()) << '\n';
//}

//=================================================================================================

//자료구조. : 데이터들과의 관계, 함수, 명령 등의 집합을 의미.데이터에 대해 효율적으로 접근,수정등 처리를 효율적으로 할수있게 만든 구조 
//선형자료구조 : Array, Stack, Queue, Linked_list
//비선형 : Graph, Tree 

//vector<타입>변수명;
//#include<bits/stdc++.h> 
//using namespace std;
//vector<int> v;
//int main() {
//	for(int i=1; i<=10; i++) v.push_back(i);
//	for(int a:v) cout << a << " ";
//	cout << "\n";
//	v.pop_back();
//	
//	for(int a:v) cout << a << " ";
//	cout << "\n";
//	
//	v.erase(v.begin(), v.begin()+3);
//	
//	for(int a: v) cout << a << " ";
//	cout << "\n";
//	
//	auto a = find(v.begin(), v.end(), 100);
//	if(a==v.end()) cout << "not found" << "\n";
//	
//	fill(v.begin(), v.end(), 10);
//	for(int a:v) cout << a << " ";
//	cout << "\n";
//	v.clear();
//	cout << "아무것도없을까?\n";
//	for(int a:v) cout << a << " ";
//	cout << "\n";
//	return 0;
//}

//vector pair
//#include<bits/stdc++.h>
//using namespace std;
//vector<int> v {1,2,3,};
//int main () {
//	for(int a:v) cout << a << " ";
//	cout << "\n";
//	for(int i=0; i<v.size(); i++) cout << v[i] << ' ';
//	cout << "\n";
//	vector<pair<int,int>> v2 = {{1,2}, {3,4}};
//	for(pair<int,int> a : v2) cout << a.first <<  " ";
//}


//vector 정적할당.

//#include<bits/stdc++.h> 
//using namespace std;
//vector<int> v(5,100);
//int main() {
//	for(int a : v) cout << a << " ";
//	cout << "\n";
//	return 0;
//}


//Array : 정적배열.

//#include<bits/stdc++.h> 
//using namespace std;
//int a[3] = {1,2,3};
//int a2[] = {1,2,3,4};
//int a3[10];
//int main() {
//	for(int i=0; i<3; i++) cout << a[i] << " ";
//	cout << "\n";
//	for(int i:a) cout << i << " ";
//	
//	for(int i=0; i<4; i++) cout << a2[i] << " ";
//	cout << "\n";
//	for(int i:a2) cout << i << " ";
//	
//	for(int i=0; i<10; i++) a3[i]=i;
//	cout <<"\n";
//	for(int i:a3) cout << i << " ";
//	return 0;
//}

//2차원배열, 탐색 팁
//#include<bits/stdc++.h> 
//using namespace std;
//const int mxy = 3;
//const int mxx = 4;
//
//int a[mxy][mxx];//a[3][4]
//int main() {
//	for(int i=0; i<mxy; i++) {
//		for(int j=0; j<mxx; j++) {
//			a[i][j]=(i+j);
//		}
//	}
//	//good
//	for(int i=0; i<mxy; i++) {
//		for(int j=0; j<mxx; j++) {
//			cout << a[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << '\n';
//	//bad
//	for(int i=0; i<mxx; i++) {
//		for(int j=0; j<mxy; j++) {
//			cout << a[j][i] << ' ';h
//		}
//		cout << '\n';
//	}
//	return 0;
//}

//list 연결리스트.선형자료구조 
//이중연결리스트
//원형연결리스트 
 
//#include<bits/stdc++.h> 
//using namespace std;
//list<int> a;
//
//void print(list <int> a) {
//	for(auto it:a) cout << it << " ";
//	cout << '\n';
//}
//
//int main() {
//	for(int i=1; i<=3; i++) a.push_back(i);
//	for(int i=1; i<=3; i++) a.push_front(i);
//	
//	auto it = a.begin(); it++;
//	a.insert(it, 1000);
//	print(a);
//	
//	it = a.begin(); it++;
//	a.erase(it);
//	print(a);
//	
//	a.pop_front();
//	a.pop_back();
//	print(a); 
//	
//	cout << a.front() << " " << a.back() << '\n';
//	a.clear();
//	return 0;
//}

//랜덤접근 : vector, Array
//순차적접근 : 연결리스트, 스택, 큐

//array, LinkedList
//배열은 연속된 메모리 공간에 데이터를 저장하고 연결리스트는 연속되지 않은 메모리 공간에 데이터를
//저장합니다.
//또한, 배열은 삽입과 삭제에는 O(n)이 걸리고 참조에는 O(1)이 걸립니다. 연결리스트는 삽입과 삭제에 O(1)이
//걸리고 참조에는 O(n)이 걸립니다.
//따라서 데이터추가와 삭제를 많이 하는 것은 연결 리스트, 참조를 많이 하는 것은 배열로 하는 것이 좋습니다.
 

//=================================================================================================
//map
//map은 고유한 키를 기반으로 키 - 값(key - value) 쌍으로 이루어져 있는 정렬된(삽입할때마다 자동 정렬된) 연관 컨테이너

//#include<bits/stdc++.h>
//using namespace std;
//map<string, int> mp;
//string a[] = {"주홍철","야영주", "박종선"};
//
//int main() {
//	for(int i=0; i<3; i++) {
//		mp.insert({a[i], i+1});
//		mp[a[i]] = i+1;//mp["주홍철"] = 1 
//	}
//	for(auto it : mp) {
//		cout << (it).first << " : " << (it).second << "\n";
//	}
//	cout << mp["kundol"] << '\n';
//	mp["kundol"] = 4;
//	cout << mp.size() << '\n';
//	mp.erase("kundol");
//	auto it = mp.find("kundol") ;//해당값의 위치를 반환. 못찾을시 map의end()이터레이터를 반환. 
//	if(it==mp.end()) {
//		cout << "못찾겠다.\n";
//	}
//	
//	mp["kundol"]=100;
//	
//	it = mp.find("kundol");
//	if(it !=mp.end()) {
//		cout << (*it).first<< " : " << (*it).second << "\n";//it를 값참조후 key 출력 : 값참조후value출력 
//	}
//	cout << '\n';
//	for(auto it : mp) {
//		cout << (it).first << " : " << (it).second << "\n";//map 을참조.결과값이 인덱스내림차순인듯..  
//	}
//	
//	for(auto it = mp.begin(); it != mp.end(); it++) {
//		cout << (*it).first << " : " << (*it).second << '\n';
//	}
//	mp.clear();
//	
//	return 0;
//} 


//map에 해당 키에 해당하는 요소가 없다면 0 또는 빈문자열로 초기화

//#include<bits/stdc++.h>
//using namespace std;
//map<int, int> mp;
//map<string, string> mp2;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cout << mp[1] << '\n';//0
//	cout << mp2["aaa"] << '\n';// 빈문자열 
//	for(auto i : mp) cout << i.first << " " << i.second;
//	cout << '\n';
//	for(auto i : mp2) cout << i.first << " " << i.second;
//	
//	return 0;
//}

//0이 들어가있느지 확인후 값 할당 
//#include<bits/stdc++.h> 
//using namespace std;
//map<int, int> mp;
//map<string, string> mp2;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	if(mp[1] == 0) { //mp[1]참조시 0을 할당하므로 true 
//		mp[1] = 2;
//	}
//	for(auto i : mp) cout << i.first << " " << i.second;
//	
//	return 0;
//}

//0이 들어가는 것을 비교하기 귀찮다면.. 
//#include <bits/stdc++.h>
//using namespace std;
//map<int,int> mp;
//map<string, string> mp2;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	if(mp.find(1) == mp.end()) {
//		mp[1] = 2;
//	}
//	for(auto i : mp) cout << i.first << " " << i.second;
//	
//	return 0;
//}


//=================================================================================================

//set : 고유한 요소만을 저장하는 컨테이너. 중복허용x 

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	set<pair<string, int>> st;
//	st.insert({"test", 1});
//	st.insert({"test", 1});
//	st.insert({"test", 1});
//	st.insert({"test", 1});
//	cout << st.size() << '\n';
//	
//	set<int> st2;
//	st2.insert(2);
//	st2.insert(1);
//	st2.insert(2);
//	for (auto it : st2) {
//		cout << it << '\n';
//	}
//	return 0;
//}

//unique()와 set 어떤걸 사용해서 중복을 제거할까? https://perfbench.com/
//로직에 따라 다르겠지만 unique()가 더빠른듯...

//#include<bits/stdc++.h> 
//using namespace std;
//void A() {
//	vector<int> v;
//	int n = 1e5;//1곱하기 10의5승 = 1000 
//	for(int i=1; i<n; i++) {
//		v.push_back(i);
//		v.push_back(n-i);
//	}
//	sort(v.begin(), v.end());
//	v.erase(unique(v.begin(), v.end()), v.end());
//} 
//
//void B() {
//	vector<int> v;
//	int n = 1e5;
//	for(int i=1; i<n; i++) {
//		v.push_back(i);
//		v.push_back(n-i);
//	}
//	set<int> st;
//	for(int i: v) {
//		st.insert(i);
//	}
//	vector<int> nv;
//	for(int i : st) {
//		nv.push_back(i);
//	}
//} 
//
//void test_latency(size_t iteration) {
//	
//	PROFILE_START("A");
//	A();
//	POFILE_STOP("A");
//	PROFILE_START("B");
//	B();
//	PROFILE_STOP("B");
//}
//
//int main() {
//	//size_t : 4byte . 0 ~ 4,292,967,295
//	const size_t warmups = 1000;
//	const size_t tests = 100;
//	
//	PROFILE_RUN_ALL(warmups, tests, test_latency(__loop));
//	
//	return 0;
//}


//=================================================================================================

//stack 스택은 가장 마지막으로 들어간 데이터가 가장 첫 번째로 나오는 성질
//한, “교차하지 않고” 라는 문장이 나오면 스택을 사용해야 하는 것은 아닐까? 염두

 
//#include<bits/stdc++.h> 
//using namespace std;
//stack<string> stk;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	stk.push("엄");
//	stk.push("준");
//	stk.push("식");
//	stk.push("화");
//	stk.push("이");
//	stk.push("팅");
//	while(stk.size()) {
//		cout << stk.top() << "\n";
//		stk.pop();
//	}
//}


//queue : 먼저넣은데이터가 먼저나옴.stack과 반대 

//#include<bits/stdc++.h> 
//using namespace std;
//queue<int> q;
//int main() {
//	for(int i=1; i<=10; i++)q.push(i);
//	while(q.size()) {
//		cout << q.front() << ' ';
//		q.pop();
//	}
//	return 0;
//}

//deque

//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	deque<int> dq;
//	dq.push_front(1);
//	dq.push_back(2);
//	dq.push_back(3);
//	cout << dq.front() << "\n";
//	cout << dq.back() << "\n";
//	cout << dq.size() << "\n";
//	dq.pop_back();
//	dq.pop_front();
//	cout << dq.size() << "\n";
//	return 0;
//}

//=================================================================================================

//struct 커스텀한 자료구조 

//#include<bits/stdc++.h> 
//using namespace std;
//struct Ralo {
//	int a, b;
//	double c,d,e;
//};
//void print(Ralo ralo) {
//	cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << '\n';
//}
//
//int main() {
//	Ralo ralo = {1,1,1,1,1};
//	print(ralo);
//	vector<Ralo> ret;
//	ret.push_back({1,2,3,4,5});
//	ret.push_back({1,2,3,4,6});
//	ret.push_back({});
//	ret.push_back({1,3});
//	for(Ralo ralo : ret) {
//		print(ralo);
//	}
//	return 0;
//}

//point구조체
//struct Point{
//int y, x;
//Point(int y, int x) : y(y), x(x){}
//Point(){y = -1; x = -1; }
//bool operator < (const Point & a) const{
//if(x == a.x) return y < a.y;
//return x < a.x;
//}
//}; 


//string으로 이루어진 배열을 정렬
//sort()를 통해 1차비교>compare()를 통해 2차비교
 
//#include <bits/stdc++.h> 
//using namespace std;
//bool compare(string a, string b) {
//	cout << "a : " << a << '\n';
//	cout << "b : " << b << '\n';
//	if(a.size() == b.size()) return a < b;
//	
//	return a.size() < b.size();
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	string a[3] = {"222","111","33"};
//	sort(a, a+3, compare);
//	cout << a[0] << " : " << a[0].size() << '\n';
//	cout << a[1] << " : " << a[1].size() << '\n';
//	cout << a[2] << " : " << a[2].size() << '\n';
//	for(string b: a) cout << b << " ";
//	return 0;
//}

//
//#include <bits/stdc++.h>
//using namespace std;
//struct Ralo {
//	int a, b;
//};
//
//bool compare(Ralo A, Ralo B) {
//	if(A.a == B.a) return A.b < B.b;
//	return A.a <B.a;
//}
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0);
//	Ralo a[3] = {{1,3}, {1,2}, {0,4}};
//	for(Ralo A : a) cout << A.a << " : " << A.b << "\n";
//	cout << "\n";
//	sort(a, a+3, compare);
//	for(Ralo A : a) cout << A.a << " : " << A.b << "\n";
//	
//	return 0;
//}


//3개의 멤버변수 정렬
//1순위 x오름차순.2순위 y내림차순.3순위 z오름차순
 
//struct Poing {
//	int y, x, z;
//	Point() {y = -1; x = -1; z = -1;
//	}
//	bool operator < (const Point & a) const {
//		if(x==a.x) {
//			if (y ==a.y) return z < a.z;
//			return y > a.y;
//		}
//		return x <a.x;
//	}
//}; 

//vector에다 struct넣고 정렬

//#include <bits/stdc++.h> 
//using namespace std;
//struct Point {
//	int y, x;
//};
//bool cmp(const Point & a ,const Point & b) {
//	return a.x > b.x;
//}
//vector<Point> v;
//int main () {
//	for(int i=10; i>=1; i--) {
//		v.push_back({i, 10-i});
//	}
//	sort(v.begin(), v.end(), cmp);
//	for(auto it:v) cout << it.y << " : " << it.x << "\n";
//		return 0;
//}

//=================================================================================================

//priority queue 우선순위 큐
//각 요소에 어떠한 우선순위가 추가로 부여되어있는 컨테이너 
 
//int형 우선순위큐. 기본값은 내림차순 priority_queue<타입> 
//greater<타입>:오름차순, less<타입>:내림차순. 

//#include <bits/stdc++.h>
//using namespace std;
//priority_queue<int, vector<int>, greater<int> > pq;//오름차순
//priority_queue<int> pq2; //내림차순
//priority_queue<int, vector<int>, less<int> > pq3;//내림차순
//
//int main() {
//	for(int i=5; i>=1; i--) {
//		pq.push(i); pq2.push(i); pq3.push(i);
//	}
//	while(pq.size()) {
//		cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << '\n';
//		pq.pop(); pq2.pop(); pq3.pop();
//	}
//	return 0;
//} 

//구조체를 담은 우선순위 큐
//#include <bits/stdc++.h> 
//using namespace std;
//struct Point {
//	int y, x;
//	Point(int y, int x) : y(y), x(x) {}
//	Point() {y=-1; x=-1;}
//	bool operator < (const Point & a) const {
//	return x > a.x;
//	}
//};
//
//priority_queue<Point> pq;
//int main() {
//	pq.push({1, 1});
//	pq.push({2, 2});
//	pq.push({3, 3});
//	pq.push({4, 4});
//	pq.push({5, 5});
//	pq.push({6, 6});
//	cout << pq.top().x << "\n";
//	return 0;
//}
/*
1
*///내림차순정렬후 맨위를 확인시 6이여야하나 1이 나옴 
//우선순위큐에 커스텀 정렬을 넣을 때 반대로 넣어야함. 

//strcut변경

//#include <bits/stdc++.h>
//using namespace std;
//struct Point {
//	int y,x;
//	Point(int y, int x) : y(y), x(x) {}
//	Point() {y=-1; x=-1;}
//	bool operator < (const Point & a) const {
//	return x < a.x;
//	}
//};
//
//priority_queue<Point> pq;
//int main() {
//	pq.push({1, 1});
//	pq.push({2, 2});
//	pq.push({3, 3});
//	pq.push({4, 4});
//	pq.push({5, 5});
//	pq.push({6, 6});
//	cout << pq.top().x << "\n";
//	return 0;
//}

//=================================================================================================

//값에의한호출: 변수의 값을복사해서  전달. 수정시 원본과 상관없음 
//참조에의한호출:변수의주소를 전달하기때문에 수정시 원본도 변경 

//참조에의한 호출 
//#include <bits/stdc++.h>
//using namespace std;
//int add(int &a, int b) {
//	a +=10;
//	cout << a << '\n';
//	return a+b;
//}
//
//int main() {
//	int a = 1;
//	int b = 2;
//	int sum = add(a,b);
//	cout << a << '\n';
//	return 0;
//}

//=================================================================================================

//배열 수정하기
//Array의 요소 수정하기.
//Array의 요소를 수정할 때는 다음처럼 크기를 정하지 않은 int a[], 또는 배열의 크기인 int
//a[3], 배열의 포인터인 int * a를 넘겨서 수정할 수 있습니다.


//#include <bits/stdc++.h> 
//using namespace std;
//int a[3] = {1,2,3};
//void go(int a[]) {
//	a[2] = 100;
//}
//void go2(int a[3]) {
//	a[2] = 1000;
//}
//void go3(int *a) {
//	a[0] = 10000;
//}
//
//int main() {
//	go(a);  cout << a[2] << '\n';
//	go2(a);  cout << a[2] << '\n';
//	go3(a);  cout << a[0] << '\n';
//}

//2차원배열 수정하기

//vector

//#include<bits/stdc++.h> 
//using namespace std;
//vector<vector<int>> v;
//vector<vector<int>> v2(10, vector<int>(10,0));
//vector<int> v3[10];
//
//void go(vector<vector<int>> &v) {
//	v[0][0] = 100;
//}
//void go2(vector<vector<int>> &v) {
//	v[0][0] = 100;
//}
//void go3(vector<int> v[10]) {
//	v[0][0] = 100;
//}
//
//int main() {
//	vector<int> temp;
//	temp.push_back(0);
//	v.push_back(temp);
//	
//	v3[0].push_back(0);
//	
//	go(v); go2(v2); go3(v3);
//	cout << v[0][0] << " : " << v2[0][0] << " : " << v3[0][0] << '\n';
//	return 0;
//	
//}

//array
//#include<bits/stdc++.h>
//using namespace std;
//
//int a[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};
//
//void go(int a[][3]) {
//	a[2][2] = 100;
//}
//
//void go2(int a[3][3]) {
//	a[2][2] = 1000;
//}
//
//int main() {
//	go(a); cout << a[2][2] << '\n';
//	go2(a); cout << a[2][2] << '\n';
//}

//=================================================================================================

//재귀함수.
//정의단계에서 자신을 재참조하는 함수
//전달되는 상태인 매개변수가 달라질분 똑같은 일을 하는 함수
//큰 문제를 작은 부분문제로 나눠서 풀때 사용. 
// 기저 사례란 더 이상 쪼개지지 않는 가장 작은 작업으로, 이에 도달했을 때는 재귀호출을 멈추고 답을 곧장 반환해야한다. 
//기저 사례를 정할 때는 모든 사례의 답이 기저 사례를 이용하여 계산될 수 있도록 해야한다.

//#include <bits/stdc++.h> 
//using namespace std;
//int fact_rec(int n) {
//	if(n==1 || n==0) return 1;
//	return n * fact_rec(n-1);
//}
//
//int fact_for(int n) {
//	int ret = 1;
//	
//	for(int i=1; i<=n; i++) {
//		ret *= i;
//	}
//	return ret;
//}
//int n = 5;
//
//int main() {
//	cout << fact_f or(n) << '\n';
//	cout << fact_rec(n) << '\n';
//	return 0;
//}

//=================================================================================================

//순열과 조합
//순열: 순서에 상관있이. 조합: 순서에 상관없이.
 
//next_permutation사용전 오름차순으로 정렬해야함 
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int a[] = {1,2,3};
//	vector<int> b = {7,5,6,2};
//	sort(b.begin(), b.end()); 
//	do{
//		for(int i:a) cout << i << " ";
//		cout << '\n';
//	}
//	//while (next_permutation(&a[0], &a[0] + 3));//array
//	while (next_permutation(b.begin(), b.end()));//vector
//}


//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	vector<int> a = {2,1,3,100,200};
//	sort(a.begin(), a.end());
//	do {
//		for(int i=0; i<2; i++) {
//			cout << a[i] << " ";
//		}
//		cout << '\n';
//	}while (next_permutation(a.begin(), a.end()));
//}





















 

















