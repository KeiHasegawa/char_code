#include <stdio.h>

#define CHOICE 1

int main()
{
  puts("#include <stdio.h>");
  puts("");
#if CHOICE == 2
  puts("void f()");
  puts("{");
  puts("  printf(\"hello world\\n\");");
  puts("}");
  puts("");
#endif // CHOICE == 2
  puts("int main()");
  puts("{");
  printf("  const char* p = \"");
#if CHOICE == 1
  char a[] = {
	      0x1b, 0x24, 0x42,  // JIS Š¿Žš‚ÌŽn‚Ü‚è
	      0x22, 0x3b, 0x70, 0x72, 0x69, 0x6e, 0x74,
	      // "    ;     p     r   i     n     t
	      0x66, 0x28, 0x22, 0x68, 0x65, 0x6c, 0x6c, 0x6f, // 0x20,
	      // f   (      "     h     e    l    l     o     (‹ó”’)
	      0x77, 0x6f, 0x72, 0x6c, 0x64, 0x5c, 0x6e, 0x22, 0x29, 0x3b
	      // w   o     r      l     d     \    n     "     )     ;
  };
#endif // CHOICE == 1
#if CHOICE == 2
  char a[] = {
	      0x1b, 0x24, 0x42,  // JIS Š¿Žš‚ÌŽn‚Ü‚è
	      0x22, 0x3b, 0x66, 0x28, 0x29,  0x3b
	      // "    ;     f     (    )      ;
  };
#endif //  CHOICE == 2

  for (int i = 0 ; i != sizeof a/sizeof a[0] ; ++i)
    putc(a[i], stdout);

  puts("");
  puts("  return 0;");
  puts("}");
  return 0;
}
