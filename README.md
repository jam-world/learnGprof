# learnGprof
learn how to use gprof

# Environment
I use the the aws server to test the program, here is the system information:

DISTRIB_ID=Ubuntu
DISTRIB_RELEASE=14.04
DISTRIB_CODENAME=trusty
DISTRIB_DESCRIPTION="Ubuntu 14.04.2 LTS"
NAME="Ubuntu"
VERSION="14.04.2 LTS, Trusty Tahr"
ID=ubuntu
ID_LIKE=debian
PRETTY_NAME="Ubuntu 14.04.2 LTS"
VERSION_ID="14.04"
HOME_URL="http://www.ubuntu.com/"
SUPPORT_URL="http://help.ubuntu.com/"
BUG_REPORT_URL="http://bugs.launchpad.net/ubuntu/"

# question 1
see the makefile

# question 2
I modified the origin program to run the initial part and multiply part for 1000 times, and now we can see that the multiply fountion only take 0.01 seconds, while the initial function take up 8.39 seconds.

## modified program
see mul.c

## result
see profForMul, just cat profForMul

# question 3
this program is obviously memory bounds, it takes almost 100% of its running time to initialize the matrix.

# question 4
## meaning of the value
real means the real excuting time for the program
sys means the time takes by the system
user means the time takes by the user program

## the reason for the user's time to be different from the real time
User time is only the actual CPU time used in excuting the process. Other process and time the process spends blocked do not count toward this figure.

## how to fix
We can use the clock() function to count the running time of the program, I modified the program and stored in the dotpruoductCountTime.c.

# question 5
I modified the program and stored it in dotpruoductCountTimeLocate.c

# question 6





