#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#define MAX 8
typedef struct
{
 int data[MAX];
 int head;
 int tail;
} Queue;
Queue antrian;
void Create()
{
 antrian.head=antrian.tail=-1;
}
int IsEmpty()
{
 if(antrian.tail==-1)
 return 1;
 else
 return 0;
}
int IsFull()
{
 if(antrian.tail==MAX-1)
 return 1;
 else
 return 0;
}
void Enqueue(int data)
{
 if(IsEmpty()==1)
 {
 antrian.head=antrian.tail=0;
 antrian.data[antrian.tail]=data;
 printf("%d sudah dimasukan",antrian.data[antrian.tail]);
 } else
 if(IsFull()==0)
 {
 antrian.tail++;
 antrian.data[antrian.tail]=data;
 printf("%d sudah dimasukan",antrian.data[antrian.tail]);
 }
}
int Dequeue()
{
 int i;
 int e = antrian.data[antrian.head];
 for(i=antrian.head; i<=antrian.tail-1;i++)
 {
 antrian.data[i]=antrian.data[i+1];
 }
 antrian.tail--;
 return e;
}
void Clear()
{
 antrian.head=antrian.tail=-1;
 printf("CLEAR");
}
void Tampil()
{
 if(IsEmpty()==0)
 {
 for(int i=antrian.head;i<=antrian.tail;i++)
 {
 printf(" %d",antrian.data[i]);
 }
 }else printf("data kosong!\n");
}
main()
{
 int pil;
 int data;
 Create();
 do{
 clrscr();
 cout<<endl<<endl;
 cout<<" =============================="<<endl;
 cout<<" =\t PROGRAM QUEUE ="<<endl;
 cout<<" =============================="<<endl;
 cout<<" = 1. ENQUEUE = "<<endl;
 cout<<" = 2. DEQUEUE = "<<endl;
 cout<<" = 3. TAMPIL = "<<endl;
 cout<<" = 4. CLEAR = "<<endl;
 cout<<" = 5. EXIT ="<<endl;
 cout<<" =============================="<<endl;
 cout<<" Masukan Pilihan : ";cin>>pil;
 switch(pil)
 {
 case 1: clrscr();
 cout<<"Masukan Data : ";cin>>data;
 Enqueue(data);
 break;
 case 2: clrscr();
 Dequeue();
 break;
 case 3: clrscr();
 Tampil();
 break;
 case 4: clrscr();
 Clear();
 break;
 case 5:
 clrscr();
 //123456789012345678901234567890//
 gotoxy(35,9);printf(" Present By : ");
 gotoxy(28,10);printf("============================");
 gotoxy(28,11);printf("= Freza Nugraha =\n");
 gotoxy(28,12);printf("= Ovin Awal K =\n");
 gotoxy(28,13);printf("= Venny Anggraini =\n");
 gotoxy(28,14);printf("= Sucia Febriyanti =\n");
 gotoxy(28,15);printf("= Nuri Amalia Putri =\n");
 gotoxy(28,16);printf("= Bregyta septiane sitorus =\n");
 gotoxy(28,17);printf("= Fika Astriyani =\n");
 gotoxy(28,18);printf("============================");
 gotoxy(36,19);printf(" 12.2A.01");
 break;
 }
 getch();
 }
 while(pil!=5);
 return 0;
}