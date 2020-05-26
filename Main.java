package javacoding;
import java.util.*;
public class Main {
private static Scanner sc;

public static void main(String[] args) {
sc = new Scanner(System.in);
int n = sc.nextInt();
int i, k = 0;
int a[] = new int[n];
ArrayList<Integer> al = new ArrayList<Integer>();
for (i = 0; i < n; i++) {
a[i] = sc.nextInt();
}
for (i = 0; i < n; i++) {
if (a[i] != 10) {
al.add(a[i]);
}
}
if (al.size() < n) {
k = n - al.size();
for (i = 0; i < k; i++) {
al.add(0);
}
}
System.out.println(al);
int b[] = new int[n];
for (i = 0; i < n; i++) {
b[i] = al.get(i);
System.out.println(b[i]);
}
}
 
}