/*
There is a special square room with mirrors on each of the four walls. Except for the southwest corner, 
there are receptors on each of the remaining corners, numbered 0, 1, and 2.

The square room has walls of length p and a laser ray from the southwest corner first meets the east wall 
at a distance q from the 0th receptor.

Given the two integers p and q, return the number of the receptor that the ray meets first.

The test cases are guaranteed so that the ray will meet a receptor eventually.

Example 1:


Input: p = 2, q = 1
Output: 2
Explanation: The ray meets receptor 2 the first time it gets reflected back to the left wall.
Example 2:

Input: p = 3, q = 1
Output: 1
*/

#include<bits/stdc++.h>
using namespace std;

//  <<<--------EXPLANATION---------------->>>

/*
I find it is not easy to follow the logical reasoning behind m and n when it says it is XXX+1 and checking it is even or odd. 
I would recommend following understanding on the notation:
m = the number of rooms after the extension.
n = the number of laser ray lights traveling inside these rooms before it hits corner 0, 1 or 2.

In the example of p=3 and q=2, we can derive m = 2 and n = 3, i.e. there are two floors for the rooms 
and there are 3 light turning back and forth to finally reach a corner.

Now, to decide the condition of m and n when deriving the corner, here are the tricks:
1.1 odd m indicates the light ends up upwards
1.2 even m indicates the light ends up downwards
2.1 even n indicates round-trips and it should end up hitting the left wall
2.2 odd n indicate round-trips+1 trip to the right wall

So we can conclude:
(m % 2 == 0 && n % 2 == 1) return 0; //downwards and right wall
(m % 2 == 1 && n % 2 == 1) return 1; // upwards and right wall
(m % 2 == 1 && n % 2 == 0) return 2; // upwards and left wall
*/

int mirrorReflection(int p, int q) {
        int m = q, n = p;

        // <<---CALCULATING GCD---->>
        while(m % 2 == 0 && n % 2 == 0){
            m /= 2;
            n /= 2;
        }
        if (m % 2 == 0 && n % 2 == 1) return 0;
        if (m % 2 == 1 && n % 2 == 1) return 1;
        if (m % 2 == 1 && n % 2 == 0) return 2;
        return -1;
    
    }