/*
 * Class: CMSC203 46519
 * Instructor:Farnaz Eivazi
 * Description: create a program which suggests fixes to internet connectivity problems
 * Due: 6/23/2022
 * Platform/compiler:eclipse
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   vhuhwavho Todani
*/
import java.util.Scanner;
public class WiFiDiagnosis {
	public static void main(String[] args) {
		 final String programmerName="Vhuhwavho Todani";
		 String input;
		 System.out.println("If you have a problem with internet connectivity, this WiFi Diagnosis might work.\n");
		 System.out.println("First step: reboot your computer Are you able to connect with the internet? (yes or no)");
		 //initialize keyboard for reading no/yes input
		 Scanner keyboard = new Scanner (System.in);
		 input = keyboard.nextLine();
		 //test if first input is yes or no
		 //input can be yes or no with no case sensitivity, if input is not valid, nothing will be executed.
		 //if statements are nested so if user enters yes, it will be the end of the program and following if statements won't be executed.
		 if(input.equalsIgnoreCase("no")) {
			 System.out.println("Second step: reboot your router\nNow are you able to connect with the internet? (yes or no)");
			 input = keyboard.nextLine();
			 //test if second input is yes or no
			 if(input.equalsIgnoreCase("no")) {			 
				 System.out.println("Third step: make sure the cables to your router are plugged in firmly and your router is getting power\n"
				 		+ "Now are you able to connect with the internet? (yes or no)");
				 input = keyboard.nextLine();
				 //test if third input is yes or no
				 if(input.equalsIgnoreCase("no")) {
					 System.out.println("Fourth step: move your computer closer to your router\nNow are you able to connect with the internet? (yes or no)");
					 input = keyboard.nextLine();
					 //test if fourth input is yes or no
					 if(input.equalsIgnoreCase("no")) {
						 System.out.println("Fifth step: contact your ISP\nMake sure your ISP is hooked up to your router.");
						 
					 }
					 else if(input.equalsIgnoreCase("yes")) {
						 System.out.println("Moving your computer closer to your wifi router seemed to work"); 
					 }
					 
				 }
				 else if(input.equalsIgnoreCase("yes")){
					 System.out.println("Connecting your cables firmly and powering the router seemed to work"); 
				 }
				 
			 }
			 else if(input.equalsIgnoreCase("yes")){
				 System.out.println("Rebooting your router seemed to work");    }
		   
		 }
		 else if(input.equalsIgnoreCase("yes")){
			 System.out.println("Rebooting your computer seemed to work");}
		 //close scanner as there is no more input
		   keyboard.close();
		   System.out.println("\nProgrammer name: "+programmerName);
		}
}
