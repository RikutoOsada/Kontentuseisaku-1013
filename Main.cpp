#include<iostream>
#include "Area.h";
using namespace std;

int main() {
	
	//関数の呼び出し
	double triangleArea = TriangleArea(2.1, 3);
	double circleArea = CircleArea(2);
	double trapezoidArea = TrapezoidArea(2.1,3,4);

	//表示
	cout << "三角形(横2.1,高さ3)の面積は＞" << triangleArea << endl
		<< "円(半径2)の面積は＞" << circleArea << endl
		<< "台形(上底2.1,下底3,高さ2)の面積は＞" << trapezoidArea << endl;

	//変更しました
}