#include <bits/stdc++.h>
using namespace std;
int main(){
	return 0;
}
//string надо заменить на UnicodeString(String)
class CheckQuestiuon{
	/*
	вопрос без выбора ответа (да/нет) в квадратиках
	*/
	string Text;//формулировка вопроса
	bool Answer;//ответ на вопрос (да/нет)
};

class ShooseQuestion{
	/*
	вопрос с вариантами ответов
*/
	string Text;//формулировка вопроса
	vector<int> VariantOfAnswer; //для хранения вариантов ответов	
	int RightAnswer;// правильный ответ
};
class Test{
	/*
	Сам тест
	*/
	string Name;//Название теста
	vector<CheckQuestiuon> CheckQu;//банк вопросов типа CheckQuestiuon
	vector<ShooseQuestion>	CheckSh;//банк вопросов типа ShooseQuestion
	
};
