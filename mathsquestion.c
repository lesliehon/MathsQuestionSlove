//Problem sloving of http://riddle.arthurluk.net/fortress/math.jpg
//by Leslie Hon @ 19 May 2010 
//1.0
#include <stdio.h>

int main () {
	printf("\n\n\n\n");
	printf("Maths Question-------------------------------------------\n\n");
	printf("  ICQ\n");
	printf("  IQC\n");
	printf("  CQI\n");
	printf("  CQI\n");
	printf("  QIC\n");
	printf("+ QCI\n");
	printf("--------\n");
	printf("  WHAT\n");
	printf("---------------------------------------------------------\n\n");
	printf("The Answer is shown below!!");
	
	
	int i = 0,c=0, q=0;
	int ans;
	int w , h, a , t;
	int answernum =1;

		for(i=0 ; i<10 ; i++){
		for(c=0;c<10;c++){
		for(q=0;q<10;q++){
			
				//Cal the Answer (WHAT)
				ans= ((2*i + 2*c +2*q)*100)+((2*i + 2*c +2*q)*10)+((2*i + 2*c +2*q)*1);	
	
				//拆開4個位
				w= ans/1000;
				h= (ans/100)-(w*10);
				a= (ans-(w*1000)-(h*100))/10;
				t= ans-(w*1000)-(h*100)-(a*10);
	
				//Check Number	
					if (i!=c && c!=q && i!=q && 
						i!=w && i!=h && i!=a && i!=t &&
						c!=w && c!=h && c!=a && c!=t &&
						q!=w && q!=h && q!=a && q!=t &&
						w!=h && w!=a && w!=t &&
						h!=w && h!=a && h!=t &&
						a!=w && a!=h && a!=t &&
						t!=w && t!=h && t!=a)
						{
						printf("\n\nAnswer %d",answernum);
						printf("\nThe Number of I,C,Q is: I=%d C=%d Q=%d", i, c, q);
						printf("\nAnd the W,H,A,T is : W=%d H=%d A=%d T=%d" , w ,h , a , t);
						printf("\nThe Number is %d\n", ans);
							answernum = ++answernum;
						}
			
				}}}
	
	printf("========================\n");
	printf("All answer printout\n\a");
	printf("There have %d Answer\n", answernum-1);
	printf("========================\n");

}
