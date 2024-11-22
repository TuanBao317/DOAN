#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include"string.h"
using namespace std;
typedef struct Node* Nodeptr;
struct Phong {
	char maPhong[10];
	char tenPhong[20];
	float gia;
};
struct Node {
	Phong data;
	Nodeptr link;
};
void khoiTao(Nodeptr& list);
int isEmpty(Nodeptr list);
void giaiPhong(Nodeptr& list);
Nodeptr themDau(Nodeptr& list, Phong p);
bool kiemTrung(Nodeptr& list, char* ma);
Nodeptr taoNode(Phong p);
void nhap(Nodeptr& list);
void xuat(Nodeptr list);
Nodeptr timTheoMa(Nodeptr list, Phong x);
Nodeptr timTheoTen(Nodeptr list, Phong x);
void xoaTheoMa(Nodeptr& list,Phong x );
void xoaTheoTen(Nodeptr& list,Phong x );
void sapTheoMa(Nodeptr& list);
void sapTheoTen(Nodeptr& list);