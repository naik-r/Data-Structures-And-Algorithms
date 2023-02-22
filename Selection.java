import java.io.*;
import java.util.Scanner;
class Selection {
  public static void main(String args[]) {
 	int n,i,j,temp,min;
     int a[]=new int[100];
 	System.out.println("ENTER THE SIZE OF AN ARRAY:");
     Scanner s =new Scanner(System.in); 
     n=s.nextInt();
  	System.out.println("ENTER THE ELEMENTS OF AN ARRAY\n");
 	for(i=0;i<n;i++) {
 		a[i]=s.nextInt();
	 }
	for(i=0;i<n-1;i++) {
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])
			min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
}
System.out.println("THE ELEMNETS AFTER SELECTION SORTING:\n");
for(i=0;i<n;i++) {
 		System.out.println(a[i]);
 }
	 }
}