#include <iostream>
using namespace std;

int main()
{

int a;
string bulan, zodiak;

cout<<"Masukkan bulan lahir: ";
cin>>bulan;

cout<<"Masukkan tanggal lahir: ";
cin>>a;




//panjang
if (a>=20 && bulan == "januari" || a<=18 && bulan == "februari"){
	cout<<"Zodiak anda adalah aquarius"<<endl;
}else if (a>=19 && bulan == "februari" || a<=20 && bulan == "maret"){
	cout<<"Zodiak anda adalah pisces "<<endl;
}else if (a>=21 && bulan == "maret" || a<=19 && bulan == "april"){
	cout<<"Zodiak anda adalah aries"<<endl;
}else if (a>=20 && bulan == "april" || a<=20 && bulan == "mei"){
	cout<<"Zodiak anda adalah taurus"<<endl;
}else if (a>=21 && bulan == "mei" || a<=20 && bulan == "juni"){
	cout<<"Zodiak anda adalah gemini"<<endl;
}else if (a>=21 && bulan == "juni" || a<=22 && bulan == "juli"){
	cout<<"Zodiak anda adalah cancer"<<endl;
}else if (a>=23 && bulan == "juli" || a<=22 && bulan == "agustus"){
	cout<<"Zodiak anda adalah leo"<<endl;
}else if (a>=23 && bulan == "agustus" || a<=22 && bulan == "september"){
	cout<<"Zodiak anda adalah virgo"<<endl;
}else if (a>=23 && bulan == "september" || a<=22 && bulan == "oktober"){
	cout<<"Zodiak anda adalah libra"<<endl;
}else if (a>=23 && bulan == "oktober" || a<=21 && bulan == "november"){
	cout<<"Zodiak anda adalah scorpio"<<endl;
}else if (a>=22 && bulan == "november" || a<=21 && bulan == "Desember"){
	cout<<"Zodiak anda adalah sagitarius"<<endl;
}else if (a>=22 && bulan == "desember" || a<=21 && bulan == "januari"){
	cout<<"Zodiak anda adalah capricorn"<<endl;
}



 	

return 0;
}
