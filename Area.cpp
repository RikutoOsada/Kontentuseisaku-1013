#include<iostream>

//円周率の変数
const double pai = 3.14;

//三角形の面積を求める関数
double TriangleArea(double width, double height) {
	return width * height / 2;
}

//円の面積を求める関数
double CircleArea(double r) {
	return r * r * pai;
}

//台形の面積を求める関数
double TrapezoidArea(double upBotton, double downBotton, double height) {
	return (upBotton + downBotton) * height / 2;
}
