#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int jumlah, total, total1, diskon, menu, i, x, ongkir, pesanan,bayar;
	float jarak;
	char a, b, pilihan1;
		cout << "           RUMAH MAKAN SEDERHANA\n ";
		cout << " Masa Pandemi hanya menerima orderan Delivery\n";
		cout << " MENU : \n";
		cout << " [1] Ayam Geprek  Rp 21.000\n";
		cout << " [2] Ayam Goreng  Rp 17.000\n";
		cout << " [3] Udang Goreng Rp 19.000\n";
		cout << " [4] Cumi Goreng  Rp 20.000\n";
		cout << " [5] Ayam Bakar   Rp 25.000\n ";
		cout << " Jumlah Menu yang dipesan : ";
		cin >> pesanan;
		for (i=1 ; i<=pesanan; i++){
	//		ulang :
			cout << "\n Menu pilihan : ";
			cin >> menu;
			if(menu == 1){
				cout << " Ayam Geprek\n";
				cout << " Harga : Rp 21000\n";
				cout << " Jumlah pesanan: ";
				cin >> jumlah;
				total1 = 21000;
				cout << " total : " << total1;
			}
			else if(menu == 2){
				cout << " Ayam Goreng\n";
				cout << " Harga : Rp 17000\n";
				cout << " Jumlah : ";
				cin >> jumlah;
				total1 = 17000;
				cout << " total : " << total1;
			}
			else if(menu == 3){
				cout << " Udang Goreng\n";
				cout << " Harga : Rp 19000\n";
				cout << " Jumlah : ";
				cin >> jumlah;
				total1 = 19000;
				cout << " total : " << total1;
			}
			else if(menu == 4){
				cout << " Cumi Goreng\n";
				cout << " Harga : Rp 20000\n";
				cout << " Jumlah : ";
				cin >> jumlah;
				total1 = 20000;
				cout << " total :" << total1;
			}
			else if(menu == 5){
				cout << " Ayam Bakar\n";
				cout << " Harga : Rp 25000\n";
				cout << " Jumlah : ";
				cin >> jumlah;
				total1 = 25000;
				cout << " total : " << total1;
			}
			    cout<<endl;
				cout << "Silahkan pesan kembali\n";
			//	goto ulang; 
		//}
		bayar=bayar + total1;
	}
		system("pause");
		system("cls");
		cout << "===============================================================================\n";
		cout << "\t\t BUKTI PEMBAYARAN\n";
		cout << "===============================================================================\n";
		cout << " Total Pemesanan  	  : " << bayar << endl;
		cout << " Berapakah jarak rumah anda? : ";
		cin >> jarak;
		if (jarak <= 3){
				cout << " Ongkir : 15000\n";
				if (bayar> 25000){
					cout << " Diskon Ongkir: 3000\n";
					ongkir = 15000-3000;
					x = ongkir;
					cout << " Total : " << x << endl;
				}
				else if (bayar > 50000){
					cout << " Diskon Ongkir: 5000 + 15% Pembelian\n";
					ongkir = 15000-5000;
					diskon = bayar*15/100;
					x = ongkir - diskon;
					cout << " Total : " << x << endl;
				}
				else if (bayar > 150000){
					cout << " Diskon Ongkir: 8000 + 15% Pembelian\n";
					ongkir = 15000-8000;
					diskon = bayar*15/100;
					x = ongkir - diskon;
					cout << " Total : " << x << endl;
				}
			}
		else if (jarak > 3){
				cout << " Ongkir : 25000\n";
				if (bayar > 25000){
					cout << " Diskon Ongkir: 3000\n";
					ongkir = 25000-3000;
					x = ongkir;
					cout << " Total : " << x << endl;
				}
				else if (bayar > 50000){
					cout << " Diskon Ongkir: 5000 + 15% Pembelian\n";
					ongkir = 25000-5000;
					diskon = bayar*15/100;
					x = ongkir - diskon;
					cout << " Total : " << x << endl;
				}
				else if (bayar > 150000){
					cout << " Diskon Ongkir: 8000 + 15% Pembelian\n";
					ongkir = 15000-8000;
					diskon = bayar*15/100;
					x = ongkir - diskon;
					cout << " Total : " << x << endl;
				}
			}
		}
