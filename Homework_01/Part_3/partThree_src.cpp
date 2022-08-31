#include <iostream>
#include <chrono>
#include <unistd.h>
#include <vector>
#include <stdlib.h>
int main(int ac, char *av[]){
    long long num = 0;
    std::vector<unsigned long long> vect;
    
    if(ac <= 1){
        std::cout<<"No input entered. Exitting program."<<std::endl;
        return -1;
    }else{
        num = std::atoi(av[1]);      
    }

    std::cout<<"Entered num is: " << num << std::endl;

    //Store number in Vector
    for(int i = 0; i < num; i++){
        long int lrand48(void);
        long int randNum = lrand48()%num;
        std::cout<<"randNum: " << randNum << std::endl;
        vect.push_back(randNum);
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    long long sum = 0;

    for(int val : vect){
        sum += val;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;
    std::cout<<"elapsed time is: " << elapsed.count() <<"\nSum is: " << sum <<std::endl;


    return 0;
}