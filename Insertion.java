import java.util.Scanner;
import java.util.*;
class InsertionSort{
 public static void main(String args[]) {
 	int n,i,j,temp,x;
     int a[]  = new int[100]; 
 	System.out.println("ENTER THE SIZE OF AN ARRAY:");
 	Scanner s=new Scanner(System.in);
     n=s.nextInt();
 	System.out.println("ENTER THE ELEMENTS OF AN ARRAY\n");
 	for(i=0;i<n;i++) {
 	
 		a[i]=s.nextInt();
	 }
	System.out.println("THE ELMENTS AFTER BUBBLE SORTING IS:");
    	for(i=1;i<n;i++){
		x=a[i];
		j=i-1;
	while(j>=0&&a[j]>x){
		a[j+1]=a[j];
		j--;
	}a[j+1]=x;
}
	for(i=0;i<n;i++) {
		System.out.println(a[i]);
	}
 }
}