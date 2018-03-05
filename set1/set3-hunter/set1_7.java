import java.util.*;
public class set1_7 
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        for(int i=0;i<arr.length;i++){
            if(i%2==0){
                if(arr[i]%2==1){
                    System.out.print(arr[i]+" ");
                }
            }
            else{
                if(arr[i]%2==0){
                    System.out.print(arr[i]+" ");
                }
            }
        }
    }
}
