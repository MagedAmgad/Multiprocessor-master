#pragma once
using namespace std;
#include <iostream>
#include <fstream>
#include"/college/sophomore/Semester 2/data structure/Multiprocessor-master/Multiprocessor-master/Process/Process.h"
#include"/college/sophomore/Semester 2/data structure/Multiprocessor-master/Multiprocessor-master/Data Structures/linkedlist.h"
#include"FCFS.h"
#include"Processor.h"
#include"SJF.h"
class processSch
{
private:
	Process* T; //Trmn list
	int trmnLCount;
	Linkedlist<Process> BLK;  
public:
	processSch(int& n)
	{

		T = new Process[n];// trmn list, N is the size of the new list
		trmnLCount = 0;


	}


	void addtoBLK(Process *P)
	{
		BLK.add(*P);
	}
	void MoveFromBLKtoReady(Process *P)//
	{

	}
	void moveTOready()//bta5od process mn el new w twdiha ll ready 
	{
		
			
				while (process.list)// process list heya heya l new 
				{
					for (int i = 0; i < n; i++)//n : number of processors 
					{
					a[i].add_process(process.list);
					}
					process.list->getnext();
			}
		
		
	}
	void addtoTRMN(Process p)//hta5od process w t7otha f el trmn list(l argument list bt3tha process w bta5od current size bta3 trmn list)
	{
		p = T[trmnLCount++];
	}
	int generateRN()
	{
		return rand() % 100 + 1;
	}
	Linkedlist<Process> load()// complexity O(N^2)
	{
		string Filename = "input.txt"; //string that contains imput file name

		ifstream input;
		input.open(Filename, ios::in); //oprn file to read data

		char b; //character to get rid of brackets and commas
		int FCFS, SJF, RR; //Processor types
		int RRTS; //Round Robin Timeslice
		int RTF, MAXW, STL, FP;//
		int numprocess;//Number of processes
		int AT, PID, CT, N; //Process attributes
		int sgkl = 0; //Sigkill counter
		string p;
		if (input.is_open())
		{
			input >> FCFS >> SJF >> RR >> RRTS >> RTF >> MAXW >> STL >> FP >> numprocess; //read all data before processes


			int* kill_PID = new int[STL]; int* kill_time = new int[STL];  //sigkill

			Linkedlist<Process> P;

			//Process* NewList = new Process[numprocess];

			for (int i = 0; i < numprocess; i++)
			{

				input >> AT >> PID >> CT >> N;
				if (N)
				{
					int* IO_D = new int[N]; // initialize array of IO_D for each process
					int* IO_R = new int[N]; // initialize array of IO_R for each process


					for (int j = 0; j < N; j++)
					{

						input >> b >> IO_R[j] >> b >> IO_D[j] >> b; // Read IO_R and IO_D and insert in array
						if (j != N - 1) // read extra character as long as last values are not read yet as there is a comma before opening bracket
							input >> b;
					}

					P.add(Process(AT, PID, CT, N, IO_R, IO_D)); //call processor constructor for any N!=0
				}
				else
					P.add(Process(AT, PID, CT)); //call processor constructor for any N == 0

			}
			while (input >> kill_PID[sgkl])//read sigkill data
			{
				input >> kill_time[sgkl];
				sgkl++;
			}

			////////////////////////////////////printing//////////////////////////////////////////////////////////////////////////////////////////////
			cout << FCFS << " " << SJF << " " << RR << " " << endl << RRTS << endl << RTF << " " << MAXW << " " << STL << " " << FP << endl << numprocess;


			P.PrintList();
			cout << "Sigkill Times: " << endl;
			for (int i = 0; i < sgkl; i++)
				cout << kill_PID[i] << " " << kill_time[i] << endl;

			/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			return P;
		}
		
	}

	};



