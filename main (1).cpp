
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
