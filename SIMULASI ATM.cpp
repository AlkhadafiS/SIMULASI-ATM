#include <iostream>
#include <stdlib.h>
using namespace std;
	int pengurangan(int s, int t){
	return s-t;
}
int main(){
//s itu saldo, t itu transfer/tarik tunai
int s=1000000, q, t, pi, pin_atm, pin_saya=290303, trf=1, sandi_baru;
string d[4]={"1. penarikan", "2. transfer", "3. cek saldo", "4. ubah sandi"};
string b;
string tanggal_lahir;
string jawaban;
string benar;
string salah;
//pin saya 290303
cout<<"======================================================================================================================="<<endl;
cout<<"                                            selamat datang di bank mandiri"<<endl;
cout<<"======================================================================================================================="<<endl;
cout<<"masukan pin anda : ";
cin>>pin_atm;
cout<<"\n";
menu:
if(pin_atm==pin_saya){
	cout<<"nama nasabah: alkhadafi";
cout<<"\n";
cout<<"\n";
	for(int i=0; i<4; i++){
	cout<<d[i]<<endl;
	cout<<"\n";
}
	cout<<"silahkan tentukan pilihan anda : ";
cin>>pi;
system ("CLS");
if(pi==1){
	cout<<"silahkan masukan jumlah uang yang ingin ditarik : Rp";
}else if(pi==2){
	cout<<"silahkan masukan jumlah uang yang ingin ditransfer : Rp";
}else if(pi==3){
	cout<<"saldo anda berjumlah : Rp"<<s<<endl;
		goto menu;
}else if(pi==4){
	cout<<"silahkan masukan tanggal lahir anda! ";
	cin.ignore(1,'\n');
	getline(cin,tanggal_lahir);

	if(tanggal_lahir=="29 maret 2003"){
		cout<<"tanggal lahir benar, silahkan masukan sandi terbaru! ";
		cin>>sandi_baru;
		cout<<"sandi baru anda adalah : "<<sandi_baru<<endl;
		goto menu;
	}else{
		cout<<"tanggal lahir salah!, kartu anda akan tertelan sementara oleh mesin ATM, silahkan hubungi petugas untuk tindakan lebih lanjut";
		cout<<"\n";
		exit(0);
	}
}else{
	cout<<"silahkan coba lagi!";
	cout<<"\n";
	goto menu;
	
}
int arr[trf];
for(q=0;q<trf;q++){
	cin>>arr[q];
	if(arr[q]>s){
		cout<<"maaf saldo anda tidak mencukupi untuk melakukan tindakan ini!";
		cout<<"\n";
		goto menu;
	}else{
		cout<<"apakah jumlah sudah benar "<<arr[q]<<"?     (benar/salah)"<<endl;
	}
	t=arr[q];
}
cin>>jawaban;
if(jawaban=="benar"){
	cout<<"======================================================================================================================="<<endl;
	cout<<"SUKSES"<<endl;
	cout<<"maka sisa saldo anda adalah : "<<pengurangan(s, t)<<endl;
	cout<<"======================================================================================================================="<<endl;
}else if(jawaban=="salah"){
	cout<<"silahkan mencoba lagi";
	cout<<"\n";
	goto menu;
}else{
	cout<<"pilihan salah!";
	cout<<"\n";
	goto menu;
}
cout<<"\n";
cout<<"terima kasih sudah menggunakan bank mandiri!";
cout<<"\n";
	}else {
		cout<<"pin anda salah!"<<endl;
	}
return 0;
}


