/*
 * Ali Fırat Özel
 * kullanıcının girdiği sayıya göre şekil çizen program
 * 
 */
#include <iostream>

using namespace std;

/* düz üçgen bastıran metod */
void duzUcgen(int deger)
{
	int n = (deger + 1) / 2;	// boyut
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n-1; j++)
			cout << " " << " ";

		for(int j = 0; j <= 2 * i; j++)
			cout << "*" << " ";
		
		cout << endl;
	}
}

/*ters üçgen bastıran metod */
void tersUcgen(int deger)
{
	int n = (deger + 1) / 2;	//boyut
	int i = 0, j = 1, k = 0;

	while(i < n) {
		while(j <= k){
			cout << " " << " ";
			++j;
		}
		j = 1;
		++k;
        
		while(j <= 2*(n-i)-1){
			cout << "*" << " ";
			++j;
		}
		j = 1;
		++i;
		cout << endl;
	}
	i = 0;
}

/*karo şekil bastıran metod */
void elmas(int deger)
{
	duzUcgen(deger);
	tersUcgen(deger);
}

int main()
{
	int swtch = 0, boyut = 0;
	
	cout << "Lutfen Yapmak Istediginiz Islemi Seciniz" << endl;
	cout << "1: Duz Ucgen" << endl << "2: Ters Ucgen";
	cout << endl << "3: Elmas" << endl << "0: Cikis" << endl;
	cout << "----------------------------------------" << endl;
	cin >> swtch;
	
	if(swtch < 0 || swtch > 3){		//uygun değeri yazmak için 3 deneme şansı veriyor
		for(int r = 0; r < 3; r++){
			if(swtch >= 0 && swtch <= 3)
				break;
			else if(r == 2)
				return -1;
				
			cout << "Lutfen Gecerli Bir Sayi Girin " << 2-r << " Deneme Sansiniz Kaldi" << endl;
			cin >> swtch;
		}
	}
	if(swtch == 0)
		return 0;
	
	cout << "Lutfen Sekil Boyutunu Girin" << endl;
	cin >> boyut;
	
	if(swtch == 1 || swtch == 2){
		if(boyut < 3 || boyut > 15 || boyut % 2 != 1){		//uygun değeri yazmak için 3 deneme şansı veriyor
			for(int r = 0; r < 3; r++){
				if(boyut >= 3 && boyut <= 15 && boyut % 2 == 1)
					break;
				else if(r == 2)
					return -1;
				
				cout << "Lutfen Gecerli Bir Sayi Girin " << 2-r << " Deneme Sansiniz Kaldi" << endl;
				cin >> boyut;
			
			}
		}
			if(swtch == 1)
				duzUcgen(boyut);
			else
				tersUcgen(boyut);
	}
	else
	{
		if(boyut < 5 || boyut > 15 || boyut % 2 != 1){		//uygun değeri yazmak için 3 deneme şansı veriyor
			for(int r = 0; r < 3; r++){
				if(boyut >= 5 && boyut <= 15 && boyut % 2 == 1)
					break;
				else if(r == 2)
					return -1;
				
				cout << "Lutfen Gecerli Bir Sayi Girin " << 2-r << " Deneme Sansiniz Kaldi" << endl;
				cin >> boyut;
			}
		}
		elmas(boyut);
	}

	return 0;
}
