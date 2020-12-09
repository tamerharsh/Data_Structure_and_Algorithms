#include <iostream>
#include<vector>
#include<algorithm>




class algo_
{
	int num; // number of singers 
	const  int   win_point = 2,loss_point=0;
	
	struct limit { int lower; int upper; };
	std::vector<int>scores;
	
	std::vector<limit> data;

	
	public:
	algo_();
	~algo_();
	std::vector<int>calculator(int &num, std::vector<limit>&data, std::vector<int>&points);
	int score_generator(int low1, int low2, int  up1, int  up2);
	int total_score_generator(std::vector<int>anyvector);
	void print(std::vector<int>anyvector1);
};

std::vector<int> algo_::calculator(int &num, std::vector<limit>&data, std::vector<int>&scores)
{
	//scores.resize(num);
	for (int i = 0; i < num; i++) 
	{
		std::vector<int>score_per_match;
		for (int j = 0; j < num; j++)
		{
			score_per_match.push_back(score_generator(data[i].lower, data[j].lower, data[i].upper, data[j].upper));

		}
		scores.push_back(total_score_generator(score_per_match));
	}
	return(scores);
}


int algo_::score_generator(int low1, int low2, int  up1,int up2)
{
	int score;
	if (low1 == low2 && up1 == up2) { score = loss_point; }
	else if ((low1 == low2 && up1 > up2)) { score = win_point; }
	else if (low1 < low2 && up1 == up2) { score = win_point; }
	else if (low1<low2 && up1>up2) { score = win_point; }
	else { score = loss_point; }

	return (score);
}

int algo_::total_score_generator(std::vector<int>anyvector) {
	int sum = 0;
	for (int x : anyvector) { sum =sum+ x; } 
	return sum;
}

void algo_::print(std::vector<int>anyvector1) { for (auto x : anyvector1)std::cout << x << " "; }
algo_::~algo_()
{

}

algo_::algo_()
{
	//data   input
	std::cin >> num;
	data.resize(num);//resizing  of vector of desired size;

	for (int i = 0; i < num; i++) {
		std::cin >> data[i].lower >> data[i].upper;  //alternate method/*int a, b;std::cin >> a >> b;data.push_back({ a,b });*/
	}
	std::vector<int> local;
	local=calculator(num, data, scores);
	print(local);

}

int main()
{
	algo_ a;
	//a.print(a.calculator(&num,&data,&scores));
	return 0;
	

}

