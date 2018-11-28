#ifndef CONTACTHELPERS_H
#define CONTACTHELPERS_H
#pragma once
/* ------------------------------------------------------------------
Name:
Student number:
Email:
Section:
Date:
---------------------------------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------------------------------
Description: This header file modularizes general helper functions to
			 help reduce redundant coding for common repetitive tasks.
---------------------------------------------------------------------*/

// HINT: 
// You will most likely want to include this header file
// in other files of the project since it provides general 
// helper functions that can be used throughout.


//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// Clear the standard input buffer
void clearKeyboard(void);

// pause:
void pause(void);

// getInt:
int getInt(void);

// getIntInRange:
int getIntInRange(int a, int b);

// yes:
int yes(void);

// menu:
int menu(void);

// contactManagerSystem:
void contactManagerSystem(void);
#endif