#include <iostream>
#include <chrono>
#include <unistd.h>

int main(int ac, char *av[]){
    //Stores the command line input
    long long num = 0;

    //checks if you added input if not it will end the program
    if(ac <= 1){
        std::cout<<"No input entered. Exitting program."<<std::endl;
        return -1;
    }else{
        num = std::atoi(av[1]);
    }

    std::cout<<"Entered num is: " << num << std::endl;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    long long sum = 0;
    for(int i = 0; i < num; i++){
        sum += i;
    }
    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;
    std::cout<<"elapsed time is: " << elapsed.count() <<"\nSum is: " << sum <<std::endl;


    return 0;
}