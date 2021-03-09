#include <wchar.h>
#include <stdio.h>

int main()
{
  wchar_t wc = L'—Ç';
  fwprintf(stdout, L"'%c'\n", wc);
  return 0;
}
