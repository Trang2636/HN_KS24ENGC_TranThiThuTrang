#include<stdio.h>
int main(){
	int arr[100];
	int count =0;
	int sum =0; 
	int i ,j,choice ,n ,value , pos,min,check, start , end ,mid,temp,searchValue;
	do {
		printf("\n==MENU==");
		printf("\n1.Nhap so phan tu va gia tri cho mang\n2.In ra gia tri cac phan tu trong mang ");
		printf("\n3.Dem so luong cac so nguyen to co trong mang\n4.Tim gia tri nho thu 2 trong mang ");
		printf("\n5.Them phan tu vao vi tri ngau nhien trong mang , phan tu moi them vao mang ");
		printf("\n6.Xoa phan tu tai 1 vi tri cu the ");
		printf("\n7.Sap xep mang theo thu tu giam dan (insertion sort )");
		printf("\n8.Cho nguoi dung nhap vao 1 phan tu , tim kem xem phan tu do co ton tai trong mang hay khong(Binary search )");
		printf("\n9.Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu doc nhat co trong mang");
		printf("\n10.Dao nguoc thu tu cac phan tu co trong mang ");
		printf("\n11.Thoat ");
		printf("Moi ban nhap vao lua chon : ");
		scanf("%d",&choice );
		if(choice <0 || choice >11 ){
			printf("Lua chon khong hop le\n ");
			 
		}else{
			switch(choice ){
				case 1 : 
				printf("Moi ban chon so phan tu co trong mang: ");
				scanf("%d",&n);
				for(i=0;i<n;i++){
					printf(" arr[%d]=",i);
					scanf ("%d",&arr[i]); 
				} 
				 break; 
				
				case 2 :  
					for(i=0;i<n;i++){
					printf("%3d ",arr[i]);
				}
				break; 
				case 3 :
				 for (i=0 ;i<n;i++){
				 	if (arr[i]==2||arr[i]==3||arr[i]==5||arr[i]==7||arr[i]%2!=0&&arr[i]%3!=0&&arr[i]%5!=0&&arr[i]%7!=0) {
				 		printf ("%3d",arr[i]); 
				 		count ++; 
				 		sum = sum +count  ; 
				 	
					 }
				 	
				 }
				 	printf("\nso cac so nguyen to trong mang la %d ",sum);  
			break; 
				
				case 4 :
					for(i=0;i<n-1;i++){
				for(j=0; j<n-i-1;j++){
					if(arr[i]>arr[j]){
						int temp = arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
		printf("Gia tri nho t2 trong mang la : %d",arr[n-1]) ;
			printf("\n");
				break; 
				
				case 5: 
				printf ("Moi ban nhap vao phan tu muon them: ") ;
				scanf("%d",&value ); 
				printf ("Moi ban nhap vao vi tri muon them phan tu: ");
				scanf("%d",&pos) ;
				if(pos<0 || pos >n ){
					printf ("Gia tri nhap vao khong hop le\n "); 
				}else{
					for (i=n;i>pos;i--){
						arr[i]=arr[i-1]; 
					
					}
						arr[pos ]=value ;  
					n++; 
				} 
				for(i=0;i<n;i++){
					printf ("%3d",arr[i]); 
				} 
				
			break ;
			
			case 6:
			printf ("Moi ban nhap vao vi tri muon xoa: ");
			scanf ("%d",&pos) ;
			if(pos<0 || pos >n){
				printf ("Vi tri ban nhap khong hop le "); 
			} else {
				for (i=pos ; i<n-1 ;i++){
					arr[i]=arr[i+1]; 
					} 
				n--; 
			} 
			for(i=0;i<n;i++){
					printf ("%3d",arr[i]); 
				}
					break ;
					
				case 7://Sap xep mang theo thu tu gam dan (insertion sort )
					for(int i =1; i<n; i++){
				int key = arr[i];
				int j;
				for(j=i-1; j>=0&&arr[j]>key; j--){
					arr[j+1]= arr[j];
				}
				arr[j+1]=key;
			}
			printf("Cac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<n;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
			break ;
			
			case 8:  
			
			printf ("Moi ban nhap vao phan tu muon kiem tra : "); 
			scanf("%d",&value );
			for(int i =1; i<n; i++){
				int key = arr[i];
				int j;
				for(j=i-1; j>=0&&arr[j]>key; j--){
					arr[j+1]= arr[j];
				}
				arr[j+1]=key;
			}
			 
			
			while(count!=0){
		
			 start = arr[0];
			 end = arr[n];
			 if (start<=end ){
			 	mid = (start + end )/2 ;
				 if (mid<value ){
				 	mid= start +1 ; 
				 }else if(mid>value){
				 	mid = end -1 ; 
					 }		 	
			if (arr[mid]=value) {
				count ++; 
				if (count!=0){
				 printf ("Phan tu co xuat hien trong mang ") ;
			}
			
			}
			}
			 if (count ==0 ){
		 	printf ("Phan tu khong co trong mang ") ;
		 } 
			 } 
			break; 
			case 9: 
			for (i=0;i<n;i++){
			searchValue = arr[i];
			if (searchValue==arr[i]){
				count ++; 
				arr[i+1]=searchValue  ;
			} 
  	} 
  	if (count !=0 ){
  		printf ("") 
	  } 
	  break; 
			case 11 : 
				printf("Thoat khoi chuong trinh.Hen gap lai ban!!! \n");
			default: 
			printf("Lua chon khong hop le. Vui long chon lai");
				} 
			} 
								
							
					
					
						 
						
			
					 
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	}while(choice!=11);
	
	
	
	
	
	
	
	
	
	return 0; 
} 
