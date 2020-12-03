#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int priority(char x){
	switch (x){
		case '+':

		case '-':

		case '=':
			return 1;
		case '*':

		case '/':
			return 2;
		case '(':
			return 3;
	}
}

double compute(double x, double y, char op){
	switch(op){
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
	}
}

int main(int argc, char **argv){
	char s2[500],t[1001],op;
	double s1[500];
	int top1 = -1,top2 = -1;
	double x,y;
	fgets(t,sizeof(t),stdin);
	for(int i =0; i<strlen(t); i++){
		if(t[i]>='0' && t[i]<='9'){
			double value = 0;
			while (t[i]>='0' && t[i]<='9'){
				value = 10*value + t[i] - '0';
				i++;
			}
			if(t[i] == '.'){
				int r = 10;
				i++;
				while(t[i]>='0' && t[i]<='9'){
					value += (double)(t[i]-'0')/r;
					r = 10 * r;
					i++;
				}
			}
			s1[++top1] = value;
		}
		if(t[i] == ')'){
			while (s2[top2] != '('){
				y = s1[top1--];
				x = s1[top1--];
				op = s2[top2--];
				s1[++top1] = compute(x,y,op);
			}
			top2--;
		}else{
			while (top2 != -1 && s2[top2] != '(' && priority(t[i])<=priority(s2[top2])){
				y = s1[top1--];
				x = s1[top1--];
				op = s2[top2--];
				s1[++top1] = compute(x,y,op);
			}
			s2[++top2] = t[i];
		}
	}
	printf("%.2f\n",s1[top1]);
}
