#include <stdio.h>

int total (int kor, int eng, int mat);
double average(int tot);
void print_title(void);

int main(void)
{
  //int kor, eng, mat;
  printf("input score : ");
  scanf("%d%d%d", &kor, &eng, &mat);
  void print_title(void);
  
}

void print_title(void)
{
  printf("=====< score >=====");
  
  int i;
  for(i=0;i<29;i++)
  {
    printf("-");
  }
  
  printf("  KOR  ENG  MAT  TOTLE  AVG  ");

  int j;
  for(j=0;j<29;j++)
  {
    printf("-");
  }
  
  return 0;
}

int totle (int kor, int eng, int mat)
{
  int totle;
  totle=kor+eng+mat;
  printf("%d", totle);
}
