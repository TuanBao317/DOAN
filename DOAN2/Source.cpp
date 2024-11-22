#include"lib.h"
void khoiTao(Nodeptr& list) {
	list = NULL;
}
int isEmpty(Nodeptr list) {
	return list == NULL ? 1 : 0;
}
void giaiPhong(Nodeptr& list) {
	Nodeptr p = list;
	while (p != NULL) {
		list = list->link;
		delete p;
		p = list;
	}
}
bool kiemTrung(Nodeptr& list, char* ma) {
	Nodeptr p = list;
	while (p != NULL) {
		if (strcmp(p->data.maPhong, ma) == 0)
			return true;
		p = p->link;
	}
	return false;
}
Nodeptr taoNode(Phong p) {
	Nodeptr q = new Node;
	q->data = p;
	q->link = NULL;
	return q;
}
Nodeptr themDau(Nodeptr& list, Phong p) {
	Nodeptr q= taoNode(p);
	q->link = list;
	list = q;
	return q;
}
void nhap(Nodeptr& list) {
	Phong p;
	khoiTao(list);
	do {
		cout << "\n Nhap Ma (Nhap -99 de thoat)";
		cin.getline(p.maPhong, 10);
		while (kiemTrung(list, p.maPhong)) {
			cout << "\n Ma phong bi trung";
			cout << "\n Vui long nhap lai: ";
			cin.getline(p.maPhong, 10);
		}
		if (strcmp(p.maPhong, "-99") == 0)
			break;
		cout << "\n Nhap ten phong:";
		cin.getline(p.tenPhong, 20);
		cout << "\n Nhap gia:";
		cin >> p.gia;
		cin.ignore();
		themDau(list, p);
	} while (1);
}
void xuat(Nodeptr list) {
	cout << "Ma phong" << "\t" << "Ten phong" << "\t" << "Don gia" << endl;
	while (list != NULL) {
		cout << list->data.maPhong << "\t	" << list->data.tenPhong << "\t	" << list->data.gia << endl;
		list = list->link;
	}
}
Nodeptr timTheoMa(Nodeptr list, Phong x) {
	Nodeptr p = list;
	while (p != NULL) {
		if (strcmp(p->data.maPhong, x.maPhong) == 0)
			return p;
		p = p->link;
	}return p;
}
Nodeptr timTheoTen(Nodeptr list, Phong x) {
	Nodeptr p = list;
	while (p != NULL) {
		if (strcmp(p->data.tenPhong, x.tenPhong) == 0)
			return p;
		p = p->link;
	}return p;
}
void xoaTheoMa(Nodeptr& list, Phong x) {
	if (strcmp(list->data.maPhong, x.maPhong) == 0) {
		Nodeptr p = list;
		list = list->link;
		delete p;
	}
	else {
		Nodeptr p, before;
		p = list;
		before = list;
		while (p != NULL && strcmp(p->data.maPhong, x.maPhong) != 0) {
			before = p;
			p = p->link;
		}if (p != NULL) {
			before->link = p->link;
			delete p;
		}
	}
}
void xoaTheoTen(Nodeptr& list, Phong x) {
	if (strcmp(list->data.tenPhong, x.tenPhong) == 0) {
		Nodeptr p = list;
		list = list->link;
		delete p;
	}
	else {
		Nodeptr p, before;
		p = list;
		before = list;
		while (p != NULL && strcmp(p->data.tenPhong, x.tenPhong) != 0) {
			before = p;
			p = p->link;
		}if (p != NULL) {
			before->link = p->link;
			delete p;
		}
	}
}
void sapTheoMa(Nodeptr& list) {
	Nodeptr p = list;
	Nodeptr q = p->link;
	while (p->link != NULL) {
		q = p->link;
		while (q != NULL) {
			if (strcmp(p->data.maPhong, q->data.maPhong) > 0)
				swap(p->data, q->data);
			q = q->link;
		}
		p = p->link;
	}
}
void sapTheoTen(Nodeptr& list) {
	Nodeptr p = list;
	Nodeptr q = p->link;
	while (p->link != NULL) {
		q = p->link;
		while (q != NULL) {
			if (strcmp(p->data.tenPhong, q->data.tenPhong) > 0)
				swap(p->data, q->data);
			q = q->link;
		}
		p = p->link;
	}
}
