#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int sayi1,sayi2,secim,sonuc;
  
    printf("1-Kare Alan ve Cevre Hesabi: \n");
    printf("2-Girilen Sayinin Kupu: \n");
    printf("3-Dikdortgende Cevre ve Alan Hesabi: \n");
    printf("4-Isleminizi Secin: ");
    scanf("%d",&secim);
    
    switch(secim)
    {
    	case 1:
    		printf("Karenin birinci kenari: ");
    		scanf("%d",&sayi1);
    		printf("Karenin ikinci kenari: ");
    		scanf("%d",&sayi2);
    		printf("Karenin Alani: %d\n",(sayi1*sayi2));
    		printf("Karenin Cevresi: %d\n",(sayi1*4));
    		break;
    		case 2:
    		    printf("Sayiyi Giriniz: ");
    		    scanf("%d",&sayi1);
				printf("Sayinin Kupu: %d\n",(sayi1*sayi1*sayi1));
    			break;
    		case 3:
			    printf("Uzun Kenari Giriniz: ");
			    scanf("%d",&sayi1);
				printf("Kisa Kenari Giriniz: ");
				scanf("%d",&sayi2);
				printf("Dikdortgende Cevresi: %d\n",2*(sayi1+sayi2));
			    printf("Dikdortgen Alani: %d\n",(sayi1*sayi2));
				break;
                default:printf("Hatali Sayi Girdiniz!"); 
   }
    
    
    
	
    //int i,j,sayi;
	
	//printf("Sayi Girin: ");
	//scanf("%d",&sayi);
	
	//for(i=1;i<=sayi;i++)
	//{
		//for(j=1;j<=i;j++)
		//{
			//printf("*");
		//}
		//printf("\n");
	//}
	
	return 0;
}
