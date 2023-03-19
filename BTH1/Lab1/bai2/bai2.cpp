/*#include<iostream>
#include<cmath>

using namespace std;
class PS{
	int tu;
    int mau;
    public:
    void nhap1();
    void nhap2();
    void xuat();
    void kiemtra(PS a, PS b);
};
void PS::nhap1()
{  cout<<"nhap phan so thu 1"<<endl;
   cin>>tu;
   cin>>mau;	
}
void PS::nhap2()
{  cout<<"nhap phan so thu 2"<<endl;
   cin>>tu;
   cin>>mau;	
}
void PS::xuat(){
	cout<<tu<<"/"<<mau;
	
}
kiemtra(PS a, PS b){
	if(a.tu/a.mau>b.tu/b.mau) cout<<a.tu<<"/"<<a.mau;
	else cout<<b.tu<<"/"<<b.mau;
}
int main(){
	PS a,b;
	a.nhap1();
	b.nhap2();
	kiemtra(a,b);
}*/
#include<iostream>
#include<cmath>
#include"bai2.h"
using namespace std;

int main() {
	PS a,b;
    cout<<"Nhap phan so thu nhat:\n";
	a.nhap();
    cout<<"Nhap phan so thu hai:\n";
	b.nhap();
    cout<<"Phan so lon hon la: ";
	a.kiemtra(b);
    cout<<endl;
}

