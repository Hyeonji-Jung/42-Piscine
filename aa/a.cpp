#include<iostream>

using namespace std;

int colup[4];
int coldown[4];
int rowleft[4];
int rowright[4];
int row[4][5];
int col[4][5];
int board[4][4];
int count(bool isrow, bool isuporleft, int i);
bool isvalid(void);
void fill_one(int r, int c);
void fill_rec(int r, int c);
void print();

int main()
{
	for (int i = 0; i < 4; i++)
		cin >> colup[i];
	for (int i = 0; i < 4; i++)
		cin >> coldown[i];
	for (int i = 0; i < 4; i++)
		cin >> rowleft[i];
	for (int i = 0; i < 4; i++)
		cin >> rowright[i];
	fill_rec(0, 0);
}
bool isvalid()
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (colup[i] != count(0, 1, i))
			return (false);
		if (coldown[i] != count(0, 0, i))
			return (false);
		if (rowleft[i] != count(1, 1, i))
			return (false);
		if (rowright[i] != count(1, 0, i))
			return (false);
		i++;
	}
	return (true);
}
void print()
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			cout << board[i][j++]<<" ";
		}
		i++;
		cout << "\n";
	}
}
void fill_rec(int r, int c)
{
	if (r == 4)
	{	
		if (isvalid())
			print();
		return ;
	}
	if (c == 4)
		fill_rec(r + 1, 0);
	else
		fill_one(r, c);
	return;
}

void fill_one(int r, int c)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		if (row[r][i] || col[c][i])
		{
			i++;
			continue;
		}
		row[r][i] = 1;
		col[c][i] = 1;
		board[r][c] = i;
		fill_rec(r, c + 1);
		board[r][c] = 0;
		row[r][i] = 0;
		col[c][i] = 0;
		i++;
	}
}

int count(bool isrow, bool isuporleft, int i)
{
	int idx;
	int maxheight;
	int cnt;

    cnt = 1;
	if (isrow)
	{
				if (isuporleft) {
					idx = 1;
					maxheight = board[i][0];
					while (idx < 4)
					{
						if (maxheight < board[i][idx])
						{
							maxheight = board[i][idx];
							cnt++;
						}
						idx++;
					}
				}
				else
				{
					idx = 2;
					maxheight = board[i][3];
					while (idx >= 0)
					{
						if (maxheight < board[i][idx])
						{
							maxheight = board[i][idx];
							cnt++;
						}
						idx--;
					}
				}

	}
	else
	{
		if (isuporleft)
		{
			idx = 1;
			maxheight = board[0][i];
			while (idx < 4)
			{
				if (maxheight < board[idx][i])
				{
					maxheight = board[idx][i];
					cnt++;
				}
				idx++;
			}
		}
		else
		{
			idx = 2;
			maxheight = board[3][i];
			while (idx >= 0)
			{
				if (maxheight < board[idx][i])
				{
					maxheight = board[idx][i];
					cnt++;
				}
				idx--;
			}
		}
	}
	return (cnt);
}
