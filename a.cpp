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

















 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 








