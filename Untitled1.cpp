#include <bits/stdc++.h>
using namespace std;
int main(){
	return 0;
}
//string ���� �������� �� UnicodeString(String)
class CheckQuestiuon{
	/*
	������ ��� ������ ������ (��/���) � �����������
	*/
	string Text;//������������ �������
	bool Answer;//����� �� ������ (��/���)
};

class ShooseQuestion{
	/*
	������ � ���������� �������
*/
	string Text;//������������ �������
	vector<int> VariantOfAnswer; //��� �������� ��������� �������	
	int RightAnswer;// ���������� �����
};
class Test{
	/*
	��� ����
	*/
	string Name;//�������� �����
	vector<CheckQuestiuon> CheckQu;//���� �������� ���� CheckQuestiuon
	vector<ShooseQuestion>	CheckSh;//���� �������� ���� ShooseQuestion
	
};
