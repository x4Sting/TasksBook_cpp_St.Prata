# TasksBook_cpp_St.Prata
My solution to tasks from the book  -  C++ Primer Plus St. Prata

Task_02_01 - Write a C++ program that displays your name and address (or if you value your privacy, a fictitious name and address).

Task_02_02 - Write a C++ program that asks for a distance in furlongs and converts it to yards. (One furlong is 220 yards.)

Task_02_03 - Write a C++ program that uses three user-defined functions (counting main() as one) and produces the following output:
			 
    Three blind mice
    Three blind mice
    See how they run
    See how they run

Task_02_04 - Write a program that asks the user to enter his or her age.The program then should display the age in months:
             
    Enter your age: 29
    Your age in months is 384
    
Task_02_05 - Write a program that has main() call a user-defined function that takes a Celsius temperature value as an argument and then returns the equivalent Fahrenheit value. The program should request the Celsius value as input from the user and display the result, as shown in the following code:
    
    Please enter a Celsius value: 20
    20 degrees Celsius is 68 degrees Fahrenheit.
    // For reference, here is the formula for making the conversion:
    // Fahrenheit = 1.8 × degrees Celsius + 32.0
    
Task_02_06 - Write a program that has main() call a user-defined function that takes a distance in light years as an argument and then returns the distance in astronomical units. The program should request the light year value as input from the user and display the result, as shown in the following code:
    
    Enter the number of light years: 4.2
    4.2 light years = 265608 astronomical units.
    // 1 light year = 63,240 astronomical units
    
Task_02_07 - Write a program that asks the user to enter an hour value and a minute value.The main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:

    Enter the number of hours: 9
    Enter the number of minutes: 28
    Time: 9:28

Task_03_01 - Write a short program that asks for your height in integer inches and then converts your height to feet and inches. Have the program use the underscore character to
indicate where to type the response.Also use a const symbolic constant to represent the conversion factor.

Task_03_02 - Write a short program that asks for your height in feet and inches and your weight in pounds. (Use three variables to store the information.) Have the program report your body mass index (BMI).To calculate the BMI, first convert your height in feet and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute your BMI by dividing your mass in kilograms by the square of your height in meters. Use symbolic constants to represent the various conversion factors.

Task_03_03 - Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that then displays the latitude in decimal format.There are 60 seconds of arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic constants.You should use a separate variable for each input value.A sample run should look like this:

	Enter a latitude in degrees, minutes, and seconds:
	First, enter the degrees: 37
	Next, enter the minutes of arc: 51
	Finally, enter the seconds of arc: 19
	37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
	
Task_03_04 - Write a program that asks the user to enter the number of seconds as an integer value (use type long, or, if available, long long) and that then displays the equivalent time in days, hours, minutes, and seconds. Use symbolic constants to represent the number of hours in the day, the number of minutes in an hour, and the number of seconds in a minute.The output should look like this:

	Enter the number of seconds: 31600000
	31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
	
Task_03_05 -  Write a program that requests the user to enter the current world population and the current population of the U.S. (or of some other nation of your choice). Store the information in variables of type long long. Have the program display the percent that the U.S. (or other nation’s) population is of the world’s population.The output should look something like this:

	Enter the world's population: 6898758899
	Enter the population of the US: 310783781
	The population of the US is 4.50492% of the world population.
	
Task_03_06 - Write a program that asks how many miles you have driven and how many gallons of gasoline you have used and then reports the miles per gallon your car has gotten. Or, if you prefer, the program can request distance in kilometers and petrol in liters and then report the result European style, in liters per 100 kilometers.

Task_03_07 - Write a program that asks you to enter an automobile gasoline consumption figure in the European style (liters per 100 kilometers) and converts to the U.S. style of miles per gallon. Note that in addition to using different units of measurement, the U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19 mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.
