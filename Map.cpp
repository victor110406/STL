#include<iostream>
#include<map>
using namespace std;
//1,map이란
//map은 각 고드가 Key와 value 쌍으로 이루어진 트리이다. 특히, 중복을 허용하지 않는다.
//map은 first,second가 있는 pair 객체로 저장되는 데 first-key와 second-value로 저장됩니다.
//C++의 map의 내부 구현은 검색,삽입,삭제가 O(logn)인 레드 블랙트리로 구성

//2.map의 기본 형태
//map<key,value>map1;

//3.map 정령
//map은 자료를 저장할때 내부에서 자동으로 정렬합니다.
//map은  key를 기준으로 정렬하며 오름차순으로 정렬합니다.

int main() {

	//map 사용방법
	//map을 사용하려면 헤더에 #include<map>처리를 해야 합니다.

	//map 선언하기
	//map의 기본 구조는 map<key type, value type> 이름
	map<string, int>m;

	//map에 찾고자 하는 데이터가 있는지 확인
	//map에서 데이터를 찾을 때는 iterator을 사용합니다.
	//데이터를 끝까지 찾기 못했을 경우. iterator는 map.end()를 반환
	if (m.find("Lass") != m.end()) {
		cout << "find" << endl;
	}
	else {
		cout << "not find" << endl;
	}

	//map에 데이터 삽입
	//map은 중복을 허용하지 않습니다. insert를 수행할때, key가 중복되면 insert가 수행되지 않습니다.
	//중복이 되면 그것이 key의 역할을 하지 못한 것이다.
	m.insert({ "Lass",300 });

	//반복문 데이터 접근
	//인덱스 기반 반복문 활용한 예제
	for (auto i = m.begin(); i != m.end(); i++) {
		cout << i->first << endl;
	}
	
	//범위 기반 반복문 활용한 예제
	for (auto i : m) {
		cout << i.first << endl;
	}

	//map에서 삭제하기
	//map에서 데이터를 삭제하기 위해 활용할 함수는 erase와 clear이다.
	m.erase(m.begin());
	//key값을 기준으로 요소 삭제
	m.erase("Lass");
	//map의 모든 요소 삭제;
	m.erase(m.begin(), m.end());
	m.clear();

	return 0;
}