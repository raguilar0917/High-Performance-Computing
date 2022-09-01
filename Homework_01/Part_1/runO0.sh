cd build_O0
for i in {100000, 500000, 1000000, 5000000,  10000000, 50000000, 100000000}
do
srun ./partOneSrc $i
echo ' '
done
cd -