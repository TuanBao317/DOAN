#include"lib.h"
int main() {
	Phong p;
	Nodeptr dsPhong;
	//int n;
	//do {
	//	cout << "\n1. Nhap danh sach cac phong" << endl;
	//	cout << "2. Them phong vao vi tri " << endl;
	//	cout << "3. Tim kiem phong (theo ma hay ten)" << endl;
	//	cout << "4. Xoa mot phong (theo ma hay ten)" << endl;
	//	cout << "5. Sap xep danh sach phong (theo ma, ten)" << endl;
	//	cout << "Nhap -99 de thoat" << endl;
	//	cout << "Nhap lua chon cua ban: ";
	//	cin >> n;
	//	switch (n)
	//	{
	//	case 1:
	//		nhap(dsPhong);
	//		xuat(dsPhong);
	//		break;
	//	case 2:
	//		nhap(dsPhong);
	//		xuat(dsPhong);
	//		break;
	//	case 3:
	//		int x;
	//		cout << "\nChon 1 de tim theo ma hoac 2 de tim theo ten ";
	//		cin >> x;
	//		if (x == 1) {
	//			//char ma[10];
	//			cout << "\nNhap ma: ";
	//			cin >> p.maPhong;
	//			Nodeptr kq = timTheoMa(dsPhong,p);
	//			if (kq != NULL) {
	//				cout << "\nTim thay" << endl;
	//				xuat(kq);
	//			}
	//			else
	//				cout << "Khong tim thay";
	//		}
	//		else {
	//			//char ten[30];
	//			cout << "\nNhap ten: ";
	//			cin >> p.tenPhong;
	//			Nodeptr kq = timTheoTen(dsPhong, p);
	//			if (kq != NULL) {
	//				cout << "\nTm thay!" << endl;
	//				xuat(kq);
	//			}
	//			else
	//				cout << "\nKhong tim thay";
	//		}
	//		break;
	//	case 4:
	//		int t;
	//		cout << "\nChon 1 de xoa theo ma hoac 2 de xoa theo ten ";
	//		cin >> t;
	//		if (t == 1) {
	//			
	//			cout << "\nNhap ma: ";
	//			cin >> p.maPhong;
	//			xoaTheoMa(dsPhong,p );
	//			xuat(dsPhong);
	//		}
	//		else {
	//			
	//			cout << "\nNhap ten can xoa: ";
	//			cin >> p.tenPhong;
	//			xoaTheoTen(dsPhong, p);
	//			xuat(dsPhong);
	//		}
	//		break;
	//	case 5:
	//		int a;
	//		cout << "\nChon 1 de sap xep theo ma hoac 2 de sap xep theo ten ";
	//		cin >> a;

	//		if (a == 1) {
	//			sapTheoMa(dsPhong);
	//			xuat(dsPhong);
	//			cout << endl;
	//		}
	//		else {
	//			sapTheoTen(dsPhong);
	//			xuat(dsPhong);
	//			cout << endl;
	//		}
	//		break;
	//	default:
	//		break;
	//	}
	//} while (n != -99);
	nhap(dsPhong);
	xuat(dsPhong);
	int x;
	cout << "\nChon 1 de tim theo ma hoac 2 de tim theo ten ";
	cin >> x;
			if (x == 1) {
				//char ma[10];
				cout << "\nNhap ma: ";
				cin >> p.maPhong;
				Nodeptr kq = timTheoMa(dsPhong,p);
				if (kq != NULL) {
					cout << "\nTim thay" << endl;
					xuat(kq);
				}
				else
					cout << "Khong tim thay";
			}
			else {
				//char ten[30];
				cout << "\nNhap ten: ";
				cin >> p.tenPhong;
				Nodeptr kq = timTheoTen(dsPhong, p);
				if (kq != NULL) {
					cout << "\nTm thay!" << endl;
					xuat(kq);
				}
				else
					cout << "\nKhong tim thay";
			}
			int t;
					cout << "\nChon 1 de xoa theo ma hoac 2 de xoa theo ten ";
					cin >> t;
					if (t == 1) {
						
						cout << "\nNhap ma: ";
						cin >> p.maPhong;
						xoaTheoMa(dsPhong,p );
						xuat(dsPhong);
					}
					else {
						
						cout << "\nNhap ten can xoa: ";
						cin >> p.tenPhong;
						xoaTheoTen(dsPhong, p);
						xuat(dsPhong);
					}
					int a;
							cout << "\nChon 1 de sap xep theo ma hoac 2 de sap xep theo ten ";
							cin >> a;

							if (a == 1) {
								sapTheoMa(dsPhong);
								xuat(dsPhong);
								cout << endl;
							}
							else {
								sapTheoTen(dsPhong);
								xuat(dsPhong);
								cout << endl;
							}
	system("pause");
	return 1;
}