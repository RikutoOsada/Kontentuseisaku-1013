#include<iostream>

//円周率の変数
const double PI = 3.14;

//三角形の面積を求める関数
double TriangleArea(double width, double height) {
	return width * height / 2;
}

//円の面積を求める関数
double CircleArea(double r) {
	return r * r * PI;
}

//台形の面積を求める関数
double TrapezoidArea(double top, double Botton, double height) {
	return (top + Botton) * height / 2;
}
