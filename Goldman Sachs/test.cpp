#include <bits/stdc++.h>
int main(){
	char str[]="Limericks";
	char *s;
	s=&str[6]-4;
	while(*s) printf("%c", *s++);
}
