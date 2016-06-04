/*
    codechef.com - Practice problem - Easy 
    Life, the Universe and Everything  - http://www.codechef.com/problems/TEST
    Language - Java 
    Juliana Correa
*/
 
import java.io.*;

class Test {

    public static void main (String [] args) { 
        try {
            final Integer ANSWER = 42;
            Integer att;
            BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
            
            while (true) {
                 att = Integer.parseInt(buf.readLine());
                 if (att != ANSWER) {
           	    System.out.println(att);
             	 } else {
           	    break;
           	}
            }
	} catch (IOException e) {
            System.err.println(e.getMessage());
	} 
    } 
}
