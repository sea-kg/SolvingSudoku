#ifndef __SEAKGEXECSUDOKU_H__
#define __SEAKGEXECSUDOKU_H__

#include <vector>
#include <string>
#include <iostream>
#include <math.h>

//2011-04-22 sea-kg

using namespace std;

class seakgExecSudokuKletka;
class seakgExecSudokuOblast;
class seakgExecSudoku;
//----------------------------------------------------------------------------
class seakgExecSudokuKletka
{
	public:
		
		int value;
		vector<int> variants;
		vector<seakgExecSudokuOblast *> oblasty;
		seakgExecSudoku *sudoku;
		
		void getVariants();
		bool trueVariant( int true_value );
	private:
	
};
//----------------------------------------------------------------------------
class seakgExecSudokuOblast
{
	public:
		
		vector<seakgExecSudokuKletka *> kletki;
		seakgExecSudoku *sudoku;
		
		bool findValue( int value );
		int schValueVariants( int value , int &ind_kl);
		
};
//----------------------------------------------------------------------------
class seakgExecSudoku
{
	public:
		seakgExecSudoku();
		~seakgExecSudoku();
		void setAlphabet( string Alphabet );
		
		void setPole( string pole );
		void coutPole();
		void coutPoleSimple();
		void coutVariant();
		void clearAll();
		
		void setOblasty9x9();
		
		int getCharToIntAlphabet( char ch );
		char getIntToCharAlphabet( int i );
		
		void addOblasty( int mas[], int count );
		 
		int getValueKletka(int ind);
		
		int findKletka( seakgExecSudokuKletka * kl );
		
		bool shag();
		//std::string strSudoku, int i
		int getCountVariants();
	private:
		vector<seakgExecSudokuKletka *> pole;
		vector<seakgExecSudokuOblast *> oblasty;
		
		string alphabet;
};
//----------------------------------------------------------------------------
#endif // __SEAKGEXECSUDOKU_H__