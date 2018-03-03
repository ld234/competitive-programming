import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {

        //Scanner
        Scanner s = new Scanner(System.in);
        String str = s.nextLine();

        int [] evenNum = new int[str.length()];
        int cnt = 0;
        
        for (int i = str.length() - 1; i >= 0; i--) {
            if (Integer.parseInt(Character.toString(str.charAt(i))) % 2 == 0) {
                evenNum [i] = ++cnt;
            }
            else{
                evenNum [i] = cnt ;
            }
        }

        for (int i = 0; i < str.length();i++){
            System.out.print(evenNum[i]+ " ");
        }

    }
}
