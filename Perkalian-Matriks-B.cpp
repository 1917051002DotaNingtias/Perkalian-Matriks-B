#include <iostream>
using namespace std;

int i, j, k, a, b, c, d, jumlah = 0;
int hasil[100][100];



void hasill(int *);
void hasill (int *h)
{
  for(j = 0; j < d; j++){
        cout << *(*(hasil+*h)+j) << "\t";
      }
      cout << endl;
}

 int main()

{
    cout << " \t >>>>>>>>>>>PERKALIAN MATRIKS<<<<<<<<<<<<<" << endl << endl;

  int matriks1[100][100];
  int (*pM1)[100] = matriks1;
  int matriks2[100][100];
  int (*pM2)[100] = matriks2;
      
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> a;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> b;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> c;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> d;
    
    if(b != c){

    cout << "Matriks tidak dapat dikalikan satu sama lain"<<endl;

  } else {

    cout << "Masukkan elemen matriks pertama: "<<endl;

    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cin >> *(*(pM1+i)+j);
      }
    }

    cout << "Masukkan elemen matriks kedua: "<<endl;
    for(i = 0; i < c; i++){
      for(j = 0; j < d; j++){
        cin >> *(*(pM2+i)+j);
      }
    }
    
    for(i = 0; i < a; i++){
      for(j = 0; j < d; j++){
        for(k = 0; k < c; k++){
          
          jumlah = jumlah + (*(*( pM1+i)+k)) * (*(*( pM2+k)+j));
        }

        *(*(hasil+i)+j) = jumlah;
        jumlah = 0;
      }
    }
      cout << "Hasil perkalian matriks: "<<endl;
    for(i = 0; i < a; i++){
      hasill (&i);

    }

  }

  return 0;
}


    
