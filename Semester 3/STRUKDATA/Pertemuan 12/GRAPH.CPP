#include <stdio.h>
#include <conio.h>

typedef struct tipeS {
	struct tipeS *Left;
   int INFO;
   struct tipeS *Right;
} simpul;
simpul *P, *First, *Last, *PVertex, *PEdge, *Q, *R, *S;
simpul *PointS[5];

void main(){
	int A[5][5] = {{0,5,0,2,0}, {6,0,3,0,0}, {0,0,0,0,9}, {0,0,12,0,7}, {0,14,0,0,0}};
   char NmS[5] = "ABCDE";
   int I,J;

   I = 0;
   J = 0;
   P = new simpul;
   P->INFO = NmS[0];
   First = P;
   Last = P;
   P->Left = NULL;
   P->Right = NULL;
   PointS[0] = P;
   printf("%c", P->INFO);
   printf(" alamat %d ", PointS[0]);

   for (I = 1; I <= 4; I++){
   	P = new simpul;
      P->INFO = NmS[I];
      Last->Left = P;
      Last = Last->Left;
      P->Left = NULL;
      P->Right = NULL;
      PointS[I] = P;
      printf("\n%c ", P->INFO);
      printf("alamat %d ", PointS[I]);
   }
   printf("\n");

   Q = First;
   for (I = 0; I <= 4; I++){
   	R = Q;
      printf("Vertex %c ..... ", Q->INFO);
      for(J = 0; J <= 4; J++){
      	if(A[I][J] != 0){
         	P = new simpul;
            P->INFO = A[I][J];
            R->Right = P;
            P->Left = PointS[J];
            printf("berhubungan dengan %c: ", P->Left->INFO);
            printf("bobot %d; ", P->INFO);
            P->Right = NULL;
            R = P;
         }
      }
      printf("\n");
      Q = Q->Left;
   }

   getch();

}
