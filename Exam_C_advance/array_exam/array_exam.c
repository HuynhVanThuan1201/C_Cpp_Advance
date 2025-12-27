/*************************************************
 * Bai tap thuc hanh Mang & Ma tran (11 -> 30)
 * Chuan bai thi lap trinh C
 *************************************************/

#include <stdio.h>

/*====================== BAI 11 ======================
 Nhap 5 so nguyen, in tong
====================================================*/
void bai11() {
    int a[5], sum = 0;
    for(int i=0;i<5;i++) {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("Tong = %d\n");
}

/*====================== BAI 12 ======================
 Tim gia tri lon nhat trong mang
====================================================*/
void bai12() {
    int n=5, a[5], max;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    max = a[0];
    for(int i=1;i<n;i++)
        if(a[i] > max) max = a[i];
    printf("Max = %d\n", max);
}

/*====================== BAI 13 ======================
 Dem so chan va le
====================================================*/
void bai13() {
    int n=5,a[5],chan=0,le=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]%2==0) chan++;
        else le++;
    }
    printf("Chan=%d, Le=%d\n",chan,le);
}

/*====================== BAI 14 ======================
 Dao nguoc mang
====================================================*/
void bai14() {
    int n=5,a[5];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n/2;i++) {
        int t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}

/*====================== BAI 15 ======================
 Tim phan tu lon nhat va vi tri
====================================================*/
void bai15() {
    int n=5,a[5],max,pos;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    max=a[0]; pos=0;
    for(int i=1;i<n;i++)
        if(a[i]>max) {max=a[i]; pos=i;}
    printf("Max=%d tai vi tri %d\n",max,pos);
}

/*====================== BAI 16 ======================
 Kiem tra x co trong mang khong
====================================================*/
void bai16() {
    int n=5,a[5],x,found=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++)
        if(a[i]==x) found=1;
    printf(found ? "Co\n":"Khong\n");
}

/*====================== BAI 17 ======================
 Tinh trung binh cong
====================================================*/
void bai17() {
    int n=5,a[5],sum=0;
    for(int i=0;i<n;i++) {scanf("%d",&a[i]); sum+=a[i];}
    printf("TBC = %.2f\n",(float)sum/n);
}

/*====================== BAI 18 ======================
 Gop hai mang A va B thanh C
====================================================*/
void bai18() {
    int A[3],B[3],C[6];
    for(int i=0;i<3;i++) scanf("%d",&A[i]);
    for(int i=0;i<3;i++) scanf("%d",&B[i]);
    for(int i=0;i<3;i++) C[i]=A[i];
    for(int i=0;i<3;i++) C[i+3]=B[i];
    for(int i=0;i<6;i++) printf("%d ",C[i]);
    printf("\n");
}

/*====================== BAI 19 ======================
 Sap xep mang tang dan (Bubble sort)
====================================================*/
void bai19() {
    int n=5,a[5];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j]) {
                int t=a[i]; a[i]=a[j]; a[j]=t;
            }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}

/*====================== BAI 20 ======================
 Xoa phan tu tai vi tri k
====================================================*/
void bai20() {
    int n=5,a[6],k;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int i=k;i<n-1;i++) a[i]=a[i+1];
    n--;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}

/*====================== BAI 21 ======================
 Chen phan tu vao vi tri bat ky
====================================================*/
void bai21() {
    int n=5,a[10],k,x;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d%d",&k,&x);
    for(int i=n;i>k;i--) a[i]=a[i-1];
    a[k]=x; n++;
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}

/*====================== BAI 22 ======================
 Tim phan tu xuat hien nhieu nhat
====================================================*/
void bai22() {
    int n=5,a[5],maxCount=0,val;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++)
            if(a[i]==a[j]) cnt++;
        if(cnt>maxCount){maxCount=cnt; val=a[i];}
    }
    printf("Gia tri %d xuat hien %d lan\n",val,maxCount);
}

/*====================== BAI 23 ======================
 Loai bo phan tu trung lap
====================================================*/
void bai23() {
    int n=5,a[5],b[5],m=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        int ok=1;
        for(int j=0;j<m;j++)
            if(a[i]==b[j]) ok=0;
        if(ok) b[m++]=a[i];
    }
    for(int i=0;i<m;i++) printf("%d ",b[i]);
    printf("\n");
}

/*====================== BAI 24 ======================
 Dao thu tu tung nhom 3 phan tu
====================================================*/
void bai24() {
    int a[6];
    for(int i=0;i<6;i++) scanf("%d",&a[i]);
    for(int i=0;i<6;i+=3) {
        int t=a[i];
        a[i]=a[i+2];
        a[i+2]=t;
    }
    for(int i=0;i<6;i++) printf("%d ",a[i]);
    printf("\n");
}

/*====================== BAI 25 ======================
 Tong phan tu o vi tri chan
====================================================*/
void bai25() {
    int n=5,a[5],sum=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        if(i%2==0) sum+=a[i];
    printf("Tong = %d\n",sum);
}

/*====================== BAI 26 ======================
 Tong duong cheo chinh ma tran 3x3
====================================================*/
void bai26() {
    int a[3][3],sum=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<3;i++) sum+=a[i][i];
    printf("Tong = %d\n",sum);
}

/*====================== BAI 27 ======================
 Tong duong cheo phu ma tran 3x3
====================================================*/
void bai27() {
    int a[3][3],sum=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<3;i++) sum+=a[i][2-i];
    printf("Tong = %d\n",sum);
}

/*====================== BAI 28 ======================
 Kiem tra ma tran doi xung
====================================================*/
void bai28() {
    int a[3][3],ok=1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[i][j]!=a[j][i]) ok=0;
    printf(ok?"Doi xung\n":"Khong doi xung\n");
}

/*====================== BAI 29 ======================
 Cong hai ma tran 3x3
====================================================*/
void bai29() {
    int A[3][3],B[3][3],C[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            C[i][j]=A[i][j]+B[i][j];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ",C[i][j]);
        printf("\n");
    }
}

/*====================== BAI 30 ======================
 Nhan hai ma tran 3x3
====================================================*/
void bai30() {
    int A[3][3],B[3][3],C[3][3]={0};
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            for(int k=0;k<3;k++)
                C[i][j]+=A[i][k]*B[k][j];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) printf("%d ",C[i][j]);
        printf("\n");
    }
}

/*====================== MAIN ======================*/
int main() {

    printf("Bai 11: Nhap 5 so, tinh tong\n"); bai11();
    printf("Bai 12: Tim max trong mang\n"); bai12();
    printf("Bai 13: Dem chan va le\n"); bai13();
    printf("Bai 14: Dao nguoc mang\n"); bai14();
    printf("Bai 15: Max va vi tri\n"); bai15();
    printf("Bai 16: Kiem tra phan tu x\n"); bai16();
    printf("Bai 17: Trung binh cong\n"); bai17();
    printf("Bai 18: Gop hai mang\n"); bai18();
    printf("Bai 19: Sap xep tang dan\n"); bai19();
    printf("Bai 20: Xoa phan tu tai k\n"); bai20();
    printf("Bai 21: Chen phan tu\n"); bai21();
    printf("Bai 22: Phan tu xuat hien nhieu nhat\n"); bai22();
    printf("Bai 23: Loai bo trung lap\n"); bai23();
    printf("Bai 24: Dao nhom 3\n"); bai24();
    printf("Bai 25: Tong vi tri chan\n"); bai25();
    printf("Bai 26: Tong cheo chinh\n"); bai26();
    printf("Bai 27: Tong cheo phu\n"); bai27();
    printf("Bai 28: Ma tran doi xung\n"); bai28();
    printf("Bai 29: Cong ma tran\n"); bai29();
    printf("Bai 30: Nhan ma tran\n"); bai30();

    return 0;
}
