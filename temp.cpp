#include <iostream>
#include <windows.h>
using namespace std;
//program pengkonversi suhu(rankine,reamur,fahrenheit,kelvin dan celcius)
int main(){
 system ("COLOR F6");
 cout<<"selamat datang di konversi suhu!"<<endl;
 cout<<"================================"<<endl;
 cout<<"tugas fisika bu ineu yang dibuat oleh Annisa Puspitasari"<<endl;
 cout<<"kelas x rpl 1 di smkn 4 bandung"<<endl<<endl;

 char a;
 cout<<"mulai konversi?(y/t): ";
 cin>>a;
 system ("COLOR 2F");
 if(a=='y'){
 //konversi
 lagi:
 int b,d;
 float F,R,RK,K,C,e,g,i,k;
  cout<<"konversi apa yang anda pilih? atau suhu apakah yang diketahui? (celcius[1] dan lainnya[2]): ";
  cin>>b;
  if(b==1){
   system ("COLOR 2F");
    cout<<"masukkan nilai celcius: ";
    cin>>C;
    F=C*1.8+32;
    R=C*0.8;
    RK=1.8*(C+491.67);
    K=C+273.15;
    cout<<"nilai suhu fahrenheit: "<<F<<endl;
    cout<<"nilai suhu reamur: "<<R<<endl;
    cout<<"nilai suhu rankine: "<<RK<<endl;
    cout<<"nilai suhu kelvin: "<<K<<endl;
  }else if(b==2){
  system ("COLOR 3F");
  cout<<"pilih menu: "<<endl;
  cout<<"1. fahrenheit || 2. reamur || 3. rankine || 4.Kelvin"<<endl;
  cout<<"masukkan pilihan anda(1/2/3/4): ";
  cin>>d;
  switch(d){
   case 1:
     cout<<"masukkan nilai fahrenheit: ";
     cin>>e;
     R=(e-32)*0.4;
     RK=e+459.67;
     K=(e-32)*5/9+273.15;
     C=(e-32)*0.6;
     cout<<"nilai Reamur-mu adalah "<<R<<endl;
     cout<<"nilai Rankine-mu adalah "<<RK<<endl;
     cout<<"nilai Kelvin-mu adalah "<<K<<endl;
     cout<<"nilai Celcius-mu adalah "<<C<<endl;
     break;
   case 2:
    system ("COLOR 4F");
     cout<<"masukkan nilai reamur: ";
     cin>>g;
     F=2.25*g+32;
     RK=g*2.25+491.67;
     K=g+273.15;
     C=1.25*g;
     cout<<"nilai fahrenheit-mu adalah "<<F<<endl;
     cout<<"nilai rankine-mu adalah "<<RK<<endl;
     cout<<"nilai Kelvin-mu adalah "<<K<<endl;
     cout<<"nilai Celcius-mu adalah "<<C<<endl;
     break; 
   case 3:
    system ("COLOR 5F");
     cout<<"masukkan nilai rankine: ";
     cin>>i;
     F=(i-491.67)+32;
     R=(i-491.67)*0.4;
     K=(i-491.67)/1.8+273.15;
     C=(i-491.67)/1.8;
     cout<<"nilai fahrenheit-mu adalah "<<F<<endl;
     cout<<"nilai reamur-mu adalah "<<R<<endl;
     cout<<"nilai Kelvin-mu adalah "<<K<<endl;
     cout<<"nilai Celcius-mu adalah "<<C<<endl;
     break;
   case 4:
    system ("COLOR 6F");
     cout<<"masukkan nilai kelvin: ";
     cin>>k;
     F=(k-273.15)*1.8+32;
     R=(k-273.15)*0.8;
     RK=(k-273.15)*1.8+491.67;
     C=k-273.15;
     cout<<"nilai fahrenheit-mu adalah "<<F<<endl;
     cout<<"nilai reamur-mu adalah "<<R<<endl;
     cout<<"nilai rankine-mu adalah "<<RK<<endl;
     cout<<"nilai Celcius-mu adalah "<<C<<endl;
     break;
  }
  }else{
   system ("COLOR 82");
   cout<<"konverter suhu buatan belum tersedia sekarang.. saya masih terus mencoba melengkapi program ini^^";
  }
 }else if(a=='t'){
  system ("COLOR 64");
  cout<<"terimakasih telah mencoba running program ini, anda bisa kirim saran dan kritik atau tanggapan anda mengenai program ini ke instagram @nisa.codelifings";
 }else{
  system ("COLOR 91");
  cout<<"kesalahan pada input anda, kemungkinan besar dari huruf kapital/karakter/simbol.. coba lagi:)";
 }
 char knv;
 cout<<"konversi lagi?(y/t): ";
 cin>>knv;
 if(knv=='y'){
  goto lagi;
 }else{
  cout<<"program berakhir dengan ketik apapun.."<<endl;
 }
 
 
 system ("COLOR 9F");
 cin.get();
 return 0;
}
