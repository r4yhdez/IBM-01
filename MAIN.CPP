#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;
  int main ()  {
  	// layer keamanan pertama
  	    srand(time(0));
  	    
  	    int angkai[6];
  	    
  	    for (int jjj = 0; jjj < 6; jjj++) {
  	    	
  	    	angkai[jjj] = rand() % 100 + 1;
		  }
  	
  	
  		system("COLOR 2");
  		int hyy;
 	cout<<"           =============================================="<<endl;
 	cout<<"                    HURY LOCKED BY CAITRONIADEV"    <<endl;
	cout<<"           =============================================="<<endl;
	 for ( int jjj = 0; jjj < 6; jjj++) {
	cout<< "                   input this code: "<< angkai [jjj] <<endl;
	 
	cin>> hyy;

	if (hyy == angkai[jjj]) {
      
      cout<<"LOADING";
      for (int kwrty = 0; kwrty <  8; kwrty++ ) {
      	cout<< ".";
      	sleep(1);
	  }

	 // layer keamanan ke 2
	 system("CLS");
 	int one;	
 	system("COLOR 2");
 	cout<<"           =============================================="<<endl;
 	cout<<"                    HURY LOCKED BY CAITRONIADEV"    <<endl;
	cout<<"           =============================================="<<endl;
	 cout<<"\n                  silahkan masukan kode AUTENTIKASI     " <<endl;
	 cin>> one;
	        cout<<"LOADING";
	     for (int kw = 0; kw < 5; kw++) {
	     	cout<<".";
	     	sleep(1);
		 }
	      
	      // logika
	 if ( one == 1403) {
	 	system("CLS");
	 	int oops;
    cout<<"           =============================================="<<endl;
 	cout<<"                        WELCOME BACK MISTER              " <<endl;
	cout<<"           =============================================="<<endl;
	cout<<"                 Tekan 1 jika ingin melihat password     "<<endl;
	cout<<"                 Tekan 2 jika ingin melihat password     "<<endl;
	
	cin>> oops;
	  for (int llm = 0; llm < 5; llm++) {
	  	if  (oops == 1) {
	  		char pesan;
	  	    system("CLS");
	cout<<"           =============================================="<<endl;
 	cout<<"                                   v1                    " <<endl;
	cout<<"           =============================================="<<endl;
	cout<<"                   apa pesan  yang mau di sampaikan?  "<<endl;
	cin>> pesan;
	cout<<" pesan sukes di simpan "<<endl;
}   else if (oops == 2 ) {

     system("CLS");
         int rrj = 1;
      	 while (rrj == 1) {
      	 	cout<<"           AKSES ANDA DI TOLAK!!"<<endl;
		   }
	} else {
        	system("CLS");
        	cout<<"EROR FORM USER"<<endl;
        }
        
		  }
	
	  }
	  else {
	 	system("CLS");
	 	cout<<"KODE SALAH"<<endl;
	 }
}
   else {
   	system("CLS");
   	cout<<" EROR INPUT AGAIN " <<endl;
   }
	return 0;
 	  
 }
}
