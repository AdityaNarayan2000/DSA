import java.util.*;
// import java.lang.*;
import java.io.*;

// class Codechef {
class Test {
	public static void main(String[] args) throws IOException {
		try (Scanner sc = new Scanner(System.in)) {
			int b = sc.nextInt();
			int []arr = new int[b];
			for (int i = 0; i < arr.length; i++) {
				// arr[i] = sc.nextInt();
				arr[i] = 0;
			}

			for (int i = 0; i < arr.length; i++) {
				// System.out.print(i);
				for (int j = 0; j < arr.length; j++) {
					for (int k = 0; k < args.length; k++) {
						
						System.out.print(i+j+k);
					}
				}
				System.out.println();
			}
		}































	// 	try {
	// 		int T = sc.nextInt();
	// 		int var = 0, n = 0, temp = 0;
			
	// 		for (int i = 0; i < T; i++) {
	// 			ArrayList<Integer> arrl = new ArrayList<>();
	// 			ArrayList<Integer> arrlnew = new ArrayList<>();
	// 			int flag = 0;
	// 			n = sc.nextInt();
	// 			for (int j = 0; j < n; j++) {
	// 				temp = sc.nextInt();
	// 				arrl.add(temp);
	// 			}
				
	// 			Collections.sort(arrl, Collections.reverseOrder());
				
	// 			for (int j = 1; j < arrl.size(); j++) {
	// 				if (arrl.get(j) == arrl.get(j - 1)) {
	// 					var = arrl.get(j);
	// 					arrlnew.add(var);
	// 					arrl.remove(j--);
	// 				}
	// 			}
	// 			Collections.sort(arrlnew);
	// 			for (int j = 1; j < arrlnew.size(); j++) {
	// 				if (arrlnew.get(j) == arrlnew.get(j - 1)) {
	// 					flag++;
	// 				}
	// 			}
	// 			if (flag > 0) {
	// 				System.out.print("-1");
	// 			} else {
	// 				for (int k : arrlnew) {
	// 					System.out.print(k + " ");
	// 				}
	// 				for (int k : arrl) {
	// 					System.out.print(k + " ");
	// 				}
	// 			}System.out.println();
	// 		}
	// 	} catch (Exception e) {
	// 		// System.out.println(e);
	// 	}
	// 	sc.close();
	}
}