#include<stdio.h>

void hesap(int tc,int*onuncu_rakam,int*onbirinci_rakam)
{

        int temp = tc,i=1,tekler=0,ciftler=0;
        while (temp>0)
        {

                if(i%2==1) tekler +=temp%10;
                else ciftler += temp%10;
                temp /=10;
                i++;
        }
            *onuncu_rakam=(tekler * 7 + ciftler * 9)%10;
            *onbirinci_rakam=(tekler + ciftler + *onuncu_rakam) %10;
}
int main(int argc,char const *argv[])
{
        int tc,onuncu_rakam,onbirinci_rakam;

        x:
    {
            printf("\nLutfen T.C Kimlik numaranizin ilk 9 hanesini giriniz ve bizde diger ikisini bulalim:)\n");

            scanf("%d",&tc);

            if(tc < 100000000 || tc >  999999999)
            {
                    printf("9 haneli bir numara girmelisiniz\n");

                    goto x;

            }
    }
    hesap(tc,&onuncu_rakam,&onbirinci_rakam);
    printf("T.C Kimlik Numarasi : %d%d%d",tc,onuncu_rakam,onbirinci_rakam);
}
