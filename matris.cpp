#include <iostream> //cout ve endl
using namespace std;

#define ROWS 3
#define COLS 3

void matrisDoldur(double ** m)
{
  
  for(int j=0;j<ROWS;j++){
     for(int k=0;k<COLS;k++){
         cin>>m[j][k];
                }
       }

}

void matrisYazdir(double ** q1)
{
 for(int i=0;i<ROWS;i++){
 	
   for(int j=0;j<COLS;j++){
      cout<<(q1[i][j])<<"   ";
   		 }
      cout<<endl;
  	}
}

void matrisleriTopla(double **mat1, double **mat2, double **sonucMat )
{
  for(int i=0;i<ROWS;i++){
    for(int j=0;j<COLS;j++){
         sonucMat[i][j]=mat1[i][j]+mat2[i][j];
 		}	
  	}
}
int main()
{
	double ** matris1, ** matris2, ** sonucMatris ;
  
  
	matris1= new double *[ROWS];
	for (int i=0;i<ROWS;i++){
	matris1[i]=new double[COLS];
	}
	matris2= new double *[ROWS];
	for (int i=0;i<ROWS;i++){
		matris2[i]=new double[COLS];
	}
	
	sonucMatris= new double *[ROWS];
	for (int i=0;i<ROWS;i++){
		sonucMatris[i]=new double[COLS];
}
    cout<<"1.matrisi giriniz:"<<endl;	
	matrisDoldur(matris1);
	cout<<"2.matrisi giriniz:"<<endl;
	matrisDoldur(matris2);
	cout<<"sonuc matrisi:"<<endl;	
	matrisleriTopla(matris1, matris2, sonucMatris);
	matrisYazdir (sonucMatris);
	return 0;
	
	for(int i=0;i<ROWS;i++)
		delete []matris1[i] ;
    delete []matris1 ;
	
	for(int i=0;i<ROWS;i++)
		delete []matris2[i] ;
    delete []matris2 ;
	
   	  
   	for(int i=0;i<ROWS;i++)
		delete []sonucMatris[i] ;
    delete []sonucMatris ;
	
}
