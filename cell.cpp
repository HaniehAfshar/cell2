#include <bits/stdc++.h>
#include "Cell.h"

int main(){

    Genome gen;
    Cell cell;
    string rna;
    char response;
    
    // Voroodi gereftan
    cout<<"What do you wnat to do?\n"<<
           "1- Input a Dna [D] \n"<<
           "2- Input a Rna to make a dna [R] \n"<<
           "3- Input a Cell by chromosomes [C] \n"<<
           ": "; cin>>response;
    
    //1- Input a Dna [D]       
    if (response=='D'){
        string mokamel;
        cout<<endl<<"Rna: ";cin>>rna;
        cout<<endl<<"Complementery: ";cin>>mokamel;
        gen.dna_set(rna,mokamel);

        cout<<"\nRna : "<<gen.rna_get()<<endl;
        cout<<"\nComplementery : "<<gen.mokamel_get()<<endl;

    }
    
    //2- Input a Rna to make a dna [R]
    else if (response == 'R'){
        cout<<endl<<"Rna: ";cin>>rna;
        gen.dna_make(rna);
    
        cout<<"\nRna : "<<gen.rna_get()<<endl;
        cout<<"\nComplementery : "<<gen.mokamel_get()<<endl;

    }
    
    //3- Input a Cell by chromosomes [C]
    else if (response == 'C'){
        int n;
        cout<<"how many DNAs do you wnat to make? :";     cin>>n;
        string s;
        while(n--){
            cin>>s;
            cell.chromosome_add(s);
        }
        cell.chromosome_get();
    }

    // Invalid input
    else{
        cout<<endl<<"Invalid input";
    }
    string task;
    while(true){
        cout<<"\nWhat do you want to work with? : [Chromosome - DNA - 0] : ";
        string answer;      cin>>answer;
        
        // DNA section
        if (answer=="DNA"){    
            cout<<"\nWhat do you want to do? [JaheshK - JaheshB - JaheshM] : ";
            cin>> task;
            
            if (task == "JaheshK"){
                char a,b;   int n;
                cout<<"\nTell me what dou you want to change? [A C 3] {it means replace 3 A with C} : ";
                cin>>a>>b>>n;
                gen.jahesh_koochak(a,b,n+1);
            }

            else if (task == "JaheshB"){
                string a,b;
                cout<<"\nTell me what dou you want to change? [A B] {it means replace A with B} : ";
                cin>>a>>b;
                gen.jahesh_bozorg(a,b);
            }

            else if (task == "JaheshM"){
                string a;
                cout<<"\nTell me what dou you want to change? [A] {it reverses the A} : ";
                cin>>a;
                gen.jahesh_makoos(a);
            }

            else{
                cout<<"Invalid input";
            }
        }

        // Chromosome section
        else if(answer=="Chromosome"){
            cout<<"\nWhat do you want to do? [JaheshK - JaheshB - JaheshM - Palindrome - 0] : ";
                cin>> task;
                
                if (task == "JaheshK"){
                    char a, b;   int n, m;
                    cout<<"\nTell me what dou you want to change? [A C 3 4] {it means replace 3 A with C in the 4th DNA} : ";
                    cin>>a>>b>>n>>m;
                    cell.jahesh_koochak(a,b,n,m-1);
                }

                else if (task == "JaheshB"){
                    string a, b;     int m, n;
                    cout<<"\nTell me what dou you want to change? [A 2 B 3] {it means replace A in 2nd DNA with B in 3rd DNA} : ";
                    cin>>a>>m>>b>>n;
                    cell.jahesh_bozorg(a,m-1,b,n-1);
                }

                else if (task == "JaheshM"){
                    string a;       int m;
                    cout<<"\nTell me what dou you want to change? [A 4] {it reverses the A in the 4th DNA} : ";
                    cin>>a>>m;
                    cell.jahesh_makoos(a,m-1);
                }

                else if (task == "Palindrome"){
                    int m;
                    cout<<"\nTell me which DNA do you want me to process : ";
                    cin>>m;
                    cell.palindromeFounder(m-1);
                }        
            
            }
        // Ending the process
        else if (answer == "0")
            break;

            else{
                cout<<"Invalid Input \n";
            }

        }

    return 0;
}
