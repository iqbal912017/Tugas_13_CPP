#include <iostream>

using namespace std;

int main ()
{
	struct rumah
	{
		string tipe_rumah;
		int jumlah_kamar;
		float luas_rumah;
		float tinggi_rumah;
		string pemilik_rumah;
	};
	
	rumah rumah1;
	cout<<"inputkan tipe rumah : ";
	cin>>rumah1.tipe_rumah;
	cout<<"inputkan jumlah kamar : ";
	cin>>rumah1.jumlah_kamar;
	cout<<"inputkan luas rumah : ";
	cin>>rumah1.luas_rumah;
	cout<<"inputkan tinggi rumah : ";
	cin>>rumah1.tinggi_rumah;
	cout<<"inputkan pemilik rumah : ";
	cin>>rumah1.pemilik_rumah;
	
	rumah rumah2;
	cout<<"\ninputkan tipe rumah : ";
	cin>>rumah2.tipe_rumah;
	cout<<"inputkan jumlah kamar : ";
	cin>>rumah2.jumlah_kamar;
	cout<<"inputkan luas rumah : ";
	cin>>rumah2.luas_rumah;
	cout<<"inputkan tinggi rumah : ";
	cin>>rumah2.tinggi_rumah;
	cout<<"inputkan pemilik kamar : ";
	cin>>rumah2.pemilik_rumah;
	
	
}
