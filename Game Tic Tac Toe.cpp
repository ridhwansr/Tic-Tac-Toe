/* NAMA ANGGOTA KELOMPOK : 1. RIDHWAN SHODIQ RAMADHAN 21.12.2028
						   2. AULIA PUTRI FIRDHAUSYA  21.12.2027
 						   3. JAHNAWI KESIANATA       21.12.2021
						   4. DEVI ANISKA P 		  21.12.2046*/

#include <iostream>

using namespace std;

char kotak[9] = {'1','2','3','4','5','6','7','8','9'};

void papan()
{
    system("cls");
    cout << "\n";
    cout << " *******                       ******* \n ";
	cout << "   ******   ===============   ******   \n ";
	cout << "        >>> SELAMAT  DATANG <<<        \n ";
	cout << "        |    DI PERMAINAN     |        \n ";
	cout << "        >>> TIC   TAC   TOE <<<        \n ";
	cout << "   ******   ===============   ******   \n ";
	cout << " *******                       ******* \n ";
    cout << " \n ";
    cout << " \n ";

    cout << " Pemain 1 (X)  -  Pemain 2 (O)" << endl << endl;
    cout << endl;
    
	cout << "       _______ _______ _______ " << endl;
	cout << "      |       |       |       |" << endl;
    cout << "      |       |       |       |"<< endl;
    cout << "      |   "<< kotak[0] <<"   |   "<< kotak[1] <<"   |   "<< kotak[2] <<"   |  "<< endl;
	cout << "      |       |       |       |" << endl;
    cout << "      |_______|_______|_______|" << endl;
    cout << "      |       |       |       |" << endl;
    cout << "      |       |       |       |" << endl;
    cout << "      |   "<< kotak[3] <<"   |   "<< kotak[4] <<"   |   "<< kotak[5] <<"   |   " << endl;
	cout << "      |       |       |       |" << endl;
    cout << "      |_______|_______|_______|" << endl;
    cout << "      |       |       |       |" << endl;
    cout << "      |       |       |       |" << endl;
    cout << "      |   "<< kotak[6] <<"   |   "<< kotak[7] <<"   |   "<< kotak[8] <<"   |   " << endl;
	cout << "      |       |       |       |" << endl;
    cout << "      |_______|_______|_______|" << endl << endl;

}

int skor()
{
    if (kotak[0] == kotak[1] && kotak[1] == kotak[2])
        return 1;
        
    else if (kotak[0] == kotak[3] && kotak[3] == kotak[6])
        return 1;
        
    else if (kotak[0] == kotak[4] && kotak[4] == kotak[8])
        return 1;
        
    else if (kotak[1] == kotak[4] && kotak[4] == kotak[7])
        return 1;
        
    else if (kotak[2] == kotak[5] && kotak[5] == kotak[8])
        return 1;
        
    else if (kotak[2] == kotak[4] && kotak[4] == kotak[6])
        return 1;
        
    else if (kotak[3] == kotak[4] && kotak[4] == kotak[5])
        return 1;
        
    else if (kotak[6] == kotak[7] && kotak[7] == kotak[8])
        return 1;
        
    else if (kotak[0] != '1' && kotak[1] != '2' && kotak[2] != '3' 
                && kotak[3] != '4' && kotak[4] != '5' && kotak[5] != '6' 
                && kotak[6] != '7' && kotak[7] != '8' && kotak[8] != '9')
        return 0;
    
    else
        return -1;
}


int main()
{
	int pemain = 1,hasil,pilih;

    char garis;
    do
    {
        papan();
        pemain=(pemain%2)?1:2;

        cout << "\n  Pemain " << pemain << ", silahkan masukkan nomor pilihan Anda -->  ";
        cin >> pilih;

        garis=(pemain == 1) ? 'X' : 'O';

        if (pilih == 1 && kotak[0] == '1')
            kotak[0] = garis;
            
        else if (pilih == 2 && kotak[1] == '2')
            kotak[1] = garis;
            
        else if (pilih == 3 && kotak[2] == '3')
            kotak[2] = garis;
            
        else if (pilih == 4 && kotak[3] == '4')
            kotak[3] = garis;
            
        else if (pilih == 5 && kotak[4] == '5')
            kotak[4] = garis;
            
        else if (pilih == 6 && kotak[5] == '6')
            kotak[5] = garis;
            
        else if (pilih == 7 && kotak[6] == '7')
            kotak[6] = garis;
            
        else if (pilih == 8 && kotak[7] == '8')
            kotak[7] = garis;
            
        else if (pilih == 9 && kotak[8] == '9')
            kotak[8] = garis;
            
        else
        {
            cout<<"  Pilihan Angka Sudah Dipilih ";

            pemain--;
            cin.ignore();
            cin.get();
        }
        hasil=skor();

        pemain++;
    }while(hasil==-1);
    papan();
    if(hasil==1){
    	cout<<"\n     *****  =============  *****\n";
    	cout<<"        >>>               <<<\n";
		cout<<"         | PEMAIN "<<--pemain<<" MENANG |\n";
		cout<<"        >>>               <<<\n";
		cout<<"     *****  =============  *****\n";
	}
    else{
        cout<<"\n    >>                          <<\n";
        cout<<"      >>                      <<\n";
		cout<<"        >>  PERMAINAN DRAW  <<\n";
		cout<<"      >>                      <<\n";
		cout<<"    >>                          <<\n";
	}
	
	return 0;
}
