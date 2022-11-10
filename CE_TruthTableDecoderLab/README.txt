Majid Reza Barghi 2022 
Computer Science Lab Technician, Ohlone College 
Version 1.0 

README
============================Purpose==============================

The purpose of this lab is to introduce first year cs students to some hardware and a direct application of truth tables by using the arduino to drive a 8 segment led display. The arduino will act as a decoder to take the binary input to display a decimal  representation with the 8 segment output. Students will have to create their own truth tables and will visibly see both binary and decimal representation of their data. 

============================NOTES================================

- There are two seperate Arduino files 
	- The one that is completed is for Teacher use and Demo 	Purposes
	- The one that is Labeled Demo is for Student use, since the 	truth table portion is not included


- After wiring is done and the beginer code is loaded, the Binary output section should work. Each button turns on a individual LED, pressing the register button (far left button) will save the binary input to the arduino. THE 8 SEGMENT DISPLAY SHOULD DISPLAY NO LIGHT ON

-You can turn on certain parts of the display by updating the myLED array that stores our logical statements. for instance, 
myLED = (0,0,0,0,0,0,0,1) should turn on our decimal, if we wired everything correctly. LOGICAL STATEMENTS NEED TO BE PLACED HERE. 

- The Lab can be upgraded to control the 8 segment display with shift Registers.

- This Lab is difficult students for first year students must understand: 
	
	Truth Tables 
	Creating Logical Statements from Truth Table 
	Counting in Binary 

- Students do not need to wire the board themselves, however it is a wonderful experience and builds more understanding of what the system is doing. 

- To make the Lab Easier use premade truth tables for the students to solve i.e., they should have a total of 7 truth tables to solve excluding the decimal. 

	TruthTable1 ---> Segment A on the dislpay   

=================SUGGESTIONS FOR MORE VERIETY ON THE LAB­­­=========

- This can illustrate the the power of shift registers, since we will only need 3 wires opposed to the 8 we use to brute force drive our LED display. 

- There is a four bit input, therefore if you need the lab to be longer have them do remaining digits 10-15 as a hexadecimal representation. Although it just makes the lab longer, not more difficult just more work for the students to do. 

They would need to edit the byte array that stores the truth table sollutions.   

===========================Updates===============================

- 11/10/22 Cleaned up the Schematics, Cleaned up code and compilation errors, added more Documentation.