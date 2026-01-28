# Police and Thief

Chef discovered that his secret recipe has been stolen. He immediately informs the police of the theft.
It is known that the policeman and thief move on the number line. You are given that:

The initial location of the policeman on the number line is X and his speed is 2 units per second.  
The initial location of the thief on the number line is Y and his speed is 1 unit per second.

Find the minimum time (in seconds) in which the policeman can catch the thief.  
Note that, the policeman catches the thief as soon as their locations become equal and the thief will try to evade the policeman for as long as possible.

# Mathemetiacal Technique
Example with numbers:  
Let's say Policeman at X=0, Thief at Y=10  
Distance to cover = |10 - 0| = 10  
Relative speed = 1 unit/sec  
Time = Distance / Relative speed = 10 / 1 = 10 seconds

# Realtime Scenario
At time t=0: P=0, T=10 (distance=10)  
After 1 sec: P=2, T=11 (distance=9)  
After 2 sec: P=4, T=12 (distance=8)  
After 3 sec: P=6, T=13 (distance=7)  
...  
After 10 sec: P=20, T=20 (distance=0) ✓

Both give the same answer!

# Bottom line
We don't need to use realtime scenario because the relative speed concept gives us the direct answer instantly!
