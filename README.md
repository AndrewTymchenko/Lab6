Lab6
====

Motor Movement:

The roomba has 6 basic movements. It can move forwards, backwards, left (<45), right (<45), left (>45), and right (>45). 
To turn, the roomba stops one wheel while supplying power to the other. 

Pulse Width Modulation:

The chip will reset if more than 8 volts is supplied the chip. The duty cycle of the PWM is the percent of voltage the motors will see.
To make sure that no more than 8 volts is supplied, a duty cycle of 67% was used. 8/12 * 100 = 67%. TA0.1, TA1.1, and TA0.2 are the three PWMs used in this lab.
TA0.1 controls the left motor,TA1.1 controls the right motor, TA0.2 controls both motors going backwards. 
