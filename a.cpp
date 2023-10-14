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

















 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 








