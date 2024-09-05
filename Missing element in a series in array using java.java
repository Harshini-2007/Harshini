
public class Main {
    public static void main(String[] args) {
        int[] a = {11, 14, 16, 19, 22};
        for(int i=0;i<a.length-1;i++){
        int diff =a[i+1]-a[i];
        for(int j=1;j<diff;j++){
            System.out.println(a[i]+j);
        }}}}