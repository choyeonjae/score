#include <stdio.h>

int total (int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void)
{
  int k, e, m;
  printf("input score : ");
  scanf("%d%d%d", &k, &e, &m);
  void print_title(void);
  int total;
  total=total (k, e, m);
  int avg;
  avg=average(total);
  
  printf("  %d  %d  %d  %d  %d  ", k, e, m, total, avg);
}

void print_title(void)
{
  printf("=====< score >=====");
  
  int i;
  for(i=0;i<29;i++)
  {
    printf("-");
  }
  
  printf("  KOR  ENG  MAT  TOTAL  AVG  ");

  int j;
  for(j=0;j<29;j++)
  {
    printf("-");
  }
  
  return 0;
}

int total (int kor, int eng, int mat)
{
  int total;
  total=kor+eng+mat;
}

double average(int tot)
{
  double avg;
  avg=(double)tot/3;
}
