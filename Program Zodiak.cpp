#include <iostream>
using namespace std;
int main (){
	int tanggal, bulan;
	cout << "Masukkan tanggal (angka)";
	cin >> tanggal;
	cout << "Masukkan bulan (angka)";
	cin >> bulan;
	if (tanggal>=20&&bulan==1||tanggal<=18&&bulan==2) {
		cout << "Zodiakmu : Aquarius";
	} else if (tanggal>=19&&bulan==2||tanggal<=20&&bulan==3) {
		cout << "Zodiakmu : Pisces";
	} else if (tanggal>=21&&bulan==3||tanggal<=19&&bulan==4) {
		cout << "Zodiakmu : Aries";
	} else if (tanggal>=20&&bulan==4||tanggal<=20&&bulan==5) {
		cout << "Zodiakmu : Taurus";
	} else if (tanggal>=21&&bulan==5||tanggal<=20&&bulan==6) {
		cout << "Zodiakmu : Gemini";
	} else if (tanggal>=21&&bulan==6||tanggal<=22&&bulan==7) {
		cout << "Zodiakmu : Cancer" ;
	} else if (tanggal>=23&&bulan==7||tanggal<=22&&bulan==8) {
		cout << "Zodiakmu : Leo";
	} else if (tanggal>=23&&bulan==8||tanggal<=22&&bulan==9) {
		cout << "Zodiakmu : Virgo";
	} else if (tanggal>=23&&bulan==9||tanggal<=22&&bulan==10) {
		cout << "Zodiakmu : Libra";
	} else if (tanggal>=23&&bulan==10||tanggal<=21&&bulan==11) {
		cout << "Zodiakmu : Scorpio";
	} else if (tanggal>=22&&bulan==11||tanggal<=21&&bulan==12) {
		cout << "Zodiakmu : Sagitarius";
	} else if (tanggal>=22&&bulan==12||tanggal<=19&&bulan==1) {
		cout << "Zodiakmu : Capricorn";
	}	
		return 0;} 
