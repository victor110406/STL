#include<iostream>
#include<map>
using namespace std;
//1,map�̶�
//map�� �� ��尡 Key�� value ������ �̷���� Ʈ���̴�. Ư��, �ߺ��� ������� �ʴ´�.
//map�� first,second�� �ִ� pair ��ü�� ����Ǵ� �� first-key�� second-value�� ����˴ϴ�.
//C++�� map�� ���� ������ �˻�,����,������ O(logn)�� ���� ��Ʈ���� ����

//2.map�� �⺻ ����
//map<key,value>map1;

//3.map ����
//map�� �ڷḦ �����Ҷ� ���ο��� �ڵ����� �����մϴ�.
//map��  key�� �������� �����ϸ� ������������ �����մϴ�.

int main() {

	//map �����
	//map�� ����Ϸ��� ����� #include<map>ó���� �ؾ� �մϴ�.

	//map �����ϱ�
	//map�� �⺻ ������ map<key type, value type> �̸�
	map<string, int>m;

	//map�� ã���� �ϴ� �����Ͱ� �ִ��� Ȯ��
	//map���� �����͸� ã�� ���� iterator�� ����մϴ�.
	//�����͸� ������ ã�� ������ ���. iterator�� map.end()�� ��ȯ
	if (m.find("Lass") != m.end()) {
		cout << "find" << endl;
	}
	else {
		cout << "not find" << endl;
	}

	//map�� ������ ����
	//map�� �ߺ��� ������� �ʽ��ϴ�. insert�� �����Ҷ�, key�� �ߺ��Ǹ� insert�� ������� �ʽ��ϴ�.
	//�ߺ��� �Ǹ� �װ��� key�� ������ ���� ���� ���̴�.
	m.insert({ "Lass",300 });

	//�ݺ��� ������ ����
	//�ε��� ��� �ݺ��� Ȱ���� ����
	for (auto i = m.begin(); i != m.end(); i++) {
		cout << i->first << endl;
	}
	
	//���� ��� �ݺ��� Ȱ���� ����
	for (auto i : m) {
		cout << i.first << endl;
	}

	//map���� �����ϱ�
	//map���� �����͸� �����ϱ� ���� Ȱ���� �Լ��� erase�� clear�̴�.
	m.erase(m.begin());
	//key���� �������� ��� ����
	m.erase("Lass");
	//map�� ��� ��� ����;
	m.erase(m.begin(), m.end());
	m.clear();

	return 0;
}