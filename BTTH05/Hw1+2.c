#include <stdio.h>
#include <string.h>

struct SinhVien {
	char ten[50];
	int maSV;
	float diem;
};
// Ham de nhap thong tin sinh vien 
void nhapThongTin (struct SinhVien *sv) {
	printf ("Nhap ten sinh vien : ");
	scanf ("%s", sv->ten);
	printf ("Nhap ma sinh vien : ");
	scanf ("%d", &sv->maSV);
	printf ("Nhap diem sinh vien : ");
	scanf ("%f", sv->diem);
}
// Ham de hien thi thong tin sinh vien 
void hienThiThongTin(const struct SinhVien *sv){
    printf ("Ten: %s\n",sv->ten);
	printf ("Ma SV: %d\n",sv->maSV);
	printf ("Diem: %f\n",sv->diem); 
}
    int main() {
    int n;
    int i;
    
    printf ("Nhap so luong sinh vien: ");
    scanf ("%d",&n);
    
    // Khai bao mang chua thong tin n sinh vien 
    struct SinhVien danhSachSV[n];
    // Nhap thong tin cho tung sinh vien 
    for ( i=0; i < n; i++){
         printf ("\nNhap thong tin cho tung sinh vien thu %d:\n",i + 1);
         nhapThongTin(&danhSachSV[i]);
	}
	// Hien thi thong tin cua tung sinh vien 
	printf ("\nThong tin cua cac sinh vien:\n ");
	for ( i=0; i < n; i++){
		printf("\nSinh vien thu %d:\n,i + 1");
		hienThiThongTin(&danhSachSV[i]);
		
	}
	// Cap nhat thong tin cho sinh vien thu nhat 
	printf ("\nCap nhat thong tin cho sinh vien thu 1:\n");
	nhapThongTin(&danhSachSV[0]);
	// Hien thi lai cua tung sinh vien sau khi cap nhat 
	printf ("\nThong tin sau khi cap nhat:\n");
	for ( i = 0; i < n; i++){
	hienThiThongTin(&danhSachSV[i]);
	}
	return 0;
}
#include <stdio.h>
#include <string.h>

struct Student {
	char id[10];
	char name[30];
	char sex[4];
	char homeTown[30];
};
int i,n;
voiditializeAlist(struct Student list[],int n){
	for (i=0;i<n;i++){
		printf("Thong tin sinh vien thu %d\n",i+1);
		getchar();
		printf("Ma sinh vien :");
		fgets(list[i].id,10,stdin);
		printf("Ho va ten:");
		fgets(list[i].name,30,stdin);
		printf("Gioi tinh :");
		fgets(list[i].sex,4,stdin);
		printf("Que quan :");
		fgets(list[i].homeTown,30,stdin);
		printf("\n");
		
		
		
	}
}
voidviewListOfStudent(struct Student list[],int n){
	for (i=0;i<n;i++){
		printf("Thong tin sinh vien thu %d\n",i+1);
		getchar();
		printf("Ma sinh vien : %s",list[i].id);
		printf("Ho va ten : %s",list[i].name);
		printf("Gioi tinh : %s",list[i].sex);
		printf("Que quan : %s",list[i].homeTown);
		printf("\n");
	}
}
void editlnformation(struct Student list[],int i){
	printf("Nhap thong tin moi cho sinh vien\n");
	printf("Ma sinh vien:");
	getchar();
	fgets(list[i].id,10,stdin);
	printf("Ho va ten:");
	fgets(list[i].name,30,stdin);
	printf("Gioi tinh:");
	fgets(list[i].sex,4,stdin);
	printf("Que quan:");
	fgets(list[i].homeTown,30,stdin);
}
void sortlnformation(struct Student list[],int n){
	int j;
	for (i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (strcmp(list[i].name,list[j].name)>0) {
				struct Student tempo = list[i];
				list[i] = list[j];
				list[j] = tempo;
		}
	}
}
}
int searchlnformation (struct Student list[],char searchld[],int n){
	for (i=0;i<n;i++){
		if(strcmp(list[i].id,searchld)==0){
			return i;
		}
	}
	return -1;
}
int main(){
	int choice;
	char searchld[10];
	struct Student list[100];
	printf("Nhap so thanh vien trong lop:");
	scanf("%d",&n);
	printf("\n");
do{
	printf("----------------------------\n");
	printf("CHUONG TRINH QUAN LI SINH VIEN\n");
	printf("----------------------------\n");
	printf("1.Khoi tao danh sach\n");
	printf("2.Xem danh sach sinh vien\n");
	printf("3.Sua thong tin sinh vien\n");
	printf("4.Sap xep danh sach sinh vien\n");
	printf("5.Tim kiem thong tin sinh vien\n");
	printf("0.Thoat chuong trinh\n");
	printf("----------------------------\n");
	printf("Moi chon chuc nang:");
	scanf("%d",&choice);
	printf('\n');
	switch (choice){
		case1:
			intializeAlist(list, n);
			break;
			case2:
viewListOfStudent(list, n);
            break;
        case3:
        	printf("Nhap ma sinh vien can sua:");
        	getchar();
        	fgets(searchld,10,stdin);
        	
        	int foundlndex = searchlnformation(list, searchld,n);
        	if(foundlndex !=-1){
        		editlnformation(list,foundlndex);
			} else {
				printf ("Khong tim thay ma:%s",searchld);
			}
			break;
			case4:
				sortlnformation(list,n);
				printf("Da sap xep lai danh sach.\n");
				break;
				case5:
					printf("Nhap ma sinh vien can tim:");
					getchar();
					fgets(searchld,10,stdin);
					
					foundlndex = searchlnformation(list,searchld, n);
					if(foundlndex !=-1){
						printf("Ma sinh vien:%s",list[i].id);
						printf("Ho va ten:%s",list[i].name);
						printf("Gioi tinh:%s",list[i].sex);
						printf("Que quan:%s",list[i].homeTown);
					} else {
						printf("Khong tim thay sinh vien ma :%s",searchld);
					}
					break;
				default:
					printf("Ket thuc chuong trinh\n");
					break;	
	}
} while (choice !=0);
  return 0; 
}
