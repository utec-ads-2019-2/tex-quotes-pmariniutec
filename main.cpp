#include <cstdio>

int main() {
  char ch;
  long int count = 0;

  while(scanf("%c", &ch) == 1) {
	if(ch == '"') {
	  count++;
	  if(count % 2 == 1) printf("``");
	  else printf("''");
	} else {
	  printf("%c", ch);
	}
  }
}
