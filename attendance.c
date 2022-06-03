#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int so_bh, so_bn, pt_so_bn, dlt, dth, btl, td, pt_td;
	printf( "Nhap vao so buoi hoc, so buoi nghi\n");
	scanf("%d%d", &so_bh,&so_bn);
	pt_so_bn=so_bn*100/(so_bh+so_bn);
	
	if (pt_so_bn>=25){
		printf("Hoc lai");
	}
	else {
			printf( "Nhap vao diem Ly thuyet, Thuc hanh, Bai tap lon\n");
	scanf( "%d%d%d", &dlt, &dth,&btl);
	if (dlt>=8){
		printf( "Pass Ly thuye0\n");
	}
	else
		printf( "Fail Ly thuyet\n");

	if (dth>=6){
		printf( "Pass Thuc hanh\n");
	}
	else
	printf( "Fail Thuc hanh\n");
	
	if (btl>=4){
		printf( "Pass Bai tap lon\n");
	}
	else
	printf( "Fail Bai tap lon\n");
	}

	
	return 0;
}
