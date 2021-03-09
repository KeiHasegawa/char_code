#include <wchar.h>
#include <stdio.h>

int main()
{
  wchar_t wc = L'a';
  fwprintf(stdout, L"'%c'\n", wc);
  return 0;
}
