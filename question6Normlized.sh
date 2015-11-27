# !/bin/bash
for (( N=100 ; N<=10000 ; N=N*10 ))
do
        ./dotproductCountTimeGraphNormized "$N"
done
