#include<iostream>
#include<set>
using namespace std;
//1.노드 기반 컨테이너이며 균형 이진트리로 구현되어있다.
//2.key라 불리는 원들의 집합으로 이루어진 컨테이너이다.
//3.key값은 중복이 허용 되지않습니다.
//4.원소가 insert 멤버 함수에 인해 삽입이 되면, 원소는 자동으로 정렬된다.
//5.default 정렬기준은 오름차순이다.

//set의 사용법
//<set> 헤더 파일에 들어있다.
//기본 선언 방법은 : set < [Data Type] > [변수 이름];
//ex) set<int> s;

//set<int> s
//-기본 선언 방법

//set<int> s(pred);
//-pred를 통해 정렬기준을 세웁니다.

//set<int> s2(s1);
//s1을 복사한 s2

//s.begin();
//맨 첫번쨰 원소를 가르키느 반복자를 리턴

//s.end();
//맨 마지막 원소를 가르키는 원소의 끝부분을 알 때 사용
//반복자를 리턴

//s.rbegin()
//s.rend();
//begin(),end()와 반대로 작동하는 멤버함수들이다.
//역으로 출력하고 싶을때 사용

//s.clear();
//모든 원소를 제거합니다

//s,count(k);
//원소  k의 갯수를 반환합니다.

//s.empty();
//set s가 비어있는지 확인

//s.insert(k0;
//원소 k를 삽입합니다.
//삽입시에 자동으로 정렬된 위치에 삽입됩니다.

//s.insert(iter, k);
//iter가 가르키는 위치 부터 k를 삽입할 위치를 탐색

//s.erase(iter);
//iter가르키는 원소를 제거합니다.

//s.find(k);
//원소 k를 가리키는 반복자를 반환합니다.

//s2.swap(s1);
//s1과 s2를 바꿔줍니다.

//s.upper_bound(k);
//원소 k가 끝나는 구간의 반복자 입니다

//s.lower_bound(k);
//원소 k가 시작하는 구간의 반복자 입니다.

//s.equal_range(k);
//원소 k가 시작하는 구간과 끝나는 구간의 반복자 pair 객체를 반환합니다.

//s.value_comp();
//s.key_comp();
//정렬 기준 조건자를 반환합니다.
//set 컨테이너에서는 두개의 함수 반환형이 같습니다.

//s.size(); 
//사이즈(원소의 갯수)를 반환합니다.

//s.max_size(); 
//최대 사이즈(남은 메모리 크기)를 반환합니다.

int main() {
	set<int> s;

	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(80);
	s.insert(70);
	s.insert(90);

	for (auto iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	return 0;
}