/*
    codechef.com - Practice problem - Easy
    ATM - http://www.codechef.com/problems/HS08TEST
    Language - Java
    Juliana Correa
*/

import java.io.*;

class Hs08test {

    public static void main (String [] args) { 
        try {
        
            String[] in = new BufferedReader(new InputStreamReader(System.in)).readLine().split(" ");
            Integer wd = Integer.parseInt(in[0]);
            Double bal = Double.parseDouble(in[1]);

            if (wd % 5 == 0 && wd + 0.5 <= bal) {
                bal -= wd + 0.5;
            } 
   	    System.out.println(bal);

	} catch (IOException e) {
            System.err.println(e.getMessage());
	} 
    } 
}
