 #include <iostream>
  #include <cstdio>
  #include <cstring>
  
  using namespace std;
  
  int map[4][4], cnt[4][4];
  const int pos[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
  
 bool Judge(int i, int j)
 {
     return (i < 3 && i >= 0 && j < 3 && j >= 0);
 }
 
 void Press(int i, int j)
 {
     cnt[i][j] += map[i][j];
     for(int k = 0; k < 4; k++)
     {
         int ii = i + pos[k][0];
         int jj = j + pos[k][1];
         if(Judge(ii, jj))
             cnt[ii][jj] += map[i][j];
     }
 }
 
 int main()
 {
     while(scanf("%d", &map[0][0]) != EOF)
     {
         memset(cnt, 0, sizeof(cnt));
         Press(0, 0);
         for(int i = 0; i < 3; i++)
         {
             for(int j = 0; j < 3; j++)
             {
                 if(!i && !j) continue;
                 scanf("%d", &map[i][j]);
                 Press(i, j);
             }
         }
         for(int i = 0; i < 3; i++)
         {
             for(int j = 0; j < 3; j++)
                 printf("%d", 1 - (cnt[i][j] & 1));
             puts("");
         }
     }
     return 0;
 }