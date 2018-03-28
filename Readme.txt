a) PID controller used for this project controls the steering wheel angle and throttle of the car based on the CTE received from simulator.
b) The PID variables in this project have been controlled manually.
c) P portion of the steering angle is the propotional component related to CTE. From manual tuning it has been found that a value of -0.15 is appropriate to keep the car safely within the track. The value is negative because the steering value needs to the opposite of the cte value
d) D portion of the steering angle is the differential component. This value is also negative because the algorithm calculates the differential between previous cte value to current cte value. Hence if differential is negative, that means car is moving to left and needs to turned to the right. For good performance, differential value weight is 3 times more than propotional value
e) The integral value of steering value can be used if there is a bias for the car. In this instance, since there is no bias, the integral term is not used.
f) I have also added a PID controller for throttle value.
g) There is a reference Throttle value which can also be called as a max throttle value which is used to control the speed.
h) P portion of throttle value is determined by taking the absolute value of CTE.
i) D portion of throttle value is determined by taking the absolute value of difference between CTE's.
j) I have also added command line arguments to experiment with different values of PID co-efficients.
k) Please run the program without using command line arguments to get the best performance
l) I have been able to run the car with a max throttle value of 0.6 without getting off road.

