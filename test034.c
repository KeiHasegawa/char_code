#include <stdio.h>

int main()
{
  char a[] = {
    0x1b, 0x28, 0x49,  // JIS コード半角カナの始まり
    0x27,              // JIS コード半角カナの 'ｧ'
    0x0a               // 改行
  };
  for (int i = 0 ; i != sizeof a/sizeof a[0] ; ++i)
    putc(a[i], stdout);
  return 0;
}

