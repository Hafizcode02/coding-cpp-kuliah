#include <stdio.h>
#include <conio.h>

struct node
{
	char data;
	node *kiri;
	node *kanan;
};

node *root=NULL;

void Tambahpang(node **root, char data)
{
	if((*root)==NULL){
		node *baru;
		baru= new node;
		baru->data = data;
		baru->kiri = NULL;
		baru->kanan = NULL;
		(*root)=baru;
   }
}

void preorder(node *root)
{
	if(root !=NULL) {
		printf("%c, ", root->data);
		preorder(root->kiri);
		preorder(root->kanan);
   }
}
void inorder(node *root)
{
	if(root !=NULL) {
		inorder(root->kiri);
		printf("%c, ", root->data);
		inorder(root->kanan);
   }
}

void postorder(node *root)
{
	if(root !=NULL) {
		postorder(root->kiri);
		postorder(root->kanan);
		printf("%c, ", root->data);
   }
}

main()
{
	char data;
	printf("\t *Hafiz Caniago - 14520788*\n");
	printf("###################################################\n");
	Tambahpang(&root,data='L');
	Tambahpang(&root->kiri,data='A');
	Tambahpang(&root->kiri->kiri,data='K');
	Tambahpang(&root->kiri->kanan,data='C');
	Tambahpang(&root->kiri->kanan->kiri,data='N');
	Tambahpang(&root->kiri->kanan->kanan,data='I');
	printf("Tampilan secara PreOrder : ");
	preorder(root);
	printf("\nTampilan secara InOrder : ");
	inorder(root);
	printf("\nTampilan secara PostOrder : ");
	postorder(root);
	printf("\n###################################################\n");
	getch();
}