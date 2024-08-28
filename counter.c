#include<reg51.h>  // Include 8051 header file in this program. 

unsigned int i,j,k,s;

  unsigned int seg[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,	//Hex code of hxadecimal numbers.
			0x7f,0x6f};

  void delay(unsigned int x){			// creating a delay function.
  		  unsigned int m;
  	for(m=0;m<x;m++); 	
	}

  int main(){
	   while(1){				//Start a infinite loop.
	for(k=0;k<10;k++){		   	
		for(j=0;j<10;j++){	
			for(i=0;i<10;i++){
				for(s=0;s<100;s++) {	  //This is time Sychronization loop.
					P1=0xFE;
					P2=seg[i];
					delay(100);
					P2=0x00;		

					P1=0xFD;
					P2=seg[j];
					delay(100);
					P2=0x00;

					P1=0xFB;
					P2=seg[k];
					delay(100);
					P2=0x00;
								}	
							}
						}	
					}	
				}
		}
