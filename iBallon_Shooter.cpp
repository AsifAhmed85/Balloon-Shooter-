
# include "iGraphics.h"
# include <stdio.h>
#include <math.h>
#include <string.h>

#define pi 3.1416
#define BallonNumber 12

int mposx,  mposy;
int screenwidth = 1000, screenhight = 670;
int gameState = -1;
char video[556][15] = { "video\\1.bmp", "video\\2.bmp", "video\\3.bmp", "video\\4.bmp", "video\\5.bmp", "video\\6.bmp", "video\\7.bmp", "video\\8.bmp", "video\\9.bmp", "video\\10.bmp", "video\\11.bmp", "video\\12.bmp", "video\\13.bmp", "video\\14.bmp", "video\\15.bmp", "video\\16.bmp", "video\\17.bmp", "video\\18.bmp", "video\\19.bmp", "video\\20.bmp", "video\\21.bmp", "video\\22.bmp", "video\\23.bmp", "video\\24.bmp", "video\\25.bmp", "video\\26.bmp", "video\\27.bmp", "video\\28.bmp", "video\\29.bmp", "video\\30.bmp", "video\\31.bmp", "video\\32.bmp", "video\\33.bmp", "video\\34.bmp", "video\\35.bmp", "video\\36.bmp", "video\\37.bmp", "video\\38.bmp", "video\\39.bmp", "video\\40.bmp", "video\\41.bmp", "video\\42.bmp", "video\\43.bmp", "video\\44.bmp", "video\\45.bmp", "video\\46.bmp", "video\\47.bmp", "video\\48.bmp", "video\\49.bmp", "video\\50.bmp", "video\\51.bmp", "video\\52.bmp", "video\\53.bmp", "video\\54.bmp", "video\\55.bmp", "video\\56.bmp", "video\\57.bmp", "video\\58.bmp", "video\\59.bmp", "video\\60.bmp", "video\\61.bmp", "video\\62.bmp", "video\\63.bmp", "video\\64.bmp", "video\\65.bmp", "video\\66.bmp", "video\\67.bmp", "video\\68.bmp", "video\\69.bmp", "video\\70.bmp", "video\\71.bmp", "video\\72.bmp", "video\\73.bmp", "video\\74.bmp", "video\\75.bmp", "video\\76.bmp", "video\\77.bmp", "video\\78.bmp", "video\\79.bmp", "video\\80.bmp", "video\\81.bmp", "video\\82.bmp", "video\\83.bmp", "video\\84.bmp", "video\\85.bmp", "video\\86.bmp", "video\\87.bmp", "video\\88.bmp", "video\\89.bmp", "video\\90.bmp", "video\\91.bmp", "video\\92.bmp", "video\\93.bmp", "video\\94.bmp", "video\\95.bmp", "video\\96.bmp", "video\\97.bmp", "video\\98.bmp", "video\\99.bmp", "video\\100.bmp",
"video\\101.bmp", "video\\102.bmp", "video\\103.bmp", "video\\104.bmp", "video\\105.bmp", "video\\106.bmp", "video\\107.bmp", "video\\108.bmp", "video\\109.bmp", "video\\110.bmp", "video\\111.bmp", "video\\112.bmp", "video\\113.bmp", "video\\114.bmp", "video\\115.bmp", "video\\116.bmp", "video\\117.bmp", "video\\118.bmp", "video\\119.bmp", "video\\120.bmp", "video\\121.bmp", "video\\122.bmp", "video\\123.bmp", "video\\124.bmp", "video\\125.bmp", "video\\126.bmp", "video\\127.bmp", "video\\128.bmp", "video\\129.bmp", "video\\130.bmp", "video\\131.bmp", "video\\132.bmp", "video\\133.bmp", "video\\134.bmp", "video\\135.bmp", "video\\136.bmp", "video\\137.bmp", "video\\138.bmp", "video\\139.bmp", "video\\140.bmp", "video\\141.bmp", "video\\142.bmp", "video\\143.bmp", "video\\144.bmp", "video\\145.bmp", "video\\146.bmp", "video\\147.bmp", "video\\148.bmp", "video\\149.bmp", "video\\150.bmp", "video\\151.bmp", "video\\152.bmp", "video\\153.bmp", "video\\154.bmp", "video\\155.bmp", "video\\156.bmp", "video\\157.bmp", "video\\158.bmp", "video\\159.bmp", "video\\160.bmp", "video\\161.bmp", "video\\162.bmp", "video\\163.bmp", "video\\164.bmp", "video\\165.bmp", "video\\166.bmp", "video\\167.bmp", "video\\168.bmp", "video\\169.bmp", "video\\170.bmp", "video\\171.bmp", "video\\172.bmp", "video\\173.bmp", "video\\174.bmp", "video\\175.bmp", "video\\176.bmp", "video\\177.bmp", "video\\178.bmp", "video\\179.bmp", "video\\180.bmp", "video\\181.bmp", "video\\182.bmp", "video\\183.bmp", "video\\184.bmp", "video\\185.bmp", "video\\186.bmp", "video\\187.bmp", "video\\188.bmp", "video\\189.bmp", "video\\190.bmp", "video\\191.bmp", "video\\192.bmp", "video\\193.bmp", "video\\194.bmp", "video\\195.bmp", "video\\196.bmp", "video\\197.bmp", "video\\198.bmp", "video\\199.bmp", "video\\200.bmp",
"video\\201.bmp", "video\\202.bmp", "video\\203.bmp", "video\\204.bmp", "video\\205.bmp", "video\\206.bmp", "video\\207.bmp", "video\\208.bmp", "video\\209.bmp", "video\\210.bmp", "video\\211.bmp", "video\\212.bmp", "video\\213.bmp", "video\\214.bmp", "video\\215.bmp", "video\\216.bmp", "video\\217.bmp", "video\\218.bmp", "video\\219.bmp", "video\\220.bmp", "video\\221.bmp", "video\\222.bmp", "video\\223.bmp", "video\\224.bmp", "video\\225.bmp", "video\\226.bmp", "video\\227.bmp", "video\\228.bmp", "video\\229.bmp", "video\\230.bmp", "video\\231.bmp", "video\\232.bmp", "video\\233.bmp", "video\\234.bmp", "video\\235.bmp", "video\\236.bmp", "video\\237.bmp", "video\\238.bmp", "video\\239.bmp", "video\\240.bmp", "video\\241.bmp", "video\\242.bmp", "video\\243.bmp", "video\\244.bmp", "video\\245.bmp", "video\\246.bmp", "video\\247.bmp", "video\\248.bmp", "video\\249.bmp", "video\\250.bmp", "video\\251.bmp", "video\\252.bmp", "video\\253.bmp", "video\\254.bmp", "video\\255.bmp", "video\\256.bmp", "video\\257.bmp", "video\\258.bmp", "video\\259.bmp", "video\\260.bmp", "video\\261.bmp", "video\\262.bmp", "video\\263.bmp", "video\\264.bmp", "video\\265.bmp", "video\\266.bmp", "video\\267.bmp", "video\\268.bmp", "video\\269.bmp", "video\\270.bmp", "video\\271.bmp", "video\\272.bmp", "video\\273.bmp", "video\\274.bmp", "video\\275.bmp", "video\\276.bmp", "video\\277.bmp", "video\\278.bmp", "video\\279.bmp", "video\\280.bmp", "video\\281.bmp", "video\\282.bmp", "video\\283.bmp", "video\\284.bmp", "video\\285.bmp", "video\\286.bmp", "video\\287.bmp", "video\\288.bmp", "video\\289.bmp", "video\\290.bmp", "video\\291.bmp", "video\\292.bmp", "video\\293.bmp", "video\\294.bmp", "video\\295.bmp", "video\\296.bmp", "video\\297.bmp", "video\\298.bmp", "video\\299.bmp", "video\\300.bmp",
"video\\301.bmp", "video\\302.bmp", "video\\303.bmp", "video\\304.bmp", "video\\305.bmp", "video\\306.bmp", "video\\307.bmp", "video\\308.bmp", "video\\309.bmp", "video\\310.bmp", "video\\311.bmp", "video\\312.bmp", "video\\313.bmp", "video\\314.bmp", "video\\315.bmp", "video\\316.bmp", "video\\317.bmp", "video\\318.bmp", "video\\319.bmp", "video\\320.bmp", "video\\321.bmp", "video\\322.bmp", "video\\323.bmp", "video\\324.bmp", "video\\325.bmp", "video\\326.bmp", "video\\327.bmp", "video\\328.bmp", "video\\329.bmp", "video\\330.bmp", "video\\331.bmp", "video\\332.bmp", "video\\333.bmp", "video\\334.bmp", "video\\335.bmp", "video\\336.bmp", "video\\337.bmp", "video\\338.bmp", "video\\339.bmp", "video\\340.bmp", "video\\341.bmp", "video\\342.bmp", "video\\343.bmp", "video\\344.bmp", "video\\345.bmp", "video\\346.bmp", "video\\347.bmp", "video\\348.bmp", "video\\349.bmp", "video\\350.bmp", "video\\351.bmp", "video\\352.bmp", "video\\353.bmp", "video\\354.bmp", "video\\355.bmp", "video\\356.bmp", "video\\357.bmp", "video\\358.bmp", "video\\359.bmp", "video\\360.bmp", "video\\361.bmp", "video\\362.bmp", "video\\363.bmp", "video\\364.bmp", "video\\365.bmp", "video\\366.bmp", "video\\367.bmp", "video\\368.bmp", "video\\369.bmp", "video\\370.bmp", "video\\371.bmp", "video\\372.bmp", "video\\373.bmp", "video\\374.bmp", "video\\375.bmp", "video\\376.bmp", "video\\377.bmp", "video\\378.bmp", "video\\379.bmp", "video\\380.bmp", "video\\381.bmp", "video\\382.bmp", "video\\383.bmp", "video\\384.bmp", "video\\385.bmp", "video\\386.bmp", "video\\387.bmp", "video\\388.bmp", "video\\389.bmp", "video\\390.bmp", "video\\391.bmp", "video\\392.bmp", "video\\393.bmp", "video\\394.bmp", "video\\395.bmp", "video\\396.bmp", "video\\397.bmp", "video\\398.bmp", "video\\399.bmp", "video\\400.bmp",
"video\\401.bmp", "video\\402.bmp", "video\\403.bmp", "video\\404.bmp", "video\\405.bmp", "video\\406.bmp", "video\\407.bmp", "video\\408.bmp", "video\\409.bmp", "video\\410.bmp", "video\\411.bmp", "video\\412.bmp", "video\\413.bmp", "video\\414.bmp", "video\\415.bmp", "video\\416.bmp", "video\\417.bmp", "video\\418.bmp", "video\\419.bmp", "video\\420.bmp", "video\\421.bmp", "video\\422.bmp", "video\\423.bmp", "video\\424.bmp", "video\\425.bmp", "video\\426.bmp", "video\\427.bmp", "video\\428.bmp", "video\\429.bmp", "video\\430.bmp", "video\\431.bmp", "video\\432.bmp", "video\\433.bmp", "video\\434.bmp", "video\\435.bmp", "video\\436.bmp", "video\\437.bmp", "video\\438.bmp", "video\\439.bmp", "video\\440.bmp", "video\\441.bmp", "video\\442.bmp", "video\\443.bmp", "video\\444.bmp", "video\\445.bmp", "video\\446.bmp", "video\\447.bmp", "video\\448.bmp", "video\\449.bmp", "video\\450.bmp", "video\\451.bmp", "video\\452.bmp", "video\\453.bmp", "video\\454.bmp", "video\\455.bmp", "video\\456.bmp", "video\\457.bmp", "video\\458.bmp", "video\\459.bmp", "video\\460.bmp", "video\\461.bmp", "video\\462.bmp", "video\\463.bmp", "video\\464.bmp", "video\\465.bmp", "video\\466.bmp", "video\\467.bmp", "video\\468.bmp", "video\\469.bmp", "video\\470.bmp", "video\\471.bmp", "video\\472.bmp", "video\\473.bmp", "video\\474.bmp", "video\\475.bmp", "video\\476.bmp", "video\\477.bmp", "video\\478.bmp", "video\\479.bmp", "video\\480.bmp", "video\\481.bmp", "video\\482.bmp", "video\\483.bmp", "video\\484.bmp", "video\\485.bmp", "video\\486.bmp", "video\\487.bmp", "video\\488.bmp", "video\\489.bmp", "video\\490.bmp", "video\\491.bmp", "video\\492.bmp", "video\\493.bmp", "video\\494.bmp", "video\\495.bmp", "video\\496.bmp", "video\\497.bmp", "video\\498.bmp", "video\\499.bmp", "video\\500.bmp",
"video\\501.bmp", "video\\502.bmp", "video\\503.bmp", "video\\504.bmp", "video\\505.bmp", "video\\506.bmp", "video\\507.bmp", "video\\508.bmp", "video\\509.bmp", "video\\510.bmp", "video\\511.bmp", "video\\512.bmp", "video\\513.bmp", "video\\514.bmp", "video\\515.bmp", "video\\516.bmp", "video\\517.bmp", "video\\518.bmp", "video\\519.bmp", "video\\520.bmp", "video\\521.bmp", "video\\522.bmp", "video\\523.bmp", "video\\524.bmp", "video\\525.bmp", "video\\526.bmp", "video\\527.bmp", "video\\528.bmp", "video\\529.bmp", "video\\530.bmp", "video\\531.bmp", "video\\532.bmp", "video\\533.bmp", "video\\534.bmp", "video\\535.bmp", "video\\536.bmp", "video\\537.bmp", "video\\538.bmp", "video\\539.bmp", "video\\540.bmp", "video\\541.bmp", "video\\542.bmp", "video\\543.bmp", "video\\544.bmp", "video\\545.bmp", "video\\546.bmp", "video\\547.bmp", "video\\548.bmp", "video\\549.bmp", "video\\550.bmp", "video\\551.bmp", "video\\552.bmp", "video\\553.bmp", "video\\554.bmp", "video\\555.bmp", "video\\556.bmp" };
int videoInd = 0;
int move;
char start[15] = { "Image\\a.bmp" };
char menu[15] = { "Image\\e.bmp" };
char instruction[15] = { "Image\\b.bmp" };
char highScore[15] = { "Image\\c.bmp" };
char end[15] = { "Image\\p.bmp" };
char ballon[4][20] = { "Sprite Sheet\\1.bmp", "Sprite Sheet\\13.bmp", "Sprite Sheet\\14.bmp", "Sprite Sheet\\15.bmp", };
char num[5][20] = { "Sprite Sheet\\8.bmp", "Sprite Sheet\\9.bmp", "Sprite Sheet\\10.bmp", "Sprite Sheet\\11.bmp", "Sprite Sheet\\12.bmp", };
char pop[6][20] = { "Sprite Sheet\\2.bmp", "Sprite Sheet\\3.bmp", "Sprite Sheet\\4.bmp", "Sprite Sheet\\5.bmp", "Sprite Sheet\\6.bmp", "Sprite Sheet\\7.bmp"};
int pop_ind = 0;
int option = 0;
int option2 = 0;
int a1 = 10 , b1 = 0 , a2 = 10, b2 = 90;
int c1 = 10 , d1 = 0, c2 = 10 , d2 = 90;
int e1 = 0, e2 = 80;
int r2 = sqrt(a2*a2 + b2*b2);
int r1 = sqrt(a1*a1 + b1*b1);
int r3 = 80;
double angle1 = atan(b1/a1), angle2 = atan(b2/a2), angle3 = atan(d1/c1), angle4 = atan(d2/c2), angle5 = pi/2;
int dx = 0, dy = 0;
int velocity;
int r = 255, g = 0, b = 0;
bool now = false;
bool button1 = false;
bool gameOver = false;
int sc = 0;
char name[15] = {'\0'};
int index = 0;
int H_S = 0;
bool begin = false;
bool go = false;
float dz = 1.75;
int ballon_inc = 0;
bool shoot = false;
int count = 0;
bool ready = false;
bool drop = true;
int inc = 1;
int life = 7;
bool musicOn = true;
bool pause = false;
int k = 0;
int bonous = 1;
bool popped = false;
char scshow[5][20] = { "Sprite Sheet\\8.bmp", "Sprite Sheet\\9.bmp", "Sprite Sheet\\10.bmp", "Sprite Sheet\\11.bmp", "Sprite Sheet\\12.bmp" };
char environment[4][20] = { "Image\\s.bmp", "Image\\d.bmp", "Image\\t.bmp", "Image\\g.bmp" };
int day = 0;
int j = 0;
int l = 0;
int x;
int y;
int p;
int t=0;
int score = 0;


struct ballon_move
{
	float ballon_x;
	float ballon_y;
	int ballon_index;
	bool ballon_show;
};

struct high_score
{
	char name[15];
	int score;
};

ballon_move enemy [BallonNumber+15];
high_score top [11];

void enemymovement(int e1, int e2)
{
	for (int i = 0; i <= BallonNumber+ballon_inc; i++)
	{
		if (enemy[i].ballon_show && 500 + e1 >= enemy[i].ballon_x && 500 + e1 <= enemy[i].ballon_x + 55 && 10 + e2 >= enemy[i].ballon_y && 10 + e2 <= enemy[i].ballon_y + 70 && shoot)
		{
			enemy[i].ballon_show = false;
			
			popped = true;
			x = enemy[i].ballon_x;
			y = enemy[i].ballon_y;
			if (musicOn)
			{
				PlaySound("Sound Effect\\1.wav", NULL, SND_ASYNC);
			}
			score+= bonous;
			p = bonous;
			if (score == 15)
			{
				ballon_inc = 4;
				dz=dz+.5;
			}
			if (score == 50)
			{
				ballon_inc = 6;
				dz = dz + .5;
			}
			if (score == 100)
			{
				ballon_inc = 8;
				dz = dz + .5;
			}
			if (score == 300)
			{
				ballon_inc = 12;
				dz = dz + .5;
			}
			inc--;
			bonous++;
		}
		if (popped)
		{
			l++;
			if (l > 10 && l<200)
			{
				iShowBMP2(x, y, pop[pop_ind], 0);
				if (l % 30 == 0)
				{
					pop_ind++;
				}
				if (pop_ind > 5)
				{
					pop_ind = 0;
				}
			}
			if (l > 250)
			{
				if (p == 1)
				{
					iShowBMP2(x, y, num[0], 0);
				}
				if (p == 2)
				{
					iShowBMP2(x, y, num[1], 0);
				}
				if (p == 3)
				{
					iShowBMP2(x, y, num[2], 0);
				}
				if (p == 4)
				{
					iShowBMP2(x, y, num[3], 0);
				}
				if (p== 5)
				{
					iShowBMP2(x, y, num[4], 0);
				}
			}
			if (l == 330)
			{
				popped = false;
				l = 0;
			}
		}
		else if (enemy[i].ballon_y <= 5)
		{
			enemy[i].ballon_show = true;
		}
		if (enemy[i].ballon_show && enemy[i].ballon_y >= 12)
		{
			if (i == 0)
			{
				iShowBMP2(enemy[i].ballon_x, enemy[i].ballon_y, ballon[0], 0);
			}
			else if (i % 5==0)
			{
				iShowBMP2(enemy[i].ballon_x, enemy[i].ballon_y, ballon[1], 0);
			}
			else if (i % 6==0)
			{
				iShowBMP2(enemy[i].ballon_x, enemy[i].ballon_y, ballon[2], 0);
			}
			else if (i % 7==0)
			{
				iShowBMP2(enemy[i].ballon_x, enemy[i].ballon_y, ballon[3], 0);
			}
			else
			{
				iShowBMP2(enemy[i].ballon_x, enemy[i].ballon_y, ballon[0], 0);
			}
		}
		if (enemy[i].ballon_y<12 && enemy[i].ballon_show && enemy[i].ballon_y>5)
		{
			life--;
			enemy[i].ballon_show = false;
			if (!life)
			{
				gameOver = true;
			}
		}
	}
}

void iDraw()
{
	iClear();
	if (gameState == 0)
	{
		iShowBMP(0, 2, start);
		if (begin)
		{
			iSetColor(255, 0, 0);
			iText(400, 40, "press 'Enter' to contunue", GLUT_BITMAP_TIMES_ROMAN_24);
			now = true;
		}
		else
		{
			iSetColor(0, 0, 0);
			iText(440, 295, "Enter your name:", GLUT_BITMAP_TIMES_ROMAN_24);
			iSetColor(150, 100, 50);
			iFilledRectangle(420, 235, 210, 50);
			iSetColor(5, 5, 150);
			iFilledRectangle(425, 240, 200, 40);
			iSetColor(255, 255, 50);
			iText(430, 250, name, GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}
	if (gameState == -1)
	{
		iShowBMP(0, 0, video[videoInd]);
		if (videoInd == 554)
		{
			iShowBMP(0, 0, video[554]);
			iShowBMP(-300+move, 462, "Image\\q.bmp");
			iShowBMP(1000 - move, 300, "Image\\r.bmp");
		}
	}
	if (gameState == 1)
	{
		iShowBMP(0, 0, menu);
		iShowBMP(0, 585,"Image\\f.bmp");
		iSetColor(255, 0, 0);
		iFilledRectangle(330, 235 - 65 * option,280,70);
		iSetColor(10, 150, 120);
		iFilledRectangle(335, 240, 270, 60);
		iSetColor(100, 10, 255);
		iText(410, 260, "New Game", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(10, 150, 120);
		iFilledRectangle(335, 175, 270, 60);
		iSetColor(100, 10, 255);
		iText(410, 200, "High score", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(10, 150, 120);
		iFilledRectangle(335, 110, 270, 60);
		iSetColor(100, 10, 255);
		iText(410, 135, "Instruction", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(10, 150, 120);
		iFilledRectangle(335, 45, 270, 60);
		iSetColor(100, 10, 255);
		iText(445, 70, "Exit", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (gameState == 2)
	{
		iShowBMP(0, 0, environment[day]);
		if (k >= 40 && day==0 && go)
		{
			k--;
			iSetColor(255, 0, 255);
			iText(420, 300, "<<<  NEW DAY  >>>", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else
		{
			k = 0;
		}
		iSetColor(0, 0, 0);
		iLine(500-a1, 10+b1, 500-a2, 10+b2);
		iLine(500+c1, 10+d1, 500+c2, 10+d2);
		iSetColor(255, 20, 100);
		iFilledCircle(500, 0, 40);
		count++;
		if (count >= 20 && ready && inc !=0)
		{
			if (e1 < -490)
			{
				dx = -dx;
				inc--;
			}
			else if (e1 > 490)
			{
				dx = -dx;
				inc--;
			}
			e1 = e1 + dx;
			e2 = e2 + dy;
			shoot = true;
		}
		if (10 + e2 >= 660 || inc == 0)
		{
			r3 = 80;
			e1 = r3 * cos(angle5);
			e2 = r3 * sin(angle5);
			r = rand() % 255;
			g = rand() % 255;
			count = 0;
			ready = false;
			shoot = false;
			inc = 1;
			bonous = 1;
		}
		iSetColor(r, g, b);
		iFilledCircle( 500 + e1, 10 + e2, 10);
		if (go)
		{
			if (!gameOver)
			{
				for (int i = 1; i <= life; i++)
				{
					iShowBMP2(570 + i * 50, 0, "Image\\i.bmp", 0);
				}
				enemymovement(e1, e2);
				iSetColor(255, 10, 20);
				char num[5];
				_itoa_s(score, num, 10);
				iText(250, 10, "Score:",GLUT_BITMAP_TIMES_ROMAN_24);
				iText(320, 10, num, GLUT_BITMAP_TIMES_ROMAN_24);
				if (pause)
				{
					iShowBMP2(100, 10, "Image\\n.bmp",0);
				}
				else
				{
					iShowBMP2(100, 10, "Image\\m.bmp", 0);
				}
			}
			else
			{
				iShowBMP2(370, 300, "Image\\j.bmp", 0);
				char num[5];
				_itoa_s(score, num, 10);
				iText(423, 250, "Your Score:", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(550, 250, num, GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else
		{
			iSetColor(255, 255, 255);
			iFilledCircle(500, 325, 105);
			iShowBMP2(425, 250, "Image\\h.bmp", 0);
		}
	}
	if (gameState == 3)
	{
		iShowBMP(0, 0, highScore);
		iSetColor(0, 0, 255);
		iFilledRectangle( 360,0, 280, 550);
		iSetColor(0, 0, 0);
		for (int i = 0; i <= 10; i++)
		{
			iLine(360, i * 55, 640, i * 55);
		}
		iSetColor(255, 255, 255);
		iFilledRectangle(360, 550, 280, 80);
		iSetColor(255, 0, 0);
		iLine(500, 0, 500, 630);
		iSetColor(0, 255, 0);
		iText(400, 585, "Name", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(515, 585, "High Score", GLUT_BITMAP_TIMES_ROMAN_24);
		char num[5];
		for (int i = 0; i < 10; i++)
		{
			_itoa_s(top[i].score, num, 10);
			if (top[i].score)
			{
				iText(370, 518 - i * 55, top[i].name, GLUT_BITMAP_TIMES_ROMAN_24);
				iText(520, 518 - i * 55, num, GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
	}
	if (gameState == 4)
	{
		iShowBMP(0, 0, instruction);
		iSetColor(255, 255, 255);
		iFilledRectangle(380, 78, 260, 340);
		iSetColor(255, 0, 0);
		iText(440, 390, "Instruction", GLUT_BITMAP_TIMES_ROMAN_24);
		iLine(430, 380, 565, 380);
		iSetColor(0, 200, 255);
		iText(390, 340, "Pess Right & Left", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(390, 315, "Key To Rotate The Gun", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(390, 290, "Angle", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(200, 20, 150);
		iText(390, 250, "Press Up Key to Shoot", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(70, 240, 10);
		iText(390, 210, "Prees UP Key Again To", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(390, 185, "Increase Velocity", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(90, 80, 190);
		iText(390, 145, "Press p To Pause", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(390, 120, "& r To Resume", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (gameState == 5)
	{
		iShowBMP(0, 0, end);
		iSetColor(100, 10, 55);
		iText(350, 255, "Do you really wanna quit ?", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 0, 0);
		iFilledRectangle(335 + option2 * 195, 175, 90, 50);
		iSetColor(20, 130, 100);
		iFilledRectangle(340, 180, 80, 40);
		iSetColor(100, 10, 55);
		iText(357, 192, "Yes", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(20, 130, 100);
		iFilledRectangle(535, 180, 80, 40);
		iSetColor(100, 10, 55);
		iText(557, 193, "No", GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if (musicOn)
	{
		iShowBMP2(10, 10, "Image\\l.bmp", 0);
	}
	else
	{
		iShowBMP2(10, 10, "Image\\k.bmp", 0);
	}
}

void iMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("(%d %d)", mx, my);
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

void iPassiveMouseMove(int mx,int my)
{
	

 mposx = mx;
 mposy = my;
 if(mx== 2){}        
 else if(my== 2){}   
}

void iKeyboard(unsigned char key)
{
	if (key == ' ')
	{
		if (musicOn)
		{
			musicOn = false;
			PlaySound(0, 0, 0);
		}
		else
		{
			musicOn = true;
			if (gameState == -1)
			{
				PlaySound("Music\\9.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (gameState == 0)
			{
				PlaySound("Music\\0.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (gameState == 1)
			{
				PlaySound("Music\\1.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (gameState == 2)
			{
				PlaySound("Music\\2.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (gameState == 3)
			{
				PlaySound("Music\\3.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (gameState == 4)
			{
				PlaySound("Music\\4.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			if (gameState == 5)
			{
				PlaySound("Music\\5.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
	}
	if (index > 0 && gameState == 0 && key == '\r')
	{
		begin = true;
	}
	if (key == '\r' && gameState == 0 && now)
	{
		gameState = 1;
		button1 = true;
		if (musicOn)
		{
			PlaySound("Music\\1.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	else if (key == '\r' && gameState == -1)
	{
		gameState = 0;
		if (musicOn)
		{
			PlaySound("Music\\0.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	else if (key == '\r' && gameState == 1)
	{
		gameState = option + 2;
		if (gameState == 2)
		{
			pause = false;
			button1 = true;
			if (musicOn)
			{
				PlaySound("Music\\2.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		if (gameState == 3)
		{
			button1 = true;
			if (musicOn)
			{
				PlaySound("Music\\3.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		if (gameState == 4)
		{
			if (musicOn)
			{
				PlaySound("Music\\4.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
		if (gameState == 5)
		{
			button1 = true;
			if (musicOn)
			{
				PlaySound("Music\\5.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}
	}
	else if (key == '\r' && gameState == 5)
	{
		if (musicOn)
		{
			PlaySound("Music\\5.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		if (option2 == 0)
		{
			button1 = true;
			exit(0);
		}
		else
		{
			gameState = 1;
			score = 0;
			life = 7;
			button1 = true;
			k = 0;
			day = 0;
			j = 0;
			a1 = 10;
			b1 = 0;
			a2 = 10;
			b2 = 90;
			c1 = 10;
			d1 = 0;
			c2 = 10;
			d2 = 90;
			e1 = 0;
			e2 = 80;
			angle1 = atan(b1 / a1);
			angle2 = atan(b2 / a2);
			angle3 = atan(d1 / c1);
			angle4 = atan(d2 / c2);
			angle5 = pi / 2;
			if (musicOn)
			{
				PlaySound("Music\\1.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			option2 = 0;
		}
	}
	else if (gameState == 2 && key == '\r')
	{
		go = true;
	}
	if (gameState == 2 && key == 'p')
	{
		pause = true;
		iPauseTimer(0);
		iPauseTimer(5);
	}
	if (gameState == 2 && key == 'r')
	{
		pause = false;
		iResumeTimer(0);
		iResumeTimer(5);
	}
	if (key != '\b' && index < 12 && key != '\r' && gameState==0)
	{
		name[index] = key;
		name[index + 1] = '\0';
		index++;
	}
	else if (key == '\b' && index > 0)
	{
		name[index - 1] = '\0';
		index--;
	}
	if (key == 'q' && gameState != 0 && gameState != -1)
	{
		gameState = 5;
		button1 = true;
		go = false;
		begin = false;
		if (musicOn)
		{
			PlaySound("Music\\5.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		for (int i = 0; i < BallonNumber + ballon_inc; i++)
		{
			enemy[i].ballon_y = 800 + abs(rand()*3) % 2700;
			enemy[i].ballon_x = abs(rand() % 950);
			enemy[i].ballon_index = i;
			enemy[i].ballon_show = true;
			pause = true;
		}
	}
}

void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_DOWN && option<3 && gameState == 1)
	{
		button1 = true;
		option++;
	}
	if (key == GLUT_KEY_UP && option >0 && gameState == 1)
	{
		button1 = true;
		option--;
	}
	if (key == GLUT_KEY_RIGHT && option2 == 0 && gameState == 5)
	{
		button1 = true;
		option2++;
	}
	if (key == GLUT_KEY_LEFT && option2 == 1 && gameState == 5)
	{
		button1 = true;
		option2--;
	}
	if (key == GLUT_KEY_LEFT && gameState == 4)
	{
		PlaySound(0, 0, 0);
		gameState = 1;
		if (musicOn)
		{
			PlaySound("Music\\1.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	if (key == GLUT_KEY_LEFT && gameState == 3)
	{
		PlaySound(0, 0, 0);
		gameState = 1;
		if (musicOn)
		{
			PlaySound("Music\\1.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	if (key == GLUT_KEY_UP && gameState == 2 && go && !shoot && !gameOver && !pause)
	{
		if (r3 > 50)
		{
			r3 -= 5;
			e1 = r3 * cos(angle5);
			e2 = r3 * sin(angle5);
			inc++;
		}
		count = 0;
		ready = true;
		dx = inc * 4 * cos(angle5);
		dy = inc * 4 *sin(angle5);
	}
	if (key == GLUT_KEY_RIGHT && gameState == 2 && go && !gameOver && !pause)
	{
		if (angle5 >= 0 + pi / 10)
		{
			angle1 += pi/25;
			angle2 += pi/25;
			angle5 -= pi/25;
			a1 = r1 * cos(angle1);
			b1 = r1 * sin(angle1);
			a2 = r2 * cos(angle2);
			b2 = r2 * sin(angle2);
			angle3 -= pi/25;
			angle4 -= pi/25;
			c1 = r1 * cos(angle3);
			d1 = r1 * sin(angle3);
			c2 = r2 * cos(angle4);
			d2 = r2 * sin(angle4);
			if (!shoot)
			{
				e1 = r3 * cos(angle5);
				e2 = r3 * sin(angle5);
				dx = inc * 4 * cos(angle5);
				dy = inc * 4 * sin(angle5);
			}
		}
	}
	if (key == GLUT_KEY_LEFT && gameState == 2 && go && !gameOver && !pause)
	{
		if (angle5 <= pi - pi / 10)
		{
			angle1 -= pi/20;
			angle2 -= pi/20;
			angle5 += pi/20;
			a1 = r1 * cos(angle1);
			b1 = r1 * sin(angle1);
			a2 = r2 * cos(angle2);
			b2 = r2 * sin(angle2);
			angle3 += pi/20;
			angle4 += pi/20;
			c1 = r1 * cos(angle3);
			d1 = r1 * sin(angle3);
			c2 = r2 * cos(angle4);
			d2 = r2 * sin(angle4);
			if (!shoot)
			{
				e1 = r3 * cos(angle5);
				e2 = r3 * sin(angle5);
				dx = inc * 4 * cos(angle5);
				dy = inc * 4 * sin(angle5);
			}
		}
	}
}

void sound()
{
	if (musicOn)
	{
		if (button1)
		{
			if (musicOn)
			{
				PlaySound("Download\\button-17.wav", NULL, SND_ASYNC);
			}
			button1 = false;
		}
	}
}

void sort()
{
	int c = t;
	high_score temp;
	while (top[c].score > top[c - 1].score)
	{
		strcpy_s(temp.name, top[c].name);
		temp.score = top[c].score;

		strcpy_s(top[c].name, top[c-1].name);
		top[c].score = top[c-1].score;

		strcpy_s(top[c-1].name,temp.name);
		top[c-1].score = temp.score;
		c--;
	}
}

void gameover()
{
	if (gameOver)
	{
		if (musicOn)
		{
			PlaySound("Sound Effect\\9.wav", NULL, SND_ASYNC);
			musicOn = false;
			strcpy_s(top[t].name, name);
			top[t].score = score;
			sort();
			FILE* HG;
			fopen_s(&HG, "high_score.txt", "w");
			int i=0;
			while (i < 10 && top[i].score)
			{
				fprintf_s(HG, "\n%s", top[i].name,sizeof(top[i].name));
				fprintf_s(HG, "\n%d", top[i].score,sizeof(top[i].score));
				i++;
			}
			fclose(HG);
			
			if (t < 10)
				t++;
		}
	}
}

void change()
{
	if (!pause)
	{
		for (int i = 0; i <= BallonNumber + ballon_inc; i++)
		{
			enemy[i].ballon_y -= dz;
			if (enemy[i].ballon_y <= 0)
			{
				enemy[i].ballon_y = 1000 + abs(rand()*3) % 3500;
			}
			enemy[i].ballon_index++;
			if (enemy[i].ballon_index >= 10)
			{
				enemy[i].ballon_index = 0;
			}
		}
	}
}

void setEnemy()
{
	if (!pause)
	{
		for (int i = 0; i < BallonNumber + ballon_inc; i++)
		{
			enemy[i].ballon_y = 800 + abs(rand()*3) % 2700;
			enemy[i].ballon_x = abs(rand()) % 950;
			enemy[i].ballon_index = i;
			enemy[i].ballon_show = true;
		}
	}
}

void newgame()
{
	if (gameOver)
	{
		j++;
		if (j == 2)
		{
			gameOver = false;
			gameState = 1;
			musicOn = true;
			go = false;
			begin = false;
			score = 0;
			life = 7;
			day = 0;
			k = 0;
			j = 0;
			a1 = 10;
			b1 = 0;
			a2 = 10;
			b2 = 90;
			c1 = 10;
			d1 = 0;
			c2 = 10;
			d2 = 90;
			e1 = 0;
			e2 = 80;
			angle1 = atan(b1 / a1);
			angle2 = atan(b2 / a2);
			angle3 = atan(d1 / c1);
			angle4 = atan(d2 / c2);
			angle5 = pi / 2;
			l = 0;
			PlaySound("Music\\1.wav", NULL, SND_LOOP | SND_ASYNC);
			for (int i = 0; i < BallonNumber + ballon_inc; i++)
			{
				enemy[i].ballon_y = 800 + abs(rand()*3) % 2700;
				enemy[i].ballon_x = abs(rand()) % 950;
				enemy[i].ballon_index = i;
				enemy[i].ballon_show = true;
				pause = true;
			}
		}
	}
}

void videoPlay()
{
	if (gameState == -1 && videoInd!=554)
	{
		videoInd++;
	}
	if (videoInd == 554 && move != 650 && gameState == -1)
	{
		move += 10;
	}
	if (move == 650 && gameState == -1)
	{
		k++;
		if (k == 48)
		{
			gameState= 0;
			if (musicOn)
			{
				PlaySound("Music\\0.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			k = 0;
		}
	}
}

void daychange()
{
	if (day != 3 && go && !pause)
		day++;
	else
	{
		day = 0;
		if (life < 7)
			life++;
		k = 100;
	}
}

int main()
{
	FILE *HG;
	fopen_s(&HG,"high_score.txt", "r");
	
	while (!feof(HG))
	{
		fscanf_s(HG, "%s", top[t].name,sizeof(top[t].name));
		fscanf_s(HG, "%d", &top[t].score,sizeof(top[t].score));
		t++;
	}
	

	fclose(HG);


	setEnemy();
	if (musicOn)
	{
		if (gameState == -1)
		{
			PlaySound("Music\\9.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	iSetTimer(10, sound);
	iSetTimer(20, change);
	iSetTimer(10, gameover);
	iSetTimer(5000, newgame);
	iSetTimer(40, videoPlay);	
	iSetTimer(60000, daychange);
	iInitialize(1000, 650, "Ballon Shooter");
	return 0;
}
