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


//////////////////////////////////////////////////////////////////////////////////

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

//===============================================================================================

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

//////////////////////////////////////////////////////////////////////////////////

//getline : ���� ���� �Ѳ����� ��
//#include<bits/stdc++.h> 
//using namespace std;
//string s;
//int main() {
//	getline(cin, s);
//	cout << s << '\n';
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////////////

//printf : ���������Ŀ��� ���ڹ޾Ƽ� ��½� �̿� 

//#include<bits/stdc++.h>
//using namespace std;
//int a = 1, b = 2;
//int main() {
//	printf("ȫö %d : ���� %d\n", a,b);
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
//	printf("%.6lf\n", a); //�Ҽ��� 6�ڸ����� ��� 
//	printf("%04d\n", b);// �ڸ��� 4�ڸ� ���. ���¾��ڸ��� 0���� ��ü 
//	printf("%02d\n", c);
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////

//printf�̿���  string��� 
//#include<bits/stdc++.h> 
//using namespace std;
//int a = 1;
//char s = 'a';
//string str = "�溥����";
//double b = 1.223123;
//
//int main() {
//	printf("���̿��� ���̾�� : %d\n", a);
//	printf("���̿��� ���̾�� : %s\n", str.c_str());
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
//�ѱ��� �ѱ��ڴ� 3����Ʈ�̹Ƿ� �Ʒ��Ͱ��� ��½� ������ ����� �ȵ�. ����� ���������� ��� Ȯ�� 
//#include<bits/stdc++.h>
//using namespace std;
//int main() {
//	string a = "���¾�";
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
//	a.pop_back();//���ڿ� ����  ���� 
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
// find():Ư�����ڿ��� ã�� ��ġ�� ��ȯ.��ã����� string::npos�� ��ȯ .0���ͻ��� 
//	auto it = a.find("love");
//	if(it != string::npos) {
//		cout << "���ԵǾ� �ִ�." << '\n';
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
//�ƽ�Ű�ڵ�� ���ڿ�(A:65, a:97)
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
//reverse() string�� ����x. STL���� �����Ѵ���.
//voidŸ������ �ƹ��͵� ��ȯ�����ʴ´�. �������ڿ��� �ٲ۴�. 

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
//split() : ���ڿ��� Ư�����ڿ��� �������� �ɰ�� �迭ȭ��Ű�� �Լ� 


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
//	string s = "�ȳ��ϼ��� ū���̴� ŷ�����׷� õ���Դϴ� �����̿���!", d=" ";
//	vector<string> a = split(s,d);
//	for(string b:a) cout << b << "\n";
//}
//
//while((pos=input.find(delimeter)) != string::npos) {
//	token = input.substr(0,pos);//�����ڱ��� �� ���ڿ� ���� 
//	ret.push_back(token);//�迭�� ���. 
//	input.erase(0,pos+delimeter.length());// �迭���������ڿ� ������ ���������ڿ� �� ����� 
//}
//}

//////////////////////////////////////////////////////////////////////////////////
//atoi(s.c_str())
//���ڿ�,string���� �Է��� �޾� �Է¹��� ���ڰ�  ���ڿ����� �������� Ȯ�� 
//�Է¹������ڿ��� ���ڶ�� : 0
//�ƴ϶�� ���� ��ȯ 

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
//bool. 0�̸� false �ƴѰ����� ��� true

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
//pair�� first,second��� �ɹ������� ������ Ŭ���� 
//tie()=pair/tuple ����Ͽ� �����ϰ� �̿밡��  

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

//auto : Ÿ���߷��� �Ͽ� �����Ǵ� Ÿ��.
//pair<int,int>�� ������� �ʰ� auto�� ����ص� ���� ��� ��� Ȯ�� 

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

//double���� int������ �����
//����Ÿ�Գ��� �����۾��Ͽ� �Ǽ��ϴ��� ������ ����..
 
//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	double ret = 2.12345;
//	int n = 2;
//	int a = (int)round(ret / double(n));
//	cout << a << "\n";
//	return 0;
//}

//Ÿ�Ժ�ȯ�� ����

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

//���ڸ����ڷ�, ���ڸ����ڷ� 

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	char a = 'a';
//	cout << (int)a << '\n';
//	cout << (int)a - 97 <<'\n';
//	cout << (int)a - 'a' << '\n';
//}

//=============================================================================================

//�޸�

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

//������ : ������ �޸� �ּҸ� ��� Ÿ���� �����Ͷ��Ѵ�. 
// <Ÿ��>*<������> = <�ش�Ÿ���� ������ �ּ�>  

//=============================================================================================


//������ ������

//#include<bits/stdc++.h> 
//using namespace std;
//int main() {
//	string a = "abcda";
//	string * b = &a;
//	cout << b << "\n";//�ּҰ���� 
//	cout << *b << "\n";//abcda ��� 
//	return 0;
//}

//=============================================================================================

//Array To Decay : �����迭������ vector�� X 

//#include<bits/stdc++.h>
//using namespace std;
//int a[3] = {1,2,3};
//int main() {
//	int *c = a;//a��ù��°�� ���ε� 
//	cout << *c << '\n';
//	cout << c << '\n';
//	cout << &a[0] << "\n";
//	cout << c + 1 << "\n";
//	cout << &a[1] << "\n";
//	return 0;
//}

//=============================================================================================


//�����Ҵ�:�����ϴܰ迡�� �޸𸮸� �Ҵ�>BSS segment,Data segment  , code/text segment
//BSS:��������,static,const�� ����Ǿ��ִº����� 0or��Ѱ� ���ε� �ʱ�ȭ�� �Ǿ��������� ������ 
//Data segment:��������, static, const�� ����Ǿ��ִ� ���� �� 0�� �ƴ� ������ �ʱ�ȭ�� ������ �� �޸� ������ �Ҵ�
//code / text segment�� ���α׷��� �ڵ尡 ���ϴ�. 

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


//�����Ҵ� ��Ÿ�Դܰ迡�� �޸𸮸� �Ҵ�޴°�. > stack,heap 

//=============================================================================================

//���ͷ����� �����̳ʿ� ����Ǿ� �ִ� ����� �ּҸ� ����Ű�� ��ü.�����͸� �Ϲ�ȭ�� ��
 
//#include<bits/stdc++.h>
//using namespace std;
//
//vector<int> v;
//
//int main() {
//	for(int i=1; i<=5; i++)v.push_back(i);//1,2,3,4,5 �Է� 
//	for(int i = 0; i<5; i++) {
//		cout << i << "��° ���: " << *(v.begin() + i) << "\n";//begin()�����̳ʽ�����ġ ��ȯ  
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
//	advance(it, 3);//advance(iterator,cnt)�ش�iterator�� cnt���� ���� 
//	cout << '\n';
//	cout << *it << '\n';
//	
//} 

//=============================================================================================


//fill(), memset()
//�迭�ʱ�ȭ�� ���.
//fill(): 0,1,100�� ��� ������ �ʱ�ȭ ����.[first,last)���� val�� �ʱ�ȭ
//memset(): -1,0���θ� �ʱ�ȭ ����  
//[�� �����ϴٶ�� ��������ȣ, )�� �������� �ʴ´ٴ� ��ȣ�Դϴ�. ��, ���۰��� �����ϰ�, 
//������ �������� �ʰ� �ʱ�ȭ�Ѵٴ� �ǹ��Դϴ�.


//#include<bits/stdc++.h> 
//using namespace std;
//int a[10];
//int b[10][10];//[Ⱦ][��] 
//int main() {
//	fill(&a[0], &a[10], 100);//a[10]���� �����ؾ� a[9]���� �ʱ�ȭ�Ѵ�. 
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

//�迭�̸����ε� �ʱ�ȭ ���� 
//1������ ��� a, a + 10, ��, �迭�� �̸� + ���ڷ� ���������� 2���� �̻��� ��쿡��
//�ݵ�� &b[0][0] + ���ڷ� �ؾ� �Ѵٴ� ���� ������ּ���.

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

//fill()�� ��ü�ʱ�ȭ�� �ؾ��ϴ� ����
//#include<bits/stdc++.h>
//using namespace std;
//int a[10][10];
//int main() {
//	cin.tie(NULL); cout.tie(NULL);//��,��� �ӵ��� ���̱����ؾ���. �ܼ��� ����ȭ�ϴ� ����X.�������� �˻��� ���� 
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
//�ʱ�ȭ��  ���Ͱ��� ���������. ��ü�ʱ�ȭ�� �ϴ°� ����. 

//memset() 
//void * memset(void *ptr, int value, size_t num);



//=============================================================================================

//���� ���ƾ��� �ʱ�ȭ ���
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
//		for(int i : a) cout << i << ' ';//0 1 2 3 4 ��µ�. �ʱ�ȭ �ȵǴ°� Ȯ��. 
//		
//	}
//	return 0;
//}

//=================================================================================================
//memcpy(), copy() ->� ������ ���� �����Ҷ� ���.
//memcpy(): Array���� �����Ҷ� ���.memcpy()�� vector������ �������� �ȵ�. void * memcpy(void * destination, const void *resuource, size_t num);
//copy(): Array, vector�� ��� ���� 

// [����] ���� ����� ���� ����
//����� ���� ����(Shallow copy)�� �޸� �ּҰ��� ������ ���̶� ������ �迭�� �����ϸ� ���� �迭��
//�����Ǵ� �������̸� ���� ����(Deep copy)�� ���ο� �޸� ������ Ȯ���� ������ ������ ������ �迭��
//�����ϸ� ���� �迭�� �����Ǵ� �ʴ� �������� �ǹ��մϴ�.

//#include <bits/stdc++.h>
//using namespace std;
//int main(void) {
//	int v[3] = {1,2,3};
//	int ret[3];
//	memcpy(ret, v, sizeof(v));
//	cout << ret[1] << "\n";
//	ret[1]=100;
//	cout << ret[1] << "\n";
//	cout << v[1] << "\n";//2 ��������� �������� ������������ Ȯ��. 
//	return 0;
//} 

//memcpy()�� vector���� �������� �ȵ�
 
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
//�����ϴ� vector�� ������ϴ� vector�� ũ�⸦ �����ִ� ���� �߿�. v�� ũ��� 3�̸�, 
//ret�� ũ�⵵ 3���� ����. �׸��� ���� ���簡 �Ǿ� ret�� �����ϴ��� v���� ���� ����. 


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
//Array v�� ũ�Ⱑ 5��� copy(v, v + 5, ret) . +���ڴ� �ش� �迭�� ũ��.

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

//sort() �迭�� �����̳ʵ��� ��Ҹ� �����ϴ� �Լ�.array,vector�����Ҷ� ����.
//sort(first,last,*Ŀ���Һ��Լ�) [first,last)
//ex: ũ�Ⱑ5��a��� �迭��ü�� ���Ľ�-> sort(a, a+5). 
//sort���� �ּҰ��� ���ߵǱ⶧���� a[0]�� �ƴ� a�� ��.  last���� �迭�� ��������Ұ��ƴ� �� "����"��ġ�� �־��ش�. 

//
//#include<bits/stdc++.h> 
//using namespace std;
//vector<int> a;
//int b[5];
//int main() {
//	for(int i=5; i>=1; i--) b[i-1] = i;
//	for(int i=5; i>=1; i--) a.push_back(i);//push_back�� vector�� ���� ��Ҹ� �߰��Ҷ� ����ϴ� �Լ�
//	//��������
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
//	//��������
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

//first�� ��������, second�� ��������
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

//unique() : �������� �ִ� ����� �տ������� ���θ� ���ذ��� �ߺ��Ǵ� ��Ҹ� ����.������ ��ҵ��� ���������ʰ� �״�� �δ� �Լ�.
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
//	//�ߺ����� ���� ��ҷ� ä�� ��, �� ���� ���ͷ����͸� ��ȯ. 
//	auto it = unique(v.begin(), v.end());
//	cout << it - v.begin() << '\n';
//	//�տ������� �ߺ������ʰ� ä���� ������ ��ҵ��� �״�� �д�.
//	for(int i:v) cout << i << " " ;
//	cout << '\n';
//	return 0;
//} 

//unique()�� 11,22,33...���ؼ� ���⶧���� sort()�� ���� ��ߵȴ�. 
//unique(index,index)�� �����ϸ� �ߺ� �����ѵ� "���� ������ ��ġ"�� ��ȯ. �׷��Ƿ� erase(unique(..),s.end())���� �ʿ���°��� �������� 

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
//���ĵ� �迭������ ����ؾߵ�

//lower_bound()�� ���ͷ����͸� ��ȯ. ���°���� �˷��� - begin()�� ���ش�. 
//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//int main() {
//	vector<int> a {1,2,3,3,3,4};
//	cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n";//3�� ���۵Ǵ� �ּҽ����� 
//	cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n";//3�� �ʰ��� �������� 
//	return 0;
//}
  
//�ּҰ����� -�ϰԵǸ� �ش� �ּҰ����� ���°�� �� ��Ұ� ����ִ��� ��ȯ. 
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
 
//lower_bound�� ����Ű�� ��� ���. 
//#include<bits/stdc++.h> 
//using namespace std;
//typedef long long ll;
//vector<int>a {1,2,3,3,4,100};
//int main() {
//	cout << *lower_bound(a.begin(), a.end(), 100) << "\n"; //100(*�Ǳ���� ������). &�� �ּҹ�ȯ 
//	
//	return 0;
//}
 
//����3�� ����ִ��� Ȯ�ΰ���
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

//ã�°��� �������  
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
//	// 0 1 2 3 4 ���� �ٹ������� 4��° (7���� 6�� �� �����Ƿ�)
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

//accumulate() : �迭���� ���ϱ� 

//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
//	int sum = accumulate(v.begin(), v.end(), 0);
//	cout << sum << '\n';
//}


//max_element() : �迭�� ���� ū ��Ҹ� ����.���ͷ����͸� ��ȯ. *���� ����ȸ ����. 

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


//min_element() : �迭�� ����������Ҹ� ����. ���ͷ����͸� ��ȯ. 

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

//�ڷᱸ��. : �����͵���� ����, �Լ�, ��� ���� ������ �ǹ�.�����Ϳ� ���� ȿ�������� ����,������ ó���� ȿ�������� �Ҽ��ְ� ���� ���� 
//�����ڷᱸ�� : Array, Stack, Queue, Linked_list
//���� : Graph, Tree 

//vector<Ÿ��>������;
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
//	cout << "�ƹ��͵�������?\n";
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


//vector �����Ҵ�.

//#include<bits/stdc++.h> 
//using namespace std;
//vector<int> v(5,100);
//int main() {
//	for(int a : v) cout << a << " ";
//	cout << "\n";
//	return 0;
//}


//Array : �����迭.

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

//2�����迭, Ž�� ��
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

//list ���Ḯ��Ʈ.�����ڷᱸ�� 
//���߿��Ḯ��Ʈ
//�������Ḯ��Ʈ 
 
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

//�������� : vector, Array
//���������� : ���Ḯ��Ʈ, ����, ť

//array, LinkedList
//�迭�� ���ӵ� �޸� ������ �����͸� �����ϰ� ���Ḯ��Ʈ�� ���ӵ��� ���� �޸� ������ �����͸�
//�����մϴ�.
//����, �迭�� ���԰� �������� O(n)�� �ɸ��� �������� O(1)�� �ɸ��ϴ�. ���Ḯ��Ʈ�� ���԰� ������ O(1)��
//�ɸ��� �������� O(n)�� �ɸ��ϴ�.
//���� �������߰��� ������ ���� �ϴ� ���� ���� ����Ʈ, ������ ���� �ϴ� ���� �迭�� �ϴ� ���� �����ϴ�.
 

//=================================================================================================
//map
//map�� ������ Ű�� ������� Ű - ��(key - value) ������ �̷���� �ִ� ���ĵ�(�����Ҷ����� �ڵ� ���ĵ�) ���� �����̳�

//#include<bits/stdc++.h>
//using namespace std;
//map<string, int> mp;
//string a[] = {"��ȫö","�߿���", "������"};
//
//int main() {
//	for(int i=0; i<3; i++) {
//		mp.insert({a[i], i+1});
//		mp[a[i]] = i+1;//mp["��ȫö"] = 1 
//	}
//	for(auto it : mp) {
//		cout << (it).first << " : " << (it).second << "\n";
//	}
//	cout << mp["kundol"] << '\n';
//	mp["kundol"] = 4;
//	cout << mp.size() << '\n';
//	mp.erase("kundol");
//	auto it = mp.find("kundol") ;//�ش簪�� ��ġ�� ��ȯ. ��ã���� map��end()���ͷ����͸� ��ȯ. 
//	if(it==mp.end()) {
//		cout << "��ã�ڴ�.\n";
//	}
//	
//	mp["kundol"]=100;
//	
//	it = mp.find("kundol");
//	if(it !=mp.end()) {
//		cout << (*it).first<< " : " << (*it).second << "\n";//it�� �������� key ��� : ��������value��� 
//	}
//	cout << '\n';
//	for(auto it : mp) {
//		cout << (it).first << " : " << (it).second << "\n";//map ������.������� �ε������������ε�..  
//	}
//	
//	for(auto it = mp.begin(); it != mp.end(); it++) {
//		cout << (*it).first << " : " << (*it).second << '\n';
//	}
//	mp.clear();
//	
//	return 0;
//} 


//map�� �ش� Ű�� �ش��ϴ� ��Ұ� ���ٸ� 0 �Ǵ� ���ڿ��� �ʱ�ȭ

//#include<bits/stdc++.h>
//using namespace std;
//map<int, int> mp;
//map<string, string> mp2;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cout << mp[1] << '\n';//0
//	cout << mp2["aaa"] << '\n';// ���ڿ� 
//	for(auto i : mp) cout << i.first << " " << i.second;
//	cout << '\n';
//	for(auto i : mp2) cout << i.first << " " << i.second;
//	
//	return 0;
//}

//0�� ���ִ��� Ȯ���� �� �Ҵ� 
//#include<bits/stdc++.h> 
//using namespace std;
//map<int, int> mp;
//map<string, string> mp2;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	if(mp[1] == 0) { //mp[1]������ 0�� �Ҵ��ϹǷ� true 
//		mp[1] = 2;
//	}
//	for(auto i : mp) cout << i.first << " " << i.second;
//	
//	return 0;
//}

//0�� ���� ���� ���ϱ� �����ٸ�.. 
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

//set : ������ ��Ҹ��� �����ϴ� �����̳�. �ߺ����x 

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

//unique()�� set ��� ����ؼ� �ߺ��� �����ұ�? https://perfbench.com/
//������ ���� �ٸ������� unique()�� ��������...

//#include<bits/stdc++.h> 
//using namespace std;
//void A() {
//	vector<int> v;
//	int n = 1e5;//1���ϱ� 10��5�� = 1000 
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

//stack ������ ���� ���������� �� �����Ͱ� ���� ù ��°�� ������ ����
//��, ���������� �ʰ� ��� ������ ������ ������ ����ؾ� �ϴ� ���� �ƴұ�? ����

 
//#include<bits/stdc++.h> 
//using namespace std;
//stack<string> stk;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	stk.push("��");
//	stk.push("��");
//	stk.push("��");
//	stk.push("ȭ");
//	stk.push("��");
//	stk.push("��");
//	while(stk.size()) {
//		cout << stk.top() << "\n";
//		stk.pop();
//	}
//}


//queue : �������������Ͱ� ��������.stack�� �ݴ� 

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

//struct Ŀ������ �ڷᱸ�� 

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

//point����ü
//struct Point{
//int y, x;
//Point(int y, int x) : y(y), x(x){}
//Point(){y = -1; x = -1; }
//bool operator < (const Point & a) const{
//if(x == a.x) return y < a.y;
//return x < a.x;
//}
//}; 


//string���� �̷���� �迭�� ����
//sort()�� ���� 1����>compare()�� ���� 2����
 
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


//3���� ������� ����
//1���� x��������.2���� y��������.3���� z��������
 
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

//vector���� struct�ְ� ����

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

//priority queue �켱���� ť
//�� ��ҿ� ��� �켱������ �߰��� �ο��Ǿ��ִ� �����̳� 
 
//int�� �켱����ť. �⺻���� �������� priority_queue<Ÿ��> 
//greater<Ÿ��>:��������, less<Ÿ��>:��������. 

//#include <bits/stdc++.h>
//using namespace std;
//priority_queue<int, vector<int>, greater<int> > pq;//��������
//priority_queue<int> pq2; //��������
//priority_queue<int, vector<int>, less<int> > pq3;//��������
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

//����ü�� ���� �켱���� ť
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
*///�������������� ������ Ȯ�ν� 6�̿����ϳ� 1�� ���� 
//�켱����ť�� Ŀ���� ������ ���� �� �ݴ�� �־����. 

//strcut����

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

//��������ȣ��: ������ ���������ؼ�  ����. ������ ������ ������� 
//����������ȣ��:�������ּҸ� �����ϱ⶧���� ������ ������ ���� 

//���������� ȣ�� 
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

//�迭 �����ϱ�
//Array�� ��� �����ϱ�.
//Array�� ��Ҹ� ������ ���� ����ó�� ũ�⸦ ������ ���� int a[], �Ǵ� �迭�� ũ���� int
//a[3], �迭�� �������� int * a�� �Ѱܼ� ������ �� �ֽ��ϴ�.


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

//2�����迭 �����ϱ�

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

//����Լ�.
//���Ǵܰ迡�� �ڽ��� �������ϴ� �Լ�
//���޵Ǵ� ������ �Ű������� �޶����� �Ȱ��� ���� �ϴ� �Լ�
//ū ������ ���� �κй����� ������ Ǯ�� ���. 
// ���� ��ʶ� �� �̻� �ɰ����� �ʴ� ���� ���� �۾�����, �̿� �������� ���� ���ȣ���� ���߰� ���� ���� ��ȯ�ؾ��Ѵ�. 
//���� ��ʸ� ���� ���� ��� ����� ���� ���� ��ʸ� �̿��Ͽ� ���� �� �ֵ��� �ؾ��Ѵ�.

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

//������ ����
//����: ������ �������. ����: ������ �������.
 
//next_permutation����� ������������ �����ؾ��� 
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





















 

















