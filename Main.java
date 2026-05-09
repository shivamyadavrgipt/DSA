/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main
{
	public static void main(String[] args) {
	    pattern1(5);
	}
	//pattern pattern1
	
// 	public static void pattern1(int n){
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<n;j++){
// 	            System.out.print("*");
// 	        }
// 	        System.out.println();
// 	    }

    
    // -----Pattern 2
    
    // 	public static void pattern1(int n){
	   // for(int i=0;i<=n;i++){
	   //     for(int j=0;j<=i;j++){
	   //         System.out.print("*");
	   //     }
	   //     System.out.println();
	   // }
	   
	   //---------------Pattern 3
	   //public static void pattern1(int n){
	   // for(int i=0;i<=n;i++){
	   //     for(int j=0;j<i;j++){
	   //         System.out.print(j+1);
	   //     }
	   //     System.out.println();
	   // }
	   
	   //---------------Pattern
	   //public static void pattern1(int n){
	   // for(int i=0;i<n;i++){
	   //     for(int j=0;j<=i;j++){
	   //         System.out.print(i+1);
	   //     }
	   //     System.out.println();
	   // }
	   
	   //---------------Pattern 5
	   //public static void pattern1(int n){
	   // for(int i=n;i>=0;i--){
	   //     for(int j=0;j<i;j++){
	   //         System.out.print("*");
	   //     }
	   //     System.out.println();
	   // }
	   
	   //---------------Pattern6
	   //public static void pattern1(int n){
	   // for(int i=n;i>=0;i--){
	   //     for(int j=0;j<i;j++){
	   //         System.out.print(j+1);
	   //     }
	   //     System.out.println();
	   // }
	   
	   
	   	   ///---------------Pattern7
	   //public static void pattern1(int n){
	   // for(int i=0;i<=n;i++){
    //         //space
    //         for(int j=0;j<=n-i;j++){
    //             System.out.print(" ");
    //         }
    //         //star
    //         for(int j=0;j<2*i-1;j++){
    //             System.out.print("*");   
    //         }
    //         System.out.println();
	   // }
	    
	   ///---------------Pattern8
	   //public static void pattern1(int n){
	   // for(int i=n;i>=0;i--){
    //         //space
    //         for(int j=0;j<=n-i;j++){
    //             System.out.print(" ");
    //         }
    //         //star
    //         for(int j=0;j<2*i-1;j++){
    //             System.out.print("*");   
    //         }
    //         System.out.println();
	   // }
	   
	   //---------------Pattern9
	   //	public static void pattern1(int n){
	   // for(int i=0;i<=n;i++){
    //         //space
    //         for(int j=0;j<=n-i;j++){
    //             System.out.print(" ");
    //         }
    //         //star
    //         for(int j=0;j<2*i-1;j++){
    //             System.out.print("*");   
    //         }
    //         System.out.println();
	   // }
    //         for(int i=n;i>=0;i--){
    //         //space
    //         for(int j=0;j<=n-i;j++){
    //             System.out.print(" ");
    //         }
    //         //star
    //         for(int j=0;j<2*i-1;j++){
    //             System.out.print("*");   
    //         }
    //         System.out.println();
	   // }
	   
	   
	   //---------------Pattern10
	   //public static void pattern1(int n){
	   // for(int i=0;i<=n;i++){
	   //     for(int j=0;j<=i;j++){
	   //         System.out.print("*");
	   //     }
	   //     System.out.println();
	   // }
	   // //----------------lower
	   // for(int i=0;i<=n;i++){
	   //     for(int j=n-1;j>=i;j--){
	   //         System.out.print("*");
	   //     }
	   //     System.out.println();
	   // }
	   
	   //---------------Pattern11
// 	   public static void pattern1(int n) {
//      for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             if((i+j)%2==0){
//                 System.out.print(" "+1);    
//             }else{
//                 System.out.print(" "+0);
//             }
//         }
//         System.out.println();
//       }
// 	}    
    
    //---------------Pattern12
    // public static void pattern1(int n) {
    // int spaces=2*(n-1);
    // for(int i = 1; i <= n; i++) {
    //     //left
    //     for(int j = 1; j < i; j++) {
    //         System.out.print(j);
    //     }
    //     //spaces
    //     for(int j=0;j<spaces;j++){
    //         System.out.print(" ");
    //     }
    //     //right
    //     for(int j=i-1;j>=1;j--){
    //         System.out.print(j);
    //     }
    //     spaces-=2;
    //     System.out.println();
    // }
    // }
    
    ///---------------Pattern13
    
    // public static void pattern1(int n) {

    // // upper triangle
    // int l=1;
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         System.out.print(l++ +" ");
    //     }
    //     System.out.println();
    //     }
    // }
    
    //---------------Pattern14
    // public static void pattern1(int n) {
    // char ch='A';
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 0; j <i; j++) {
    //         System.out.print((char)(ch+j));
    //     }
    //     System.out.println();
    //     }
    // }
    
    //---------------Pattern15
    
    // public static void pattern1(int n) {
    // char ch='A';
    // for(int i = n; i >0; i--) {
    //     for(int j = 0; j <i; j++) {
    //         System.out.print((char)(ch+j));
    //     }
    //     System.out.println();
    //     }
    // }
    
    
    //---------------Pattern16
    
    // public static void pattern1(int n) {
    // char ch='A'-1;
    // for(int i = 1; i <= n; i++) {
    //     ch++;
    //     for(int j = 0; j <i; j++) {
    //         System.out.print((char)(ch));
    //     }
    //     System.out.println();
    //     }
    // }
    
    //---------------Pattern17
    
// public static void pattern1(int n) {
//     for(int i = 0; i < n; i++) {

//         // spaces
//         for(int j = 0; j < n - i - 1; j++) {
//             System.out.print(" ");
//         }

//         // increasing letters
//         for(char ch = 'A'; ch <= 'A' + i; ch++) {
//             System.out.print(ch);
//         }

//         // decreasing letters
//         for(char ch = (char)('A' + i - 1); ch >= 'A'; ch--) {
//             System.out.print(ch);
//         } 

//         System.out.println();
//     }
// }

    //---------------Pattern18
    
    // public static void pattern1(int n){
    //     for(int i=1;i<=n;i++){
    //         char ch=(char)('E'-i+1);
    //         for(int j=1;j<=i;j++){
    //             System.out.print((char)ch++);
    //         }
    //         System.out.println();
    //     }
    // }
    
    //---------------Pattern19
    // public static void pattern1(int n){
    //     for(int i=0;i<n;i++){
    //         //left star
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         //spaces
    //         for(int j=0;j<2*i;j++){
    //             System.out.print(" ");
    //         }
    //         //rightmost
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         System.out.println();
    //     }
        
    //     for(int i=n-1;i>=0;i--){
    //         //left star
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         //spaces
    //         for(int j=0;j<2*i;j++){
    //             System.out.print(" ");
    //         }
    //         //rightmost
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         System.out.println();
    //     }
    // }
    
    
    //---------------Pattern20
    
    // public static void pattern1(int n){
    //     for(int i=n-1;i>=0;i--){
    //         //left star
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         //spaces
    //         for(int j=0;j<2*i;j++){
    //             System.out.print(" ");
    //         }
    //         //rightmost
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         System.out.println();
    //     }
    //     //lower part(strart i with 1 as we want to skip one extra line)
    //     for(int i=1;i<=n-1;i++){
    //         //left star
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         //spaces
    //         for(int j=0;j<2*i;j++){
    //             System.out.print(" ");
    //         }
    //         //rightmost
    //         for(int j=n-1;j>=i;j--){
    //             System.out.print("*");
    //         }
    //         System.out.println();
    //     }
    // }
    
    //---------------Pattern21
    
// public static void pattern1(int n){

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 ||j==n){
//                 System.out.print("*");
//             }else{
//                 System.out.print(" ");
//             }
//         }
//         System.out.println();
//     }
// }

///---------------Pattern22

public static void pattern1(int n){
    n=4;
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int top=i;
            int bottom=size-i-1;
            int left=j;
            int right=size-j-1;
            int min=Math.min(Math.min(left,right),Math.min(top,bottom));
            System.out.print(n-min);
        }
        System.out.println();
    }
    }
}