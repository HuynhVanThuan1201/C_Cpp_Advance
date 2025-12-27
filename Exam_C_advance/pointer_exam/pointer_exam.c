/*************************************************
 * FILE: pointer_exam.c
 * NOI DUNG: Bai tap con tro (Bai 11 -> Bai 30)
 *************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*====================== BAI 11 ======================
 Khai bao con tro den bien int va in dia chi, gia tri
====================================================*/
void bai11() {
    int x = 10;
    int *p = &x;

    printf("Bai 11:\n");
    printf("Gia tri x = %d\n", x);
    printf("Dia chi x = %p\n", &x);
    printf("Gia tri qua con tro = %d\n\n", *p);
}

/*====================== BAI 12 ======================
 Dung con tro de hoan doi hai so
====================================================*/
void swap_int(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void bai12() {
    int a = 5, b = 10;
    swap_int(&a, &b);
    printf("Bai 12:\n");
    printf("a = %d, b = %d\n\n", a, b);
}

/*====================== BAI 13 ======================
 Dung con tro tinh tong mang
====================================================*/
void bai13() {
    int a[5] = {1,2,3,4,5};
    int *p = a, sum = 0;

    for(int i=0;i<5;i++)
        sum += *(p+i);

    printf("Bai 13:\nTong = %d\n\n", sum);
}

/*====================== BAI 14 ======================
 Ham nhap va in mang bang con tro
====================================================*/
void nhapMang(int *p, int n) {
    for(int i=0;i<n;i++)
        scanf("%d", p+i);
}
void inMang(int *p, int n) {
    for(int i=0;i<n;i++)
        printf("%d ", *(p+i));
    printf("\n");
}
void bai14() {
    int a[3];
    printf("Bai 14:\nNhap mang:\n");
    nhapMang(a,3);
    inMang(a,3);
    printf("\n");
}

/*====================== BAI 15 ======================
 In kich thuoc kieu du lieu qua con tro void
====================================================*/
void bai15() {
    int x;
    void *p = &x;
    printf("Bai 15:\nSize = %zu\n\n", sizeof(*(int*)p));
}

/*====================== BAI 16 ======================
 Gan con tro toi mang va in gia tri
====================================================*/
void bai16() {
    int a[5] = {10,20,30,40,50};
    int *p = a;

    printf("Bai 16:\n");
    for(int i=0;i<5;i++)
        printf("%d ", *(p+i));
    printf("\n\n");
}

/*====================== BAI 17 ======================
 Dem so ky tu trong chuoi
====================================================*/
void bai17() {
    char str[] = "Hello";
    char *p = str;
    int cnt = 0;

    while(*p!='\0') { cnt++; p++; }

    printf("Bai 17:\nSo ky tu = %d\n\n", cnt);
}

/*====================== BAI 18 ======================
 Thay doi gia tri bien goc qua con tro
====================================================*/
void tang(int *x) { (*x)++; }
void bai18() {
    int a = 7;
    tang(&a);
    printf("Bai 18:\na = %d\n\n", a);
}

/*====================== BAI 19 ======================
 So sanh dia chi hai con tro
====================================================*/
void bai19() {
    int a[2] = {1,2};
    int *p1=&a[0], *p2=&a[1];

    printf("Bai 19:\n");
    if(p1<p2) printf("p1 < p2\n\n");
}

/*====================== BAI 20 ======================
 Sao chep chuoi (khong dung strcpy)
====================================================*/
void bai20() {
    char src[]="Hello";
    char dst[20];
    char *s=src, *d=dst;

    while(*s) *d++ = *s++;
    *d='\0';

    printf("Bai 20:\n%s\n\n", dst);
}

/*====================== BAI 21 ======================
 malloc mang 10 phan tu
====================================================*/
void bai21() {
    int *p = (int*)malloc(10*sizeof(int));

    for(int i=0;i<10;i++) p[i]=i+1;

    printf("Bai 21:\n");
    for(int i=0;i<10;i++) printf("%d ", p[i]);
    printf("\n\n");

    free(p);
}

/*====================== BAI 22 ======================
 Tra ve con tro toi phan tu lon nhat
====================================================*/
int* maxPtr(int *a, int n) {
    int *max=a;
    for(int i=1;i<n;i++)
        if(a[i]>*max) max=&a[i];
    return max;
}
void bai22() {
    int a[]={4,9,2};
    printf("Bai 22:\nMax = %d\n\n", *maxPtr(a,3));
}

/*====================== BAI 23 ======================
 Dao nguoc chuoi
====================================================*/
void bai23() {
    char str[]="ABC";
    char *l=str, *r=str+strlen(str)-1;

    while(l<r) {
        char t=*l; *l=*r; *r=t;
        l++; r--;
    }

    printf("Bai 23:\n%s\n\n", str);
}

/*====================== BAI 24 ======================
 Nhap ma tran bang con tro 2 chieu
====================================================*/
void bai24() {
    int r=2,c=2;
    int **a=(int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;i++)
        a[i]=(int*)malloc(c*sizeof(int));

    printf("Bai 24:\nNhap ma tran:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
}

/*====================== BAI 25 ======================
 Cong hai ma tran
====================================================*/
void bai25() {
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{5,6},{7,8}};
    int C[2][2];

    int *pA=&A[0][0], *pB=&B[0][0], *pC=&C[0][0];

    for(int i=0;i<4;i++)
        pC[i]=pA[i]+pB[i];

    printf("Bai 25:\n");
    for(int i=0;i<4;i++) printf("%d ", pC[i]);
    printf("\n\n");
}

/*====================== BAI 26 ======================
 Dung con tro ham chon phep tinh
====================================================*/
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divi(int a,int b){return a/b;}

void bai26() {
    int (*f[])(int,int)={add,sub,mul,divi};
    printf("Bai 26:\n%d\n\n", f[2](3,4));
}

/*====================== BAI 27 ======================
 Mo phong may tinh bang con tro ham
====================================================*/
void bai27() {
    int (*calc[256])(int,int)={0};
    calc['+']=add; calc['-']=sub;
    calc['*']=mul; calc['/']=divi;

    printf("Bai 27:\n3+4 = %d\n\n", calc['+'](3,4));
}

/*====================== BAI 28 ======================
 Linked list co ban
====================================================*/
typedef struct Node {
    int data;
    struct Node *next;
} Node;
void bai28() {
    Node *head=(Node*)malloc(sizeof(Node));
    head->data=10;
    head->next=NULL;

    printf("Bai 28:\n%d\n\n", head->data);
    free(head);
}

/*====================== BAI 29 ======================
 Ma tran dong NxM
====================================================*/
void bai29() {
    int n=2,m=2;
    int **a=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
        a[i]=(int*)malloc(m*sizeof(int));
    printf("Bai 29:\nCap phat ma tran %dx%d thanh cong\n\n",n,m);
}

/*====================== BAI 30 ======================
 Swap tong quat bang void*
====================================================*/
void swap(void *a, void *b, size_t size) {
    char tmp[size];
    memcpy(tmp,a,size);
    memcpy(a,b,size);
    memcpy(b,tmp,size);
}
void bai30() {
    int x=1,y=2;
    swap(&x,&y,sizeof(int));
    printf("Bai 30:\n%d %d\n\n", x,y);
}

/*====================== MAIN ======================*/
int main() {

    printf("=== Bai 11: Khai bao con tro va in dia chi, gia tri ===\n");
    bai11();

    printf("=== Bai 12: Hoan doi hai so bang con tro ===\n");
    bai12();

    printf("=== Bai 13: Tinh tong mang bang con tro ===\n");
    bai13();

    printf("=== Bai 14: Nhap va in mang bang con tro ===\n");
    bai14();

    printf("=== Bai 15: In kich thuoc kieu du lieu qua void* ===\n");
    bai15();

    printf("=== Bai 16: Truy cap mang thong qua con tro ===\n");
    bai16();

    printf("=== Bai 17: Dem so ky tu trong chuoi ===\n");
    bai17();

    printf("=== Bai 18: Thay doi gia tri bien goc ===\n");
    bai18();

    printf("=== Bai 19: So sanh dia chi con tro trong mang ===\n");
    bai19();

    printf("=== Bai 20: Sao chep chuoi bang con tro ===\n");
    bai20();

    printf("=== Bai 21: Cap phat dong mang bang malloc ===\n");
    bai21();

    printf("=== Bai 22: Tim phan tu lon nhat (tra ve con tro) ===\n");
    bai22();

    printf("=== Bai 23: Dao nguoc chuoi ===\n");
    bai23();

    printf("=== Bai 24: Nhap ma tran bang con tro 2 chieu ===\n");
    bai24();

    printf("=== Bai 25: Cong hai ma tran bang con tro ===\n");
    bai25();

    printf("=== Bai 26: Con tro ham cho phep tinh ===\n");
    bai26();

    printf("=== Bai 27: Mo phong may tinh bang con tro ham ===\n");
    bai27();

    printf("=== Bai 28: Trien khai linked list co ban ===\n");
    bai28();

    printf("=== Bai 29: Cap phat va xu ly ma tran dong NxM ===\n");
    bai29();

    printf("=== Bai 30: Swap tong quat su dung void* ===\n");
    bai30();

    return 0;
}

