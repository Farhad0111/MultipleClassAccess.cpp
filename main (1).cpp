/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

class Run{
  public:
    int run_distance,rum_time,rum_min_distance;
        public:
            void faru(){
            cin>>run_distance>>rum_time>>rum_min_distance;
            }
        int show(){
            cout<<run_distance<<endl;
            return 0;
            }
};

class Biking{
    public:
        int Biking_distance,Biking_time,Biking_min_distance,Biking_elevation_gain;
            public:
                void faru_b(){
                    cin>>Biking_distance>>Biking_time>>Biking_min_distance>>Biking_elevation_gain;
                }
                int show_b(){
                    cout<<Biking_distance/4<<endl;
                    return 0;
                }
};

class Beer_drinking{
        public:
            int  Number_of_beers_drunk,time_elapsed_drinking;
                public:
                    void faru_bd(){
                        cin>>Number_of_beers_drunk>>time_elapsed_drinking;
                    }
                    void show_bd(){
                        cout<<Number_of_beers_drunk*(-3)<<endl; 
                    }
};

class RunAndBike: public Run,public Biking{
    public:
        int faru_RB(){
            faru();
            faru_b();
            return 0;
        }
        int show_RB(){
            int sum=run_distance+(Biking_distance/4);
            cout<<sum<<endl;
            return 0;
        }
};

class RunAndBikeAndBeer: public RunAndBike,public Beer_drinking{
    public:
        int faru_RBB(){
            faru_RB();
            faru_bd();
            return 0;
        }
        int show_RBB(){
            cout<<Number_of_beers_drunk*5<<endl; 
            return 0;
        }
};

class BeerAndRun: public Beer_drinking,public Run{
    public:
        int faru_BR(){
            faru_bd();
            faru();
            return 0;
        }
        int show_BR(){
             cout<<Number_of_beers_drunk*5<<endl;
            return 0;
        }
};

class RunAndBeer: public Run,public Beer_drinking{
    public:
        int faru_RB(){
            faru();
            faru_bd();
            return 0;
        }
        int show_RB(){
             cout<<Number_of_beers_drunk*5<<endl;
            return 0;
        }
};

int main(){
    Run run=Run();
    Biking bike=Biking();
    Beer_drinking bd=Beer_drinking();
    RunAndBike rb=RunAndBike();
    RunAndBikeAndBeer rbb=RunAndBikeAndBeer();
    BeerAndRun br=BeerAndRun();
    RunAndBeer rbd=RunAndBeer();
    cout<<"Enter which do you want:"<<endl<<"Run,Bike,BeerDrinking,Run&Bike,Run&Bike&Beer,Beer&Run,Run&Beer"<<endl;
    string s;
    cin>>s;
    if(s=="Run"){
        run.faru();
        run.show();
    }
    else if(s=="Bike"){
        bike.faru_b();
        bike.show_b();
    }
    else if(s=="BeerDrinking"){
        bd.faru_bd();
        bd.show_bd();
    }
    else if(s=="Run&Bike"){
        rb.faru_RB();
        rb.show_RB();
    }
    else if(s=="Run&Bike&Beer"){
        rbb.faru_RBB();
        rbb.show_RBB();
    }
    else if(s=="Beer&Run"){
        br.faru_BR();
        br.show_BR();
    }
    else if(s=="Run&Beer"){
        rbd.faru_RB();
        rbd.show_RB();
    }
    return 0;
}












package com.company;
/*public class Main {

    public static void main(String[] args) {
   // write your code here
    }
}*/
import java.io.*;
import java.util.Scanner;
class Run{
    public  int run_distance,rum_time,rum_min_distance;
    public void faru(){
        Scanner sc=new Scanner(System.in);
        run_distance=sc.nextInt();
        rum_time=sc.nextInt();
        rum_min_distance=sc.nextInt();
    }
    public int show(){

        System.out.println(run_distance);
        return 0;
    }
}

class Biking {
    public int Biking_distance,Biking_time,Biking_min_distance,Biking_elevation_gain;
    public void faru_b(){
        Scanner input = new Scanner(System.in);
        Biking_distance = input.nextInt();
        Biking_time = input.nextInt();
        Biking_min_distance = input.nextInt();
        Biking_elevation_gain = input.nextInt();
    }
    public int show_b(){
        System.out.println(Biking_distance/4);
        return 0;
    }
}

class Beer_drinking{
    public int  Number_of_beers_drunk,time_elapsed_drinking;
    public void faru_bd(){
        Scanner input = new Scanner(System.in);
        Number_of_beers_drunk = input.nextInt();
        time_elapsed_drinking = input.nextInt();
    }
    void show_bd(){
        System.out.println(Number_of_beers_drunk*(-3));
    }
};

class RunAndBike extends Run{
    int faru_RB() {
        faru();
        return  0;
    }
    int Biking_distance, Biking_time, Biking_min_distance, Biking_elevation_gain;
    public void faru_b () {
        Scanner input = new Scanner(System.in);
        Biking_distance = input.nextInt();
        Biking_time = input.nextInt();
        Biking_min_distance = input.nextInt();
        Biking_elevation_gain = input.nextInt();
    }

    public int show_b(){
        int sum=Biking_distance/4+run_distance;
        System.out.println(sum);
        return 0;
    }
};

class RunAndBikeAndBeer extends RunAndBike{
        int faru_RBB(){
        faru_RB();
        faru_b();
        return 0;
        }
    public int  Number_of_beers_drunk,time_elapsed_drinking;
    public void faru_bd(){
        Scanner input = new Scanner(System.in);
        Number_of_beers_drunk = input.nextInt();
        time_elapsed_drinking = input.nextInt();
    }
        int show_RBB(){
            System.out.println(Number_of_beers_drunk*5);
        return 0;
        }
        };

class BeerAndRun extends Beer_drinking{
    int faru_BR(){
        faru_bd();
        return 0;
    }
    public  int run_distance,rum_time,rum_min_distance;
    public void faru(){
        Scanner sc=new Scanner(System.in);
        run_distance=sc.nextInt();
        rum_time=sc.nextInt();
        rum_min_distance=sc.nextInt();
    }

    int show_BR(){
        System.out.println(Number_of_beers_drunk*5);
        return 0;
    }
};

class RunAndBeer extends Run{
        int faru_RB(){
        faru();
        return 0;
        }
    public int  Number_of_beers_drunk,time_elapsed_drinking;
    public void faru_bd(){
        Scanner input = new Scanner(System.in);
        Number_of_beers_drunk = input.nextInt();
        time_elapsed_drinking = input.nextInt();
    }
    int a=Number_of_beers_drunk*5;
        int show_RB(){
        System.out.println(a);
        return 0;
        }
        };

public class Main  {
    public static void main(String[] args) {
        Run run = new Run();
        Biking bike = new Biking();
        Beer_drinking bd = new Beer_drinking();
        RunAndBike rb = new RunAndBike();
        RunAndBikeAndBeer rbb = new RunAndBikeAndBeer();
        BeerAndRun br = new BeerAndRun();
        RunAndBeer rbd = new RunAndBeer();
        System.out.println("Enter which do you want:");
        System.out.println("Run,Bike,BeerDrinking,Run&Bike,Run&Bike&Beer,Beer&Run,Run&Beer");
        Scanner sc = new Scanner(System.in);
        String s;
        s = sc.nextLine();
        if (s.equals("Run")) {
            run.faru();
            run.show();
        }
        else if (s.equals("Bike")) {
            bike.faru_b();
            bike.show_b();
        }
        else if (s.equals("BeerDrinking")) {
            bd.faru_bd();
            bd.show_bd();
        }
        else if (s.equals("Run&Bike")) {
            rb.faru_RB();
            rb.faru_b();
            rb.show_b();
            }
        else if (s.equals("Run&Bike&Beer")) {
            rbb.faru_RBB();
            rbb.faru_bd();
            rbb.show_RBB();
            }
        else if (s.equals("Beer&Run")) {
            br.faru_BR();
            br.faru();
            br.show_BR();
            }
        else if (s.equals("Run&Beer")) {
            rbd.faru_RB();
            rbb.faru_bd();
            rbd.show_RB();
        }
    }
}
