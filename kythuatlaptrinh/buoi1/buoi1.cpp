#include <iostream>
#include <vector>
using namespace std;
struct sinhvien 
{
	string hoten;
	int tuoi;
	bool gioitinh;
		string diachi;

};
int main() {
	sinhvien b;
	b.hoten = "Nguyen Van A";
	b.tuoi = 20;
	b.gioitinh = true;
	b.diachi = "Tay Ninh ";

	sinhvien c;
	c.hoten = "Huynh Van V";
	c.tuoi = 30;
	vector <sinhvien> mang;
	mang.push_back(b);
	mang.push_back(c);
	for (int i = 0; i < mang.size(); i++) {
		cout << "sinh vien " << (i + 1) << endl;
		cout << " \t+ ho ten: " << mang[i].hoten << endl;
		cout << "\t+tuoi: " << mang[i].tuoi << endl;
	}








	///*vector <float> diemthi;
	//diemthi.push_back(5.5);
	//diemthi.push_back(4);
	//diemthi.push_back(6);
 //   diemthi.pop_back();
	//for (int i = 0; i < diemthi.size(); i++) {
	//	cout << diemthi[i] << endl;
	//}*/
}