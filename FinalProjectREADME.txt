Name: Everett Hale

File Requirements:
To run this code you will need to download 'FinalProjectMain.cpp','FinalProjectFunctions.hpp',and 'FinalProjectHeader.hpp'.  The file 'FinalProjectCities..txt' is also included but this file is not necessary, it just has all of the information that is included in the program initially.

Project Summary:
This program is a travel assistant program that will help you plan a vacation.  Initially the cities that are in the program are Seattle, Los angeles, new orleans, miami, new york, london, and paris, whith the user starting in denver.  Each city has 2 or three 'attractions' that help categorize the different locations and the user can sort them based on what attractions they are looking for.  Each city also has around 5 hotel options that the user can choose from.  The user can insert or delete a city if they wish as well as add a hotel option to an existing city.  The user can also change which city they are starting in.  Once the user has decided which city they would like to go to the program will find the shortest path for the user to go on and it will display the number of miles traveled as well as any layovers at airports.  The program will then display the hotel options that the user can choose from.

How To Run:
This program is menu based so it is relatively self explanatory.  It will ask for any necessary inputs from the user.

Dependencies:
The only dependency is the .hpp files.

System Requirements:
This program can be run on any system that can compile and run c++ code.

Open issues/Bugs:
If the user inputs anything other than a number for certain inputs that ask for a number it will crash the code; this is due to the stoi function in c++.  The program will also crash if you create a city without any connections, although this makes sense because you wouldn't be able to travel to a city that isn't connected to anything.  Adding two cities without any hotels will cause the program to crash on exit but that scenario should not be expected in this program because the user has no reason to add a city without any hotels because then they wouldn't be able to travel to it.
