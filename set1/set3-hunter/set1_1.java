import java.util.*;
public class set1_1{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        TreeSet<Integer> ts=new TreeSet<>();
        TreeSet<Integer> ts1=new TreeSet<>();
        for(int i=0;i<n;i++){
            if(ts.add(arr[i])){
                
            }
            else{
                ts1.add(arr[i]);
            }
        }
        for(int x:ts1){
            System.out.print(x+" ");
        }
    }
}
