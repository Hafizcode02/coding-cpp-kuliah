#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
  char data;
  Node * kiri;
  Node * kanan;
};

int count;

void tambah(Node **root, char databaru) {
  if ((*root) == NULL) {
    Node *baru;
    baru = new Node;
    baru->data = databaru;
    baru->kiri = NULL;
    baru->kanan = NULL;
    (*root) = baru;
    (*root)->kiri = NULL;
    (*root)->kanan = NULL;
    printf("Data telah Dimasukkan");
  } else if (databaru < (*root)->data)
    tambah(&(*root)->kiri, databaru);
  else if (databaru > (*root)->data)
    tambah(&(* root)->kanan, databaru);
  else if (databaru == (*root)->data)
    printf("Data sudah ada!!");
}

void preOrder(Node *root) {
  if (root != NULL) {
    cout << " " << root->data;
    preOrder(root->kiri);
    preOrder(root->kanan);
  }
}

void inOrder(Node *root){
	if	(root != NULL){
     inOrder(root->kiri);
     cout << " " << root->data;
     inOrder(root->kanan);
   }
}

void postOrder(Node *root){
	if	(root != NULL){
     postOrder(root->kiri);
     postOrder(root->kanan);
     cout << " " << root->data;
   }
}

void search(Node **root, char cari) {
  if ((*root) == NULL) {
    printf("Maaf,Data tidak ditemukan!");
  } else if (cari < (*root)->data)
    search(&(*root)->kiri, cari);
  else if (cari > (*root)->data)
    search(&(*root)->kanan, cari);
  else if (cari == (*root)->data)
    printf("Data ditemukan!!!");
}

void hapus(Node **root, char del) {
  if ((*root) == NULL) {
    printf("Data tidak ada!!");
  } else if (del < (*root)->data)
    hapus(&(*root)->kiri, del);
  else if (del > (*root)->data) {
    hapus(&(*root)->kanan, del);
  }
  else if (del == (*root)->data) {
    (*root) = NULL;
    printf("Data telah Terhapus");
  }
}

int main() {
  char cari, del;
  int pil, countData, i;
  Node *pohon;
  pohon = NULL;
  do {
    char data;
    system("cls");
    printf(" PROGRAM TREE LANJUTAN \n");
    printf("================================\n");
    printf(" 1. Masukkan Data \n");
    printf(" 2. Transverse \n");
    printf(" 3. Cari \n");
    printf(" 4. Hapus \n");
    printf(" 5. Clear Data \n");
    printf(" 6. Keluar \n");
    printf("================================\n");
    printf("Masukkan Pilihan Anda : ");
    cin >> pil;
    switch (pil) {
    case 1:
    	printf("Berapa Jumlah Data : ");
      cin >> countData;
      for(i = 0; i < countData; i++){
       	printf("\nMasukkan data baru : ");
      	cin >> data;
      	tambah(&pohon, data);
      }
      break;
    case 2:
      printf("\nPreOrder : ");
      if (pohon != NULL) preOrder(pohon);
      else printf("Data masih kosong");
      printf("\ninOrder : ");
      if (pohon != NULL) inOrder(pohon);
      else printf("Data masih kosong");
      printf("\npostOrder : ");
      if (pohon != NULL) postOrder(pohon);
      else printf("Data masih kosong");
      break;

    case 3:
      printf("Cari data : ");
      cin >> cari;
      search(&pohon, cari);
      break;
    case 4:
      printf("Hapus data : ");
      cin >> del;
      hapus(&pohon, del);
      break;
    case 5:
      pohon = NULL;
      printf("Semua data telah terhapus");
      break;
    case 6:
      return 0;
    default:
      printf("Maaf, pilihan Anda Salah");
    }
    getch();
  } while (pil != 7);
}
